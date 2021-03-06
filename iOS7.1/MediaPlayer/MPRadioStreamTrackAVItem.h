//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRadioAVItem.h>

#import "AVAssetResourceLoaderDelegate.h"

@class NSArray, NSData, _MPRadioStreamMetadata;

@interface MPRadioStreamTrackAVItem : MPRadioAVItem <AVAssetResourceLoaderDelegate>
{
    _MPRadioStreamMetadata *_adamIDMetadata;
    long long _albumStoreID;
    NSArray *_buyOffers;
    _MPRadioStreamMetadata *_effectiveMetadata;
    NSData *_previousAdamIDBlob;
    _MPRadioStreamMetadata *_radioStreamTrackMetadata;
    long long _storeID;
    _MPRadioStreamMetadata *_timedMetadata;
}

- (void).cxx_destruct;
- (void)_updateEffectiveMetadataAndPostNotifications:(_Bool)arg1;
- (void)_reloadMetadataAndPostNotificationsIfNeeded:(_Bool)arg1;
- (float)_maximumBitRateForNetworkType:(long long)arg1;
- (void)_getCurrentTimedMetadata:(id *)arg1 pings:(id *)arg2 adamIDBlob:(id *)arg3;
- (id)_createMetadataForRadioStreamTrack;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)streamTrack;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)albumBuyButtonType;
- (id)albumBuyButtonText;
- (long long)storeID;
- (_Bool)supportsRadioTrackActions;
- (void)setPlayerItem:(id)arg1;
- (id)mainTitle;
- (void)loadAssetAndPlayerItem;
- (_Bool)isExplicitTrack;
- (_Bool)isAlwaysLive;
- (id)imageCacheRequestWithSize:(struct CGSize)arg1 time:(double)arg2 usePlaceholderAsFallback:(_Bool)arg3;
- (id)buyOffers;
- (id)artist;
- (long long)albumStoreID;
- (id)album;
- (void)dealloc;
- (id)initWithStreamTrack:(id)arg1;

@end

