//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVController, MPImageCache, MPImageCacheRequest, NSData, NSMutableDictionary, NSObject<OS_dispatch_queue>, UIImage;

@interface MPNowPlayingObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIImage *_currentArtworkImage;
    NSData *_currentArtworkImageData;
    MPImageCacheRequest *_currentImageCacheRequest;
    _Bool _hasSeenAnyItem;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_statusBarQueue;
    NSMutableDictionary *_mediaItemCoalescedUpdateDateAccessedTimers;
    _Bool _enabled;
    MPImageCache *_imageCache;
    MPAVController *_player;
}

@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(readonly, nonatomic) MPImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (_Bool)_reloadArtworkIfPossible;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (void)_prefetchArtworkForNextItem;
- (void)_postNowPlayingInfoForItem:(id)arg1;
- (long long)_MPNowPlayingShuffleModeForMPShuffleType:(unsigned long long)arg1;
- (long long)_MPNowPlayingRepeatModeForMPRepeatType:(unsigned long long)arg1;
- (_Bool)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (_Bool)_hasProperConditionsToLoadArtwork;
- (void)_coalescedUpdateLastUsedDateForCurrentItem;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_repeatTypeDidChangeNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_isBannedDidChangeNotification:(id)arg1;
- (void)_isLikedDidChangeNotification:(id)arg1;
- (void)_isInWishListDidChangeNotification:(id)arg1;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_avItemIsExplicitDidChangeNotification:(id)arg1;
- (void)_avItemDurationDidChangeNotification:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_postNowPlayingInfo;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)init;

@end
