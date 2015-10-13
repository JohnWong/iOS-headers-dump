//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController
{
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    _Bool _layoutStateShouldAvoidKeyboard;
}

- (_Bool)_presentationPotentiallyUnderlapsStatusBar;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldSubscribeToKeyboardNotifications;
- (id)presentedView;
- (_Bool)_shouldHideBottomCorner;
- (double)_dropShadowCornerRadius;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)_changeLayoutModeToAvoidKeyboard:(_Bool)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldChangeStatusBarViewController;
- (_Bool)_shouldOccludeDuringPresentation;
- (id)_presentationView;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (unsigned long long)dropShadowAutoresizingMask;
- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

