//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, NSURL, NSValue;

@protocol ADSAdSpace_RPC
- (void)_remote_cancelScheduledAd;
- (void)_remote_playbackFailedForURL:(NSString *)arg1;
- (void)_remote_playbackFinishedForContentHash:(NSData *)arg1;
- (void)_remote_playbackResumed;
- (void)_remote_playbackPaused;
- (void)_remote_playbackStarted;
- (void)_remote_scheduleAd;
- (void)_remote_reportPreRollImpression;
- (void)_remote_interstitialRemovedFromSuperview;
- (void)_remote_presentInterstitialStoryboard;
- (void)_remote_bannerCancelAction;
- (void)_remote_bannerRefuseAction;
- (void)_remote_bannerBeginActionFromFrame:(NSValue *)arg1 tapLocation:(NSValue *)arg2;
- (void)_remote_setShouldNotCycle:(_Bool)arg1;
- (void)_remote_setFrame:(NSValue *)arg1;
- (void)_remote_setVisibility:(long long)arg1;
- (void)_remote_setAuthenticationUserName:(NSString *)arg1;
- (void)_remote_setSection:(NSString *)arg1;
- (void)_priv_cycleImpressionImmediately;
- (void)_priv_setServerURL:(NSURL *)arg1;
- (void)_remote_setIdentifier:(NSString *)arg1;
- (void)_remote_close;
- (void)_remote_setupComplete;
@end

