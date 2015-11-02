//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerInteractiveTransitioning.h"

@class NSString, QLPreviewController;

@interface QLPreviewTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    _Bool showing;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

@property id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property _Bool showing; // @synthesize showing;
- (void)updateStatusBarWithDuration:(double)arg1;
- (void)didTransitionWithAnimationEnding:(_Bool)arg1;
- (void)willTransitionWithAnimationEnding:(_Bool)arg1;
- (long long)_transitionStateForAnimationEnding:(_Bool)arg1;
@property(readonly) QLPreviewController *previewController;
- (void)startInteractiveTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
