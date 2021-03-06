//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface MPNetworkPlayabilityMonitor : NSObject
{
    long long _effectiveNetworkTypeForCloudPlayback;
    long long _effectiveNetworkTypeForRadioPlayback;
    double _lastAverageBitrate;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_queue;
    double _radioMinimumBitrateForHighQuality;
    _Bool _supportsRadio;
}

+ (id)sharedNetworkPlayabilityMonitor;
- (void).cxx_destruct;
- (void)_updateRadioMinimumBitrateWithStoreBag:(id)arg1;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
- (long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 playbackType:(long long)arg2;
@property(nonatomic) _Bool supportsRadio;
@property(readonly, nonatomic) long long networkType;
- (long long)effectiveNetworkTypeForPlaybackType:(long long)arg1;
@property(readonly, nonatomic) long long effectiveNetworkTypeForPlayback;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (void)_radioStoreBagDidLoadNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

