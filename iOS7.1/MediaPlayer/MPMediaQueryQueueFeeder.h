//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

@class MPMediaItem, MPMediaLibraryConnectionAssertion, MPMediaQuery, MPMediaQueryShuffledItems, NSArray;

@interface MPMediaQueryQueueFeeder : MPQueueFeeder
{
    long long _ignoreShuffleTypeChangesCount;
    MPMediaQueryShuffledItems *_items;
    unsigned int _itemsChanged:1;
    MPMediaLibraryConnectionAssertion *_connectionAssertion;
    MPMediaQuery *_query;
    NSArray *_prefixMediaItems;
    MPMediaItem *_focusedItem;
    unsigned int _hasPendingLibraryChanges:1;
    _Bool _useAirPlayMusicMode;
    MPMediaItem *_cloudDialogAllowedMediaItem;
}

@property(nonatomic) _Bool useAirPlayMusicMode; // @synthesize useAirPlayMusicMode=_useAirPlayMusicMode;
@property(retain, nonatomic) MPMediaItem *cloudDialogAllowedMediaItem; // @synthesize cloudDialogAllowedMediaItem=_cloudDialogAllowedMediaItem;
@property(retain, nonatomic) MPMediaItem *focusedItem; // @synthesize focusedItem=_focusedItem;
@property(retain, nonatomic) NSArray *prefixMediaItems; // @synthesize prefixMediaItems=_prefixMediaItems;
@property(copy, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)_performWhileIgnoringShuffleChanges:(CDUnknownBlockType)arg1;
- (void)_applyAirPlayMusicMode;
- (unsigned long long)_shuffleItemsInFeederQueryWithShuffleType:(unsigned long long)arg1 initialIndex:(unsigned long long)arg2;
- (unsigned long long)unshuffledIndexOfAVItem:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (void)_handleMediaLibraryDidChange;
- (void)_libraryDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepth;
- (id)playbackInfoAtIndex:(unsigned long long)arg1;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (_Bool)trackChangesCanEndPlayback;
- (void)shuffleItemsWithAnchor:(unsigned long long *)arg1;
- (void)setAVController:(id)arg1;
- (id)preferredLanguages;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemTypeForIndex:(unsigned long long)arg1;
- (Class)itemClass;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (void)dealloc;
- (id)init;

@end

