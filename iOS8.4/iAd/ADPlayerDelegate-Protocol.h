//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADAdImpressionPublicAttributes, ADPlayer, AVPlayer, UIViewController;

@protocol ADPlayerDelegate <NSObject>
- (UIViewController *)viewControllerForActionFromAdPlayer:(ADPlayer *)arg1;
- (void)adPlayerDidFinishPlayback:(ADPlayer *)arg1;
- (void)adPlayer:(ADPlayer *)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(ADPlayer *)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayer:(ADPlayer *)arg1 readyForPlaybackWithAVPlayer:(AVPlayer *)arg2 impressionProperties:(ADAdImpressionPublicAttributes *)arg3;
- (void)adPlayerFailedToPlayWithUnknownError:(ADPlayer *)arg1;
- (void)adPlayerFailedToLoadAsset:(ADPlayer *)arg1;
- (void)adPlayerDidTimeout:(ADPlayer *)arg1;
@end

