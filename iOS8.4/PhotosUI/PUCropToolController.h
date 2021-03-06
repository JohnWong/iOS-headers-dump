//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import "PUCropAndStraightenViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class CIImage, NSDictionary, NSMutableDictionary, NSString, PLImageGeometry, PLPhotoEditModel, PLPhotoEditRenderer, PUCropAndStraightenView, PUCropAspect, PUCropHandleView, PUCropOverlayView, PUCropToolControllerSpec, PUTiltWheelControl, UIAlertController, UIButton, UIImage, UIView;

@interface PUCropToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate, PUCropAndStraightenViewDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool __contentViewsHidden;
    _Bool __wantsPreviewViewHidden;
    _Bool __ignoreTrackingUpdates;
    _Bool _trackingTiltControl;
    _Bool __needsImageLoad;
    _Bool __activeTool;
    _Bool __needsModelLoad;
    _Bool __modelChangeLocal;
    _Bool __hasAutoAppliedCropSuggestion;
    _Bool __hasAppliedCropSuggestion;
    _Bool __hasRequestedCropSuggestion;
    PUTiltWheelControl *__tiltControl;
    UIButton *__rotateButton;
    UIButton *__aspectButton;
    UIButton *__cropToggleButton;
    PUCropAndStraightenView *__cropView;
    UIView *__cropCanvasView;
    PUCropOverlayView *__cropOverlayView;
    NSDictionary *__cropHandleViewsByHandle;
    PUCropHandleView *__selectedCropHandleView;
    UIView *__rotateSnapshotView;
    UIAlertController *__aspectAlertController;
    NSMutableDictionary *__initialLocationsInHandlesByHandle;
    NSString *__cropToggleButtonTitle;
    NSMutableDictionary *__animationsByKeyPath;
    NSMutableDictionary *__animationTargetsByKeyPath;
    unsigned long long __rotatingAnimationCount;
    unsigned long long __contentViewsHiddenAnimationCount;
    PLPhotoEditModel *__lastKnownEditModel;
    PLPhotoEditRenderer *__renderer;
    PLImageGeometry *__geometry;
    UIImage *__image;
    CIImage *__CIImage;
    double __straightenAngle;
    PUCropAspect *__cropAspect;
    double __suggestedStraightenAngle;
    struct CGRect __initialHandlePanCropRect;
    struct UIEdgeInsets __previewViewInsets;
    struct CGRect __cropViewFrameForLastModelLoad;
    struct CGRect __viewCropRect;
    struct CGRect __normalizedImageRect;
    struct CGRect __suggestedCrop;
}

@property(nonatomic, setter=_setHasRequestedCropSuggestion:) _Bool _hasRequestedCropSuggestion; // @synthesize _hasRequestedCropSuggestion=__hasRequestedCropSuggestion;
@property(nonatomic, setter=_setHasAppliedCropSuggestion:) _Bool _hasAppliedCropSuggestion; // @synthesize _hasAppliedCropSuggestion=__hasAppliedCropSuggestion;
@property(nonatomic, setter=_setHasAutoAppliedCropSuggestion:) _Bool _hasAutoAppliedCropSuggestion; // @synthesize _hasAutoAppliedCropSuggestion=__hasAutoAppliedCropSuggestion;
@property(nonatomic, setter=_setSuggestedStraightenAngle:) double _suggestedStraightenAngle; // @synthesize _suggestedStraightenAngle=__suggestedStraightenAngle;
@property(nonatomic, setter=_setSuggestedCrop:) struct CGRect _suggestedCrop; // @synthesize _suggestedCrop=__suggestedCrop;
@property(retain, nonatomic, setter=_setCropAspect:) PUCropAspect *_cropAspect; // @synthesize _cropAspect=__cropAspect;
@property(nonatomic, setter=_setStraightenAngle:) double _straightenAngle; // @synthesize _straightenAngle=__straightenAngle;
@property(nonatomic, setter=_setNormalizedImageRect:) struct CGRect _normalizedImageRect; // @synthesize _normalizedImageRect=__normalizedImageRect;
@property(nonatomic, setter=_setViewCropRect:) struct CGRect _viewCropRect; // @synthesize _viewCropRect=__viewCropRect;
@property(retain, nonatomic, setter=_setCIImage:) CIImage *_CIImage; // @synthesize _CIImage=__CIImage;
@property(retain, nonatomic, setter=_setImage:) UIImage *_image; // @synthesize _image=__image;
@property(retain, nonatomic, setter=_setGeometry:) PLImageGeometry *_geometry; // @synthesize _geometry=__geometry;
@property(retain, nonatomic, setter=_setRenderer:) PLPhotoEditRenderer *_renderer; // @synthesize _renderer=__renderer;
@property(retain, nonatomic, setter=_setLastKnownEditModel:) PLPhotoEditModel *_lastKnownEditModel; // @synthesize _lastKnownEditModel=__lastKnownEditModel;
@property(nonatomic, getter=_isModelChangeLocal, setter=_setModelChangeLocal:) _Bool _modelChangeLocal; // @synthesize _modelChangeLocal=__modelChangeLocal;
@property(nonatomic, setter=_setCropViewFrameForLastModelLoad:) struct CGRect _cropViewFrameForLastModelLoad; // @synthesize _cropViewFrameForLastModelLoad=__cropViewFrameForLastModelLoad;
@property(nonatomic, setter=_setNeedsModelLoad:) _Bool _needsModelLoad; // @synthesize _needsModelLoad=__needsModelLoad;
@property(nonatomic, getter=_isActiveTool, setter=_setActiveTool:) _Bool _activeTool; // @synthesize _activeTool=__activeTool;
@property(nonatomic, setter=_setNeedsImageLoad:) _Bool _needsImageLoad; // @synthesize _needsImageLoad=__needsImageLoad;
@property(nonatomic, getter=_isTrackingTitlControl, setter=_setTrackingTiltControl:) _Bool trackingTiltControl; // @synthesize trackingTiltControl=_trackingTiltControl;
@property(nonatomic, setter=_setContentViewsHiddenAnimationCount:) unsigned long long _contentViewsHiddenAnimationCount; // @synthesize _contentViewsHiddenAnimationCount=__contentViewsHiddenAnimationCount;
@property(nonatomic, setter=_setRotatingAnimationCount:) unsigned long long _rotatingAnimationCount; // @synthesize _rotatingAnimationCount=__rotatingAnimationCount;
@property(retain, nonatomic, setter=_setAnimationTargetsByKeyPath:) NSMutableDictionary *_animationTargetsByKeyPath; // @synthesize _animationTargetsByKeyPath=__animationTargetsByKeyPath;
@property(retain, nonatomic, setter=_setAnimationsByKeyPath:) NSMutableDictionary *_animationsByKeyPath; // @synthesize _animationsByKeyPath=__animationsByKeyPath;
@property(nonatomic, setter=_setIgnoreTrackingUpdates:) _Bool _ignoreTrackingUpdates; // @synthesize _ignoreTrackingUpdates=__ignoreTrackingUpdates;
@property(copy, nonatomic, setter=_setCropToggleButtonTitle:) NSString *_cropToggleButtonTitle; // @synthesize _cropToggleButtonTitle=__cropToggleButtonTitle;
@property(nonatomic, setter=_setWantsPreviewViewHidden:) _Bool _wantsPreviewViewHidden; // @synthesize _wantsPreviewViewHidden=__wantsPreviewViewHidden;
@property(nonatomic, setter=_setPreviewViewInsets:) struct UIEdgeInsets _previewViewInsets; // @synthesize _previewViewInsets=__previewViewInsets;
@property(nonatomic, setter=_setContentViewsHidden:) _Bool _contentViewsHidden; // @synthesize _contentViewsHidden=__contentViewsHidden;
@property(nonatomic, setter=_setInitialHandlePanCropRect:) struct CGRect _initialHandlePanCropRect; // @synthesize _initialHandlePanCropRect=__initialHandlePanCropRect;
@property(retain, nonatomic, setter=_setInitialLocationsInHandlesByHandle:) NSMutableDictionary *_initialLocationsInHandlesByHandle; // @synthesize _initialLocationsInHandlesByHandle=__initialLocationsInHandlesByHandle;
@property(nonatomic, setter=_setAspectAlertController:) __weak UIAlertController *_aspectAlertController; // @synthesize _aspectAlertController=__aspectAlertController;
@property(retain, nonatomic, setter=_setRotateSnapshotView:) UIView *_rotateSnapshotView; // @synthesize _rotateSnapshotView=__rotateSnapshotView;
@property(retain, nonatomic, setter=_setSelectedCropHandleView:) PUCropHandleView *_selectedCropHandleView; // @synthesize _selectedCropHandleView=__selectedCropHandleView;
@property(retain, nonatomic, setter=_setCropHandleViewsByHandle:) NSDictionary *_cropHandleViewsByHandle; // @synthesize _cropHandleViewsByHandle=__cropHandleViewsByHandle;
@property(retain, nonatomic, setter=_setCropOverlayView:) PUCropOverlayView *_cropOverlayView; // @synthesize _cropOverlayView=__cropOverlayView;
@property(retain, nonatomic, setter=_setCropCanvasView:) UIView *_cropCanvasView; // @synthesize _cropCanvasView=__cropCanvasView;
@property(retain, nonatomic, setter=_setCropView:) PUCropAndStraightenView *_cropView; // @synthesize _cropView=__cropView;
@property(retain, nonatomic, setter=_setCropToggleButton:) UIButton *_cropToggleButton; // @synthesize _cropToggleButton=__cropToggleButton;
@property(retain, nonatomic, setter=_setAspectButton:) UIButton *_aspectButton; // @synthesize _aspectButton=__aspectButton;
@property(retain, nonatomic, setter=_setRotateButton:) UIButton *_rotateButton; // @synthesize _rotateButton=__rotateButton;
@property(retain, nonatomic, setter=_setTiltControl:) PUTiltWheelControl *_tiltControl; // @synthesize _tiltControl=__tiltControl;
- (void).cxx_destruct;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_cropToggleTapped:(id)arg1;
- (void)_tiltControlChanged:(id)arg1;
- (void)_aspectButtonTapped:(id)arg1;
- (void)_rotateButtonTapped:(id)arg1;
- (void)didResignActiveTool;
- (void)animateResigningActiveTool;
- (void)willResignActiveTool;
- (void)didBecomeActiveTool;
- (void)_installRenderedImageAndDisplayIfNeeded;
- (void)animateBecomingActiveTool;
- (void)willBecomeActiveTool;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setContentViewsHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setContentViewsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)wantsDefaultPreviewView;
- (struct UIEdgeInsets)preferredPreviewViewInsets;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (id)localizedResetToolActionTitle;
- (_Bool)canResetToDefaultValue;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (id)localizedName;
- (void)cropAndStraightenViewDidEndTracking:(id)arg1;
- (void)cropAndStraightenViewDidTrack:(id)arg1;
- (void)cropAndStraightenViewWillBeginTracking:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_recomposeCropRectAnimated:(_Bool)arg1;
- (struct CGRect)_suggestedCropRectForImageRect:(struct CGRect)arg1;
- (struct CGRect)_cropCanvasFrame;
- (struct CGPoint)_pointForHandle:(unsigned long long)arg1 onCropRect:(struct CGRect)arg2;
- (struct CGPoint)_pointForHandle:(unsigned long long)arg1;
- (struct CGVector)_deltaMaskForHandle:(unsigned long long)arg1;
- (struct CGVector)_correctInputVector:(struct CGVector)arg1 forHandle:(unsigned long long)arg2 onCropRect:(struct CGRect)arg3 lockDirection:(_Bool)arg4;
- (struct CGRect)_addHeight:(double)arg1 toRect:(struct CGRect)arg2 anchorTop:(_Bool)arg3;
- (struct CGRect)_addWidth:(double)arg1 toRect:(struct CGRect)arg2 anchorLeft:(_Bool)arg3;
- (struct CGRect)_cropRectFromPanningHandle:(unsigned long long)arg1 byAmount:(struct CGVector)arg2;
- (struct CGVector)_applyAspectOfCropRect:(struct CGRect)arg1 toHandleMovement:(struct CGVector)arg2;
- (void)_handleCropHandlePan:(id)arg1;
- (void)_handleTouchingGesture:(id)arg1;
- (void)_cancelDelayedRecomposeCropRect;
- (void)_recomposeCropRectDelayed;
- (void)_autoRecomposeCropRect;
- (_Bool)_needsRecomposeCropRect;
- (void)_showMaskedContentAndCancelDelayedHide;
- (void)_hideMaskedContentDelayed;
- (void)_hideMaskedContent;
- (void)_showGridAndCancelDelayedHide;
- (void)_hideGridDelayed;
- (void)_hideGrid;
- (void)_updateTiltControlColor;
- (void)_updateCropViewsForInteraction;
- (void)_updateCropToggleButton;
- (void)_updateCropActionButtons;
- (void)_toggleCrop;
- (_Bool)_hasCropSuggestion;
- (void)_applyCropSuggestion;
- (void)_autoApplyCropSuggestionIfNeeded;
- (void)_loadCropSuggestionIfNeeded;
- (void)_resetAllValuesAnimated:(_Bool)arg1;
- (struct CGRect)_defaultNormalizedCropRect;
- (struct CGRect)_defaultCropRect;
- (long long)_defaultOrientation;
- (double)_defaultStraightenAngle;
- (void)_loadStateFromModel;
- (void)photoEditModelDidChange;
- (void)_updatePreviewViewInsets;
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setAnimationTarget:(id)arg1 forKeyPath:(id)arg2;
- (id)_animationTargetForKeyPath:(id)arg1;
- (void)_setAnimation:(id)arg1 forKeyPath:(id)arg2;
- (id)_animationForKeyPath:(id)arg1;
- (void)_cancelAnimationForKeyPath:(id)arg1;
- (void)_setStraightenAngle:(double)arg1 animated:(_Bool)arg2;
- (void)_setViewCropRect:(struct CGRect)arg1 normalizedImageRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (struct CGRect)_validatedRectFromNormalizedImageRect:(struct CGRect)arg1;
- (void)_setCropAspect:(id)arg1 animated:(_Bool)arg2;
- (void)_performGeometryChange:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (struct CGRect)_viewCropToMatchPreview;
- (void)_setViewCropRect:(struct CGRect)arg1 normalizedImageRect:(struct CGRect)arg2;
- (struct CGRect)_normalizeImageRect:(struct CGRect)arg1;
- (struct CGRect)_denormalizeImageRect:(struct CGRect)arg1;
- (void)_loadImageIfNeeded;
- (void)_performLocalModelChanges:(CDUnknownBlockType)arg1;
- (int)_tiltControlOrientationForLayoutOrientation:(long long)arg1;
- (void)_updateCropToggleConstraintsIfNeeded;
- (void)_updateCropCanvasConstraintsIfNeeded;
- (void)_updateTiltWheelConstraintsIfNeeded;
- (void)_updateCropActionButtonConstraintsIfNeeded;
- (_Bool)_hasConstraintsForKey:(id)arg1;
- (void)_invalidateConstraintsForKey:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PUCropToolControllerSpec *spec;
@property(readonly) Class superclass;

@end

