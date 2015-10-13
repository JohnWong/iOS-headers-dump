//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIStatusBarCorners, UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView
{
    UIStatusBarStyleAttributes *_style;
    UIStatusBarCorners *_topCorners;
    UIImageView *_glowView;
    _Bool _glowEnabled;
    _Bool _suppressGlow;
}

- (_Bool)_topCornersAreRounded;
- (id)_glowImage;
- (id)_baseImage;
- (id)_backgroundImageName;
- (void)_stopGlowAnimation;
- (void)_startGlowAnimationWaitForNextCycle:(_Bool)arg1;
- (_Bool)_styleCanGlow;
- (void)setSuppressesGlow:(_Bool)arg1;
- (void)_setGlowAnimationEnabled:(_Bool)arg1 waitForNextCycle:(_Bool)arg2;
- (void)setGlowAnimationEnabled:(_Bool)arg1;
- (id)style;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;

@end

