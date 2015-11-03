//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPMediaPlayback.h"

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback>
{
    id _implementation;
}

+ (void)allInstancesResignActive;
- (void).cxx_destruct;
- (_Bool)_isReadyForDisplay;
@property(readonly, nonatomic) _Bool readyForDisplay;
- (void)_resignActive;
@property(nonatomic) float currentPlaybackRate;
@property(nonatomic) double currentPlaybackTime;
- (double)endPlaybackTime;
- (void)setEndPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (void)setInitialPlaybackTime:(double)arg1;
- (struct CGSize)naturalSize;
- (double)playableDuration;
- (double)duration;
- (long long)movieSourceType;
- (void)setMovieSourceType:(long long)arg1;
- (long long)movieMediaTypes;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)stop;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
- (void)prepareToPlay;
- (_Bool)isAirPlayVideoActive;
- (void)setAllowsAirPlay:(_Bool)arg1;
- (_Bool)allowsAirPlay;
@property(nonatomic) long long scalingMode;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(nonatomic) _Bool shouldAutoplay;
@property(nonatomic) long long repeatMode;
@property(nonatomic) long long controlStyle;
@property(readonly, nonatomic) long long loadState;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *view;
@property(copy, nonatomic) NSURL *contentURL;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithContentURL:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

