//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import "UIAlertViewDelegate.h"

@class ADBannerView, MPRadioAdObserver, NSArray, NSMapTable, RadioStation, RadioStationSkipController;

@interface MPRadioQueueFeeder : MPQueueFeeder <UIAlertViewDelegate>
{
    MPRadioAdObserver *_adObserver;
    _Bool _didReceiveTracklistEnd;
    NSMapTable *_fetchingTracksCompletionHandlersByStation;
    _Bool _hasReceivedStreamTrack;
    long long _maximumGetTracksRetryCount;
    NSArray *_previousDatabaseTrackPlaybackDescriptorQueue;
    ADBannerView *_skipAdView;
    RadioStation *_station;
    RadioStationSkipController *_stationSkipController;
    NSMapTable *_stationTracklistRetrievalRetryCount;
    NSArray *_tracks;
    _Bool _wasUsingBackgroundNetwork;
}

+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(_Bool)arg1 removeTracks:(_Bool)arg2;
+ (id)_tracksWithPromotionalContentFromTracks:(id)arg1;
+ (long long)maximumNumberOfTracksToFetch;
+ (void)setUserDefaultExplicitTracksEnabled:(_Bool)arg1;
+ (_Bool)isUserDefaultExplicitTracksEnabled;
+ (_Bool)isProfileExplicitContentRestricted;
+ (_Bool)isExplicitTracksEnabled;
+ (void)_explicitContentAllowedDidChangeNotification:(id)arg1;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
- (void)_updateWithTracks:(id)arg1 tracklistActionType:(long long)arg2 options:(long long)arg3;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (id)_trackAtIndex:(unsigned long long)arg1;
- (void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(long long)arg2;
- (void)_insertAdTrack:(id)arg1 afterCurrentItemIndex:(unsigned long long)arg2;
- (unsigned long long)_indexOfItem:(id)arg1;
- (unsigned long long)_indexOfCurrentItem;
- (_Bool)_hasReceivedStreamTrack;
- (void)_fetchAdditionalTracksWithBaseIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_endPlaybackIfNecessaryForNetworkType;
- (id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(_Bool)arg2 skipDate:(id)arg3;
- (_Bool)_canHavePlaceholderTrack;
- (void)_cancelScheduledAds;
- (_Bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(_Bool)arg2 startPlayback:(_Bool)arg3;
@property(retain, nonatomic) RadioStation *station;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_songBeganResponseNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangedNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_didFailToLoadAdNotification:(id)arg1;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (_Bool)isRadioQueueFeeder;
- (unsigned long long)initialPlaybackQueueDepth;
- (void)setAVController:(id)arg1;
- (_Bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(_Bool)arg2;
- (unsigned long long)realRepeatType;
- (_Bool)playerPreparesItemsForPlaybackAsynchronously;
- (int)playbackMode;
- (id)playbackInfoAtIndex:(unsigned long long)arg1;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (unsigned long long)itemTypeForIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (Class)itemClass;
- (_Bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)controller:(id)arg1 willChangePlaybackIndexBy:(long long)arg2 deltaType:(int)arg3 ignoreElapsedTime:(_Bool)arg4 allowSkippingUnskippableContent:(_Bool)arg5;
- (_Bool)canSkipToPreviousItem;
- (_Bool)canSkipItem:(id)arg1;
- (_Bool)canSeek;
- (void)dealloc;
- (id)init;

@end
