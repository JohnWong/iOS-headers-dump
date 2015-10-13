//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "NSCoding.h"
#import "UIAppearanceContainer.h"
#import "_UIViewServiceDeputy.h"

@class NSArray, NSBundle, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UIBarButtonItem, UIDropShadowView, UINavigationController, UINavigationItem, UIPopoverController, UIScrollView, UISearchDisplayController, UISplitViewController, UIStoryboard, UITabBarController, UITabBarItem, UITransitionView, UIView, UIWindow, _UILayoutGuide;

@interface UIViewController : UIResponder <_UIViewServiceDeputy, NSCoding, UIAppearanceContainer>
{
    UIView *_view;
    UITabBarItem *_tabBarItem;
    UINavigationItem *_navigationItem;
    NSArray *_toolbarItems;
    NSString *_title;
    NSString *_nibName;
    NSBundle *_nibBundle;
    UIViewController *_parentViewController;
    UIViewController *_childModalViewController;
    UIViewController *_parentModalViewController;
    UIViewController *_previousRootViewController;
    UIView *_modalTransitionView;
    UIResponder *_modalPreservedFirstResponder;
    id _dimmingView;
    id _dropShadowView;
    id _currentAction;
    UIStoryboard *_storyboard;
    NSArray *_storyboardSegueTemplates;
    NSDictionary *_externalObjectsTableForViewLoading;
    NSArray *_topLevelObjectsToKeepAliveFromStoryboard;
    UIView *_savedHeaderSuperview;
    UIView *_savedFooterSuperview;
    UIBarButtonItem *_editButtonItem;
    UISearchDisplayController *_searchDisplayController;
    long long _modalTransitionStyle;
    long long _modalPresentationStyle;
    long long _lastKnownInterfaceOrientation;
    UIPopoverController *_popoverController;
    UIView *_containerViewInSheet;
    struct CGSize _contentSizeForViewInPopover;
    struct CGSize _formSheetSize;
    UIScrollView *_recordedContentScrollView;
    CDUnknownBlockType _afterAppearance;
    long long _explicitAppearanceTransitionLevel;
    NSArray *_keyCommands;
    struct {
        unsigned int appearState:2;
        unsigned int isEditing:1;
        unsigned int isPerformingModalTransition:1;
        unsigned int hidesBottomBarWhenPushed:1;
        unsigned int autoresizesArchivedViewToFullSize:1;
        unsigned int viewLoadedFromControllerNib:1;
        unsigned int isRootViewController:1;
        unsigned int customizesForPresentationInPopover:1;
        unsigned int isSuspended:1;
        unsigned int wasApplicationFrameAtSuspend:1;
        unsigned int wantsFullScreenLayout:1;
        unsigned int shouldUseFullScreenLayout:1;
        unsigned int allowsAutorotation:1;
        unsigned int searchControllerRetained:1;
        unsigned int oldModalInPopover:1;
        unsigned int isModalInPopover:1;
        unsigned int isInWillRotateCallback:1;
        unsigned int disallowMixedOrientationPresentations:1;
        unsigned int isFinishingModalTransition:1;
        unsigned int definesPresentationContext:1;
        unsigned int providesPresentationContextTransitionStyle:1;
        unsigned int containmentSupport:1;
        unsigned int isSettingAppearState:1;
        unsigned int isInAnimatedVCTransition:1;
        unsigned int presentationIsChanging:1;
        unsigned int isBeingPresented:1;
        unsigned int containmentIsChanging:1;
        unsigned int explicitTransitionIsAppearing:1;
        unsigned int disableAppearanceTransitions:1;
        unsigned int needsDidMoveCleanup:1;
        unsigned int suppressesBottomBar:1;
        unsigned int disableRootPromotion:1;
        unsigned int interfaceOrientationReentranceGuard:1;
        unsigned int isExecutingAfterAppearance:1;
        unsigned int rootResignationNeeded:1;
        unsigned int shouldSynthesizeSupportedOrientations:1;
        unsigned int viewConstraintsNeedUpdateOnAppearance:1;
        unsigned int shouldForceNonAnimatedTransition:1;
        unsigned int isInCustomTransition:1;
        unsigned int usesSharedView:1;
        unsigned int extendedLayoutIncludesOpaqueBars:1;
        unsigned int automaticallyAdjustInsets:1;
        unsigned int previousShouldUnderlapUnderStatusBar:1;
        unsigned int freezeShouldUnderlapUnderStatusBar:1;
        unsigned int neverResizeRoot:1;
    } _viewControllerFlags;
    long long _retainCount;
    _Bool _ignoreAppSupportedOrientations;
    _Bool _viewHostsLayoutEngine;
    NSString *_storyboardIdentifier;
    id <UIViewControllerTransitioningDelegate> _transitioningDelegate;
    _Bool _modalPresentationCapturesStatusBarAppearance;
    NSMutableArray *_childViewControllers;
    double _customNavigationInteractiveTransitionDuration;
    double _customNavigationInteractiveTransitionPercentComplete;
    UITransitionView *_customTransitioningView;
    double _navigationControllerContentOffsetAdjustment;
    _UILayoutGuide *_topLayoutGuide;
    _UILayoutGuide *_bottomLayoutGuide;
    NSLayoutConstraint *_topBarInsetGuideConstraint;
    NSLayoutConstraint *_bottomBarInsetGuideConstraint;
    UIViewController *_sourceViewControllerIfPresentedViaPopoverSegue;
    UIViewController *_modalSourceViewController;
    UIViewController *_presentedStatusBarViewController;
    unsigned long long _edgesForExtendedLayout;
    UIView *__embeddedView;
    UIView *__embeddingView;
    id <_UIViewControllerContentViewEmbedding> __embeddedDelegate;
    struct CGSize _preferredContentSize;
    struct UIEdgeInsets _navigationControllerContentInsetAdjustment;
    struct UIEdgeInsets _contentOverlayInsets;
    struct CGRect __embeddedViewFrame;
}

+ (id)_currentStatusBarHiddenViewController;
+ (id)_currentStatusBarStyleViewController;
+ (void)attemptRotationToDeviceOrientation;
+ (_Bool)_doesOverrideLegacyShouldAutorotateMethod;
+ (double)durationForTransition:(int)arg1;
+ (double)customTransitionDuration;
+ (void)setCustomTransitionDuration:(double)arg1;
+ (id)_viewControllerForFullScreenPresentationFromView:(id)arg1;
+ (_Bool)_optsOutOfPopoverControllerHierarchyCheck;
+ (_Bool)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2;
+ (_Bool)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2 ignoreInWindowCheck:(_Bool)arg3;
+ (id)_allDescriptions;
+ (void)_traverseViewControllerHierarchy:(CDUnknownBlockType)arg1;
+ (void)_traverseViewControllerHierarchyWithDelayedRelease:(CDUnknownBlockType)arg1;
+ (void)_traverseViewControllerHierarchyWithDelayedReleaseArray:(const void **)arg1 block:(CDUnknownBlockType)arg2;
+ (void)setViewController:(id)arg1 forView:(id)arg2;
+ (void)removeViewControllerForView:(id)arg1;
+ (id)viewControllerForView:(id)arg1;
+ (int)_keyboardDirectionForTransition:(int)arg1 isOrderingIn:(_Bool)arg2;
+ (id)existingNibNameMatchingClassName:(id)arg1 bundle:(id)arg2;
+ (_Bool)_preventsAppearanceProxyCustomization;
+ (_Bool)_frameIsNotResizedForDoubleHeightStatusBarChanges:(id)arg1;
+ (_Bool)_synthesizeSupportedInterfaceOrientationsFromShouldAutorotateToInterfaceOrientation;
+ (struct CGSize)defaultFormSheetSize;
+ (_Bool)doesOverrideSupportedInterfaceOrientations;
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (_Bool)doesOverrideViewControllerMethod:(SEL)arg1;
+ (_Bool)doesOverrideViewControllerMethod:(SEL)arg1 inBaseClass:(Class)arg2;
+ (_Bool)_shouldUseLegacyModalViewControllers;
+ (_Bool)_isNestedViewControllerSupportDisabled;
+ (void)_disableNestedViewControllerSupport:(_Bool)arg1;
+ (void)_forceLegacyModalViewControllers:(_Bool)arg1;
+ (_Bool)_shouldUseRootViewControllerAutopromotion;
+ (void)initialize;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)XPCInterface;
@property(nonatomic, setter=_setEmbeddedDelegate:) id <_UIViewControllerContentViewEmbedding> _embeddedDelegate; // @synthesize _embeddedDelegate=__embeddedDelegate;
@property(nonatomic, setter=_setEmbeddedViewFrame:) struct CGRect _embeddedViewFrame; // @synthesize _embeddedViewFrame=__embeddedViewFrame;
@property(retain, nonatomic, setter=_setEmbeddingView:) UIView *_embeddingView; // @synthesize _embeddingView=__embeddingView;
@property(retain, nonatomic, setter=_setEmbeddedView:) UIView *_embeddedView; // @synthesize _embeddedView=__embeddedView;
@property(nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(nonatomic) _Bool modalPresentationCapturesStatusBarAppearance; // @synthesize modalPresentationCapturesStatusBarAppearance=_modalPresentationCapturesStatusBarAppearance;
@property(retain, nonatomic, setter=_setPresentedStatusBarViewController:) UIViewController *_presentedStatusBarViewController; // @synthesize _presentedStatusBarViewController;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) UIViewController *parentModalViewController; // @synthesize parentModalViewController=_parentModalViewController;
@property(retain, nonatomic) UIDropShadowView *dropShadowView; // @synthesize dropShadowView=_dropShadowView;
@property(nonatomic, setter=_setModalSourceViewController:) UIViewController *_modalSourceViewController; // @synthesize _modalSourceViewController;
@property(nonatomic, setter=_setSourceViewControllerIfPresentedViaPopoverSegue:) UIViewController *_sourceViewControllerIfPresentedViaPopoverSegue; // @synthesize _sourceViewControllerIfPresentedViaPopoverSegue;
@property(readonly, nonatomic) NSArray *storyboardSegueTemplates; // @synthesize storyboardSegueTemplates=_storyboardSegueTemplates;
- (void)_setStoryboard:(id)arg1;
@property(retain, nonatomic) UIStoryboard *storyboard; // @synthesize storyboard=_storyboard;
@property(retain, nonatomic) NSBundle *nibBundle; // @synthesize nibBundle=_nibBundle;
@property(readonly, nonatomic) UIView *savedHeaderSuperview; // @synthesize savedHeaderSuperview=_savedHeaderSuperview;
@property(copy, nonatomic) NSString *nibName; // @synthesize nibName=_nibName;
@property(readonly, nonatomic) NSLayoutConstraint *_bottomBarInsetGuideConstraint; // @synthesize _bottomBarInsetGuideConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *_topBarInsetGuideConstraint; // @synthesize _topBarInsetGuideConstraint;
@property(nonatomic, setter=_setContentOverlayInsets:) struct UIEdgeInsets _contentOverlayInsets; // @synthesize _contentOverlayInsets;
@property(nonatomic, setter=_setNavigationControllerContentOffsetAdjustment:) double _navigationControllerContentOffsetAdjustment; // @synthesize _navigationControllerContentOffsetAdjustment;
@property(nonatomic, setter=_setNavigationControllerContentInsetAdjustment:) struct UIEdgeInsets _navigationControllerContentInsetAdjustment; // @synthesize _navigationControllerContentInsetAdjustment;
@property(retain, nonatomic) UITransitionView *customTransitioningView; // @synthesize customTransitioningView=_customTransitioningView;
@property(nonatomic) double customNavigationInteractiveTransitionPercentComplete; // @synthesize customNavigationInteractiveTransitionPercentComplete=_customNavigationInteractiveTransitionPercentComplete;
@property(nonatomic) double customNavigationInteractiveTransitionDuration; // @synthesize customNavigationInteractiveTransitionDuration=_customNavigationInteractiveTransitionDuration;
@property(copy, nonatomic) CDUnknownBlockType afterAppearanceBlock; // @synthesize afterAppearanceBlock=_afterAppearance;
@property(nonatomic) NSMutableArray *mutableChildViewControllers; // @synthesize mutableChildViewControllers=_childViewControllers;
- (void)_setKeyCommands:(id)arg1;
- (id)_keyCommands;
- (_Bool)isMovingFromParentViewController;
- (_Bool)isMovingToParentViewController;
- (_Bool)isBeingDismissed;
- (_Bool)isBeingPresented;
@property(nonatomic) _Bool searchBarHidNavBar;
- (void)_setSearchDisplayControllerUnretained:(id)arg1;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @dynamic searchDisplayController;
- (void)_setSearchDisplayController:(id)arg1 retain:(_Bool)arg2;
- (id)defaultPNGName;
- (id)_screen;
- (id)_effectiveStatusBarHiddenViewController;
- (id)_effectiveStatusBarStyleViewController;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)_preferredStatusBarHideAnimationParameters;
- (id)_preferredStatusBarStyleAnimationParameters;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)accessibilityLargeTextDidChange;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(_Bool)arg2 skipSelf:(_Bool)arg3;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(_Bool)arg3 skipSelf:(_Bool)arg4;
- (void)window:(id)arg1 resizeFromOrientation:(long long)arg2;
- (struct CGAffineTransform)tranformForScreenOriginRotation:(float)arg1;
- (void)_getRotationContentSettings:(CDStruct_010f855d *)arg1;
- (void)getRotationContentSettings:(CDStruct_010f855d *)arg1 forWindow:(id)arg2;
- (_Bool)_shouldUseOnePartRotation;
- (_Bool)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(_Bool)arg3 skipSelf:(_Bool)arg4;
@property(nonatomic, getter=isInWillRotateCallback) _Bool inWillRotateCallback;
- (struct CGRect)_boundsForOrientation:(long long)arg1;
- (struct CGPoint)_centerForOrientation:(long long)arg1;
- (_Bool)_isViewControllerInWindowHierarchy;
- (void)_updateLastKnownInterfaceOrientationOnPresentionStack:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)_setInterfaceOrientationOnModalRecursively:(long long)arg1;
- (long long)interfaceOrientation;
- (void)_clearLastKnownInterfaceOrientation;
- (void)_setLastKnownInterfaceOrientation:(long long)arg1;
- (long long)_lastKnownInterfaceOrientation;
- (id)rotatingFooterView;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (id)rotatingContentViewForWindow:(id)arg1;
- (id)rotatingHeaderView;
- (id)rotatingHeaderViewForWindow:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (_Bool)__withSupportedInterfaceOrientation:(long long)arg1 apply:(CDUnknownBlockType)arg2;
- (unsigned long long)__supportedInterfaceOrientations;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (long long)_preferredInterfaceOrientationForPresentationInWindow:(id)arg1 fromInterfaceOrientation:(long long)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_setIgnoreAppSupportedOrientations:(_Bool)arg1;
- (_Bool)_ignoreAppSupportedOrientations;
- (void)_setAllowsAutorotation:(_Bool)arg1;
- (_Bool)_allowsAutorotation;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)_updateInterfaceOrientationAnimated:(_Bool)arg1;
- (_Bool)_isInterfaceAutorotationDisabled;
- (void)_endDisablingInterfaceAutorotation;
- (void)_beginDisablingInterfaceAutorotation;
- (id)_viewControllerForSupportedInterfaceOrientations;
- (id)_viewControllersForRotationCallbacks;
- (id)_viewControllerForRotation;
- (id)viewControllerForRotation;
- (double)durationForTransition:(int)arg1;
- (id)_backgroundColorForModalFormSheet;
- (_Bool)_shouldIgnoreTouchesForModalFormSheet;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (_Bool)_shouldAutoPinInputViewsForModalFormSheet;
@property(nonatomic) _Bool disableRootPromotion;
- (void)_setDisallowMixedOrientationPresentations:(_Bool)arg1;
- (_Bool)_disallowMixedOrientationPresentations;
- (void)_handleTapToDismissModalCurl:(id)arg1;
- (void)_addCurlUpTapGestureRecognizerWithRevealedHeight:(double)arg1;
- (_Bool)_hasCurlUpTapGestureRecognizer;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) UIViewController *presentedViewController;
@property(nonatomic) _Bool providesPresentationContextTransitionStyle;
- (_Bool)_isPresentationContextByDefault;
@property(nonatomic) _Bool definesPresentationContext;
- (void)_legacyModalDismissTransitionDidComplete;
- (void)_didCancelDismissTransition:(id)arg1;
- (void)_didFinishDismissTransition;
- (void)_legacyModalPresentTransitionDidComplete;
- (void)_didCancelPresentTransition:(id)arg1;
- (void)_didFinishPresentTransition;
- (_Bool)transitionViewShouldUseViewControllerCallbacks;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewControllerWithTransition:(int)arg1;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetViewController;
- (void)_legacyDismissModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)transitionCoordinator;
- (id)_transitionCoordinatorForWindowController:(id)arg1;
- (id)_customInteractionControllerForDismissal:(id)arg1;
- (id)_customAnimatorForDismissedController:(id)arg1;
- (id)_customInteractionControllerForPresentation:(id)arg1;
- (id)_customAnimatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_endDelayingPresentation;
- (void)_beginDelayingPresentation;
- (void)_beginDelayingPresentation:(double)arg1 cancellationHandler:(CDUnknownBlockType)arg2;
- (void)_cancelDelayedPresentation:(_Bool)arg1;
- (id)_delayingViewController;
- (_Bool)_isWaitingForDelayedPresentation;
- (_Bool)_isDelayingPresentation;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (int)_transitionForModalTransitionStyle:(long long)arg1 appearing:(_Bool)arg2;
@property(readonly, nonatomic) _Bool _useSheetRotation;
@property(readonly, nonatomic) _Bool _isModalSheet;
@property(readonly, nonatomic) _Bool _isInSheetPresentation;
@property(readonly, nonatomic) _Bool _isPresentedFormSheet;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (_Bool)_useCustomDimmingView;
@property(readonly, nonatomic) _Bool _isDimmingBackground;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (long long)_preferredInterfaceOrientationGivenStatusBarAndDeviceAndOrientation:(long long)arg1;
- (long long)_preferredInterfaceOrientationGivenStatusBarAndDeviceOrientationAndMask:(unsigned long long *)arg1;
- (long long)_supportedInterfaceOrientationForInterfaceOrientation:(long long)arg1 givenMask:(unsigned long long *)arg2;
- (void)_legacyPresentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)userDidCancelPopoverView:(id)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(_Bool)arg2 andBottomView:(_Bool)arg3;
- (_Bool)_ancestorViewControllerIsInPopover;
- (id)_popoverController;
- (void)_setPopoverController:(id)arg1;
- (void)_setModalPresentationStyle:(long long)arg1;
- (void)_sheetPresentAnimationDidStop;
- (void)setIsSheet:(_Bool)arg1;
- (_Bool)isSheet;
- (void)_setCustomizesForPresentationInPopover:(_Bool)arg1;
- (_Bool)_customizesForPresentationInPopover;
- (void)_overlayPresentAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (CDUnknownBlockType)_completionBlock;
- (id)currentAction;
@property(readonly, nonatomic) UIViewController *modalViewController;
@property(retain, nonatomic) UIViewController *childModalViewController;
@property(retain, nonatomic) UITransitionView *modalTransitionView;
- (void)setShouldForceNonAnimatedTransition:(_Bool)arg1;
@property(nonatomic, getter=isFinishingModalTransition) _Bool finishingModalTransition;
- (void)setPerformingModalTransition:(_Bool)arg1;
- (_Bool)isPerformingModalTransition;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(nonatomic) _Bool extendedLayoutIncludesOpaqueBars;
@property(nonatomic) _Bool wantsFullScreenLayout;
- (_Bool)_reallyWantsFullScreenLayout;
- (_Bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (_Bool)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (_Bool)_shouldUseFullScreenLayout;
- (_Bool)_viewControllerUnderlapsStatusBar;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWantsViewsToDisappear;
- (id)_visibleView;
- (_Bool)_isViewInWindowWithoutParentViewController;
- (void)purgeMemoryForReason:(int)arg1;
- (_Bool)_canReloadView;
- (void)didReceiveMemoryWarning;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)_descriptionWithChildren:(int)arg1;
- (void)_traverseViewControllerHierarchyFromLevel:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_description;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
@property(readonly, nonatomic) _Bool inExplicitAppearanceTransition;
- (_Bool)_doesSelfOrAncestorPassPredicate:(CDUnknownBlockType)arg1;
- (_Bool)_didSelfOrAncestorBeginAppearanceTransition;
- (void)_resignRootViewController;
- (_Bool)_tryBecomeRootViewControllerInWindow:(id)arg1;
- (_Bool)_isRootViewController;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_endAppearanceTransitionToViewController:(id)arg1;
- (void)_beginAppearanceTransitionToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_executeAfterAppearanceBlock;
@property(nonatomic) _Bool needsDidMoveCleanup;
@property(nonatomic) _Bool appearanceTransitionsAreDisabled;
- (_Bool)_endAppearanceTransition:(CDUnknownBlockType)arg1;
- (void)__viewDidDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)__viewWillDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)__viewDidAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)__viewWillAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setViewAppearState:(int)arg1 isAnimating:(_Bool)arg2;
@property(nonatomic, getter=isInAnimatedVCTransition) _Bool inAnimatedVCTransition;
- (_Bool)_skipDefaultAppearStateCallbacks;
- (_Bool)_forwardAppearanceMethods;
- (_Bool)_forwardRotationMethods;
@property(readonly, nonatomic) _Bool isSettingAppearState;
- (_Bool)isUsingLegacyContainment;
- (void)setUseLegacyContainment:(_Bool)arg1;
- (void)setContainmentSupport:(_Bool)arg1;
- (_Bool)containmentSupport;
- (_Bool)_isHostedRootViewController;
- (_Bool)_hasAppeared;
- (void)_setAppearState:(int)arg1;
- (int)_appearState;
- (_Bool)_isAppearingOrAppeared;
- (void)_setPreviousRootViewController:(id)arg1;
- (id)_previousRootViewController;
- (id)_ancestorViewControllerOfClass:(Class)arg1 allowModalParent:(_Bool)arg2;
- (_Bool)isViewControllerModallyPresented;
- (id)_modalPresenter:(long long)arg1;
@property(readonly, nonatomic, getter=_window) UIWindow *window;
- (_Bool)_isPresentingInWindow:(id)arg1;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (id)_rootAncestorViewController;
- (id)_nonModalAncestorViewController;
- (id)_nonModalAncestorViewControllerStopAtIsPresentationContext:(_Bool)arg1;
- (id)_nonModalParentViewController;
@property(readonly, nonatomic) unsigned long long childViewControllersCount;
@property(nonatomic) UIViewController *parentViewController;
@property(readonly, nonatomic) UIViewController *_parentModalViewController;
@property(readonly, nonatomic) UIViewController *_parentViewController;
- (void)removeChildViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(_Bool)arg2;
- (void)_addChildViewController:(id)arg1 notifyWillMove:(_Bool)arg2;
- (void)_addChildViewController:(id)arg1 performHierarchyCheck:(_Bool)arg2 notifyWillMove:(_Bool)arg3;
- (void)_addChildViewController:(id)arg1;
- (void)_removeChildViewController:(id)arg1;
- (void)_enumerateVisibleChildControllers:(_Bool)arg1 includePresentedChildren:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_barBackdropGroupNameForAncestorViewController:(id *)arg1;
- (void)_enumerateAncestorViewControllersUntilStop:(_Bool *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_backdropBarGroupName;
- (void)updateTitleForViewController:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_nextViewControllerInResponderChain;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (_Bool)canPerformUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (id)_segueTemplateWithIdentifier:(id)arg1;
- (_Bool)_containsFirstResponder;
- (void)autoresizeArchivedView;
- (void)setAutoresizesArchivedViewToFullSize:(_Bool)arg1;
- (_Bool)autoresizesArchivedViewToFullSize;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (_Bool)_shouldUpdateLayoutForStatusBarAndInterfaceOrientation;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 windowSizedViewController:(id)arg4;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (id)_existingTabBarItem;
- (void)_setExistingTabBarItem:(id)arg1;
- (id)_existingNavigationItem;
- (void)_setExistingNavigationItem:(id)arg1;
- (id)contentScrollView;
- (void)_clearRecordedContentScrollView;
- (void)_recordContentScrollView;
- (id)_modalPreservedFirstResponder;
- (id)_existingView;
- (id)existingView;
- (_Bool)isViewLoaded;
@property(retain, nonatomic) UIView *view;
- (void)_cleanupLayoutGuides;
- (void)_setSharedView:(id)arg1;
- (void)loadViewIfRequired;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)unloadViewForced:(_Bool)arg1;
- (void)unloadViewIfReloadable;
- (void)unloadView;
- (void)forceUnloadView;
- (void)viewDidLoad;
- (void)loadView;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (struct CGRect)_defaultInitialViewFrame;
- (void)_loadViewFromNibNamed:(id)arg1 bundle:(id)arg2;
- (void)_inferLayoutGuidesFromSubviews;
- (id)_appearanceGuideClass;
- (id)_appearanceContainer;
- (_Bool)_isViewController;
- (id)_deepestUnambiguousResponder;
- (_Bool)_canBecomeDeepestUnambiguousResponder;
- (_Bool)_canBecomeFirstResponder;
- (id)nextResponder;
- (id)_firstResponder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_shouldPersistViewWhenCoding;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)_vanillaInit;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_doCommonSetup;
- (void)_setFrameIsNotResizedForDoubleHeightStatusBarChanges:(_Bool)arg1;
- (_Bool)_frameIsNotResizedForDoubleHeightStatusBarChanges;
- (_Bool)_viewHostsLayoutEngine;
- (void)_setViewHostsLayoutEngine:(_Bool)arg1;
- (void)_installLayoutGuidesAndConstraintsIfNecessary;
- (void)_setUpLayoutGuideConstraintIfNecessaryAtTop:(_Bool)arg1;
- (void)_setUsesSharedView:(_Bool)arg1;
- (_Bool)_usesSharedView;
- (void)_setInCustomTransition:(_Bool)arg1;
- (_Bool)_isInCustomTransition;
- (void)_setShouldSynthesizeSupportedOrientations:(_Bool)arg1;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)_viewForModalPresentationInPopover;
- (id)_viewForContentInPopover;
@property(nonatomic) _Bool modalInPopover;
- (_Bool)isModalInPopover;
- (void)_endModalPresentationInPopover;
- (void)_startModalPresentationInPopover;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) struct CGSize contentSizeForViewInPopover; // @synthesize contentSizeForViewInPopover=_contentSizeForViewInPopover;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)setFormSheetSize:(struct CGSize)arg1;
- (struct CGSize)formSheetSize;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
@property(readonly, nonatomic) _UILayoutGuide *bottomLayoutGuide; // @synthesize bottomLayoutGuide=_bottomLayoutGuide;
- (id)_bottomLayoutGuide;
@property(readonly, nonatomic) _UILayoutGuide *topLayoutGuide; // @synthesize topLayoutGuide=_topLayoutGuide;
- (id)_topLayoutGuide;
- (void)_primitiveSetNavigationControllerContentOffsetAdjustment:(double)arg1;
- (void)_primitiveSetNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (void)updateTabBarItemForViewController:(id)arg1;
@property(readonly, nonatomic) UITabBarController *tabBarController;
@property(retain, nonatomic) UITabBarItem *tabBarItem;
@property(readonly, nonatomic) UISplitViewController *splitViewController;
- (double)_topBarHeight;
- (void)_setSuppressesBottomBar:(_Bool)arg1;
- (_Bool)_suppressesBottomBar;
@property(nonatomic) _Bool hidesBottomBarWhenPushed;
@property(readonly, nonatomic) UINavigationController *navigationController;
- (_Bool)canHandleSnapbackIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)_toggleEditing:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1;
- (_Bool)isEditing;
- (id)editButtonItem;
@property(readonly, nonatomic) UINavigationItem *navigationItem;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;
- (void)setToolbarItems:(id)arg1;
- (id)toolbarItems;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)cancelBeginAppearanceTransition;
- (void)endAppearanceTransition;
- (void)beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_hackFor11408026_endAppearanceTransition;
- (_Bool)_hackFor11408026_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeFromParentViewController;
- (void)addChildViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *childViewControllers;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (_Bool)_isContainmentChanging;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (_Bool)_shouldLoadViewDuringRestoration:(id)arg1;
- (void)applicationFinishedRestoringState;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_presentViewControllerForStateRestoration:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_allContainedViewControllers;
- (void)setStoryboardIdentifier:(id)arg1;
- (id)storyboardIdentifier;
- (void)setRestorationClass:(Class)arg1;
- (Class)restorationClass;
- (id)_restorationClassName;
- (void)_unembedContentView;
- (void)_embedContentViewInView:(id)arg1 withContentFrame:(struct CGRect)arg2 delegate:(id)arg3;
- (void)_unembedContentViewSettingDelegate:(id)arg1;
- (_Bool)_viewControllerWasSelected;
- (id)_uiCollectionView;
- (_Bool)useLayoutToLayoutNavigationTransitions;
- (id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
@property(nonatomic) id <UIViewControllerTransitioningDelegate> transitioningDelegate;
- (void)attentionClassDumpUser:(id)arg1 yesItsUsAgain:(id)arg2 althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)arg3 itWasntMuchFunWhenYourAppStoppedWorking:(id)arg4 pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)arg5;
- (long long)_imagePickerStatusBarStyle;
- (_Bool)_displaysFullScreen;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setUseTelephonyUI:(_Bool)arg1;
- (void)dismissModalItem:(id)arg1 withTappedButtonIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)updateModaltem:(id)arg1 animated:(_Bool)arg2;
- (void)presentModalItem:(id)arg1 animated:(_Bool)arg2;
- (void)presentModalItem:(id)arg1 animated:(_Bool)arg2 dontPresentAndAddToStack:(_Bool)arg3;
- (void)presentModalItem:(id)arg1 replacing:(id)arg2 animated:(_Bool)arg3;
- (void)presentModalItem:(id)arg1 replacing:(id)arg2 animated:(_Bool)arg3 dontPresentAndAddToStack:(_Bool)arg4;
- (struct CGSize)_resolvedPreferredContentSize;
- (CDStruct_4c969caf)_hostAuditToken;
- (int)_hostProcessIdentifier;
- (id)_remoteViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteViewControllerProxy;
- (id)_hostApplicationBundleIdentifier;
- (void)_supportedInterfaceOrientationsDidChange;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setHostAuditToken:(CDStruct_4c969caf)arg1;
- (void)_setHostProcessIdentifier:(int)arg1;
- (void)_setRemoteViewControllerProxy:(id)arg1;
- (void)_setHostApplicationBundleIdentifier:(id)arg1;
- (id)invalidate;
- (void)_stateRestorationDidFinish:(_Bool)arg1;

// Remaining properties
@property(nonatomic) struct CGSize preferedContentSizeInModalItem; // @dynamic preferedContentSizeInModalItem;

@end

