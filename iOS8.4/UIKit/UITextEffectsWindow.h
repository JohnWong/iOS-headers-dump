//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAutoRotatingWindow.h>

#import "_UIScreenBasedObject.h"

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject>
{
    _Bool _inDealloc;
    unsigned long long _activeEffectsCount;
    unsigned long long _hostedUseCount;
    double _defaultWindowLevel;
    struct CGPoint _hostedWindowOffset;
    NSDictionary *_perScreenOptions;
    unsigned long long _activeRemoteViewCount;
    unsigned long long _windowLevelCount;
    double _windowLevelStack[5];
}

+ (_Bool)_isSystemWindow;
+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)releaseSharedInstances;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)activeTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindow;
+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(_Bool)arg2 allowHosted:(_Bool)arg3 matchesStatusBarOrientationOnAccess:(_Bool)arg4;
@property(nonatomic) struct CGPoint hostedWindowOffset; // @synthesize hostedWindowOffset=_hostedWindowOffset;
@property(nonatomic) double defaultWindowLevel; // @synthesize defaultWindowLevel=_defaultWindowLevel;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (_Bool)_shouldParticipateInVirtualResizing;
- (_Bool)_isTextEffectsWindow;
- (_Bool)_shouldTintStatusBar;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)isInternalWindow;
- (struct CGRect)_sceneBounds;
- (struct CGRect)_sceneReferenceBounds;
- (_Bool)_shouldResizeWithScene;
- (id)nonHostedWindow;
- (id)aboveStatusBarWindow;
- (long long)interfaceOrientation;
- (void)_matchDeviceOrientation;
- (void)updateSubviewOrdering;
- (void)resetTransform;
- (void)updateForOrientation:(long long)arg1;
- (void)updateForOrientation:(long long)arg1 forceResetTransform:(_Bool)arg2;
- (void)sortSubviews;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)delayHideWindow;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGPoint)_adjustPointForHostedDisplay:(struct CGPoint)arg1 hasTarget:(_Bool)arg2 inset:(_Bool)arg3;
- (struct CGPoint)magnifierScreenPointForPoint:(struct CGPoint)arg1 targetWindow:(id)arg2;
- (struct CGPoint)classicWindowPointForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGRect hostedFrame;
- (void)_updateTransformLayerForClassicPresentation;
- (_Bool)_disableViewScaling;
- (void)_configureContextOptions:(id)arg1;
- (void)_restoreWindowLevel;
- (void)_setWindowLevel:(double)arg1;
@property(readonly) unsigned int contextID;
@property(nonatomic) _Bool useHostedInstance;
- (void)applicationWindowRotated:(id)arg1;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_basicInitWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

