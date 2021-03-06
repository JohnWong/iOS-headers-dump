//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GLKViewDelegate.h"
#import "PUEditPluginSessionDelegate.h"
#import "PUImageEditPluginSessionDataSource.h"
#import "PUPhotoEditLayoutSource.h"
#import "PUPhotoEditToolControllerDelegate.h"
#import "PUPhotoLibraryUIChangeObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CIImage, GLKView, NSArray, NSString, NSURL, PHAsset, PLPhotoEditAggregateSession, PLPhotoEditModel, PLPhotoEditMutableModel, PLPhotoEditRenderer, PUAdjustmentsToolController, PUAutoAdjustmentController, PUCropToolController, PUEditPluginSession, PUFiltersToolController, PUPhotoEditOverlayBadge, PUPhotoEditToolController, PUPhotoEditToolbar, PUPhotoEditValuesCalculator, PUPhotoEditViewControllerSpec, PUProgressIndicatorView, PURedeyeToolController, PUResourceDownloadRequest, UIAlertController, UIButton, UIImage, UIImageView, UILongPressGestureRecognizer, UIScrollView, _PUPhotoEditSnapshot;

@interface PUPhotoEditViewController : UIViewController <GLKViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PUPhotoEditToolControllerDelegate, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PUPhotoLibraryUIChangeObserver, PUPhotoEditLayoutSource>
{
    NSArray *__allTools;
    PUPhotoEditToolController *_currentEditingTool;
    _Bool _switchingToolsAnimated;
    UIScrollView *_previewViewScrollingContainer;
    GLKView *_mainPreviewView;
    NSArray *_mainToolbarConstraints;
    NSArray *_alternateToolbarConstraints;
    NSArray *_secondaryToolbarConstraints;
    NSArray *_previewViewScrollingContainerConstraints;
    _Bool _previewViewScrollingContainerLayoutIsValid;
    NSArray *_currentToolViewConstraints;
    NSArray *_placeholderImageViewConstraints;
    NSArray *_previewingOriginalBadgeConstraints;
    NSArray *_progressIndicatorViewConstraints;
    PUPhotoEditToolbar *_mainToolbar;
    PUPhotoEditToolbar *_alternateToolbar;
    PUPhotoEditToolbar *_secondaryToolbar;
    NSArray *_coreToolButtons;
    NSArray *_mainToolButtons;
    NSArray *_secondaryToolButtons;
    UIButton *_cancelButton;
    UIButton *_mainActionButton;
    UIButton *_secondMainActionButton;
    UIButton *_secondSecondActionButton;
    long long _mainButtonAction;
    _Bool _toolbarButtonsValid;
    UIButton *_pluginButton;
    UIButton *_redEyeButton;
    PUEditPluginSession *_pluginSession;
    _Bool _pluginWorkImageVersionIsValid;
    long long _pluginWorkImageVersion;
    _PUPhotoEditSnapshot *_stashedSnapshot;
    NSURL *_pluginFullSizeImageURL;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    UIButton *_autoEnhanceButton;
    PUAutoAdjustmentController *_autoEnhanceController;
    _Bool _photoTakenWithoutFlash;
    struct CGSize _lastKnownWorkImageSize;
    struct CGSize _lastKnownPreviewViewSize;
    _Bool _hasRequestedAdjustmentsData;
    UIImageView *_placeholderImageView;
    UILongPressGestureRecognizer *_togglePreviewPressGestureRecognizer;
    struct CGPoint _togglePreviewPressGestureInitialPoint;
    PUPhotoEditOverlayBadge *_previewingOriginalBadge;
    PUProgressIndicatorView *_progressIndicatorView;
    id _progressIndicatorInteractionDisablingToken;
    _Bool _didLoadTools;
    PUCropToolController *_cropController;
    PUFiltersToolController *_filtersController;
    PUAdjustmentsToolController *_adjustmentsController;
    _Bool _previewViewHidden;
    _Bool __penultimateAvailable;
    _Bool __waitingForBaseImageRequest;
    _Bool __waitingForOriginalImageRequest;
    _Bool __revertingToOriginal;
    _Bool __waitingForAssetChange;
    _Bool __waitingForSaveCompletion;
    _Bool __shouldBePreviewingOriginal;
    _Bool __canAnimateNextAutoEnhance;
    long long _layoutOrientation;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    id <PUPhotoEditViewControllerDelegate> _delegate;
    PHAsset *_photo;
    UIImage *_placeholderImage;
    long long __workImageVersion;
    PLPhotoEditMutableModel *__photoEditModel;
    PUPhotoEditValuesCalculator *__valuesCalculator;
    PLPhotoEditModel *__uneditedPhotoEditModel;
    PLPhotoEditRenderer *__mainRenderer;
    PURedeyeToolController *__redEyeController;
    PLPhotoEditAggregateSession *__aggregateSession;
    UIImage *__baseWorkUIImage;
    CIImage *__baseWorkCIImage;
    UIImage *__originalWorkUIImage;
    CIImage *__originalWorkCIImage;
    CDUnknownBlockType __nextRenderCompletionBlock;
    long long __resourcesAvailability;
    PUResourceDownloadRequest *__currentResourceLoadRequest;
    long long __previewRenderType;
    PLPhotoEditRenderer *__previewingOriginalRenderer;
    UIAlertController *__cancelConfirmationAlert;
    UIAlertController *__revertConfirmationAlert;
    struct CGSize __layoutReferenceSize;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic, setter=_setRevertConfirmationAlert:) __weak UIAlertController *_revertConfirmationAlert; // @synthesize _revertConfirmationAlert=__revertConfirmationAlert;
@property(nonatomic, setter=_setCancelConfirmationAlert:) __weak UIAlertController *_cancelConfirmationAlert; // @synthesize _cancelConfirmationAlert=__cancelConfirmationAlert;
@property(nonatomic, setter=_setCanAnimateNextAutoEnhance:) _Bool _canAnimateNextAutoEnhance; // @synthesize _canAnimateNextAutoEnhance=__canAnimateNextAutoEnhance;
@property(retain, nonatomic, setter=_setPreviewingOriginalRenderer:) PLPhotoEditRenderer *_previewingOriginalRenderer; // @synthesize _previewingOriginalRenderer=__previewingOriginalRenderer;
@property(nonatomic, setter=_setShouldBePreviewingOriginal:) _Bool _shouldBePreviewingOriginal; // @synthesize _shouldBePreviewingOriginal=__shouldBePreviewingOriginal;
@property(nonatomic, setter=_setLayoutReferenceSize:) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property(nonatomic, setter=_setPreviewRenderType:) long long _previewRenderType; // @synthesize _previewRenderType=__previewRenderType;
@property(nonatomic, getter=_isWaitingForSaveCompletion, setter=_setWaitingForSaveCompletion:) _Bool _waitingForSaveCompletion; // @synthesize _waitingForSaveCompletion=__waitingForSaveCompletion;
@property(nonatomic, getter=_isWaitingForAssetChange, setter=_setWaitingForAssetChange:) _Bool _waitingForAssetChange; // @synthesize _waitingForAssetChange=__waitingForAssetChange;
@property(nonatomic, getter=_isRevertingToOriginal, setter=_setRevertingToOriginal:) _Bool _revertingToOriginal; // @synthesize _revertingToOriginal=__revertingToOriginal;
@property(retain, nonatomic, setter=_setCurrentResourceLoadRequest:) PUResourceDownloadRequest *_currentResourceLoadRequest; // @synthesize _currentResourceLoadRequest=__currentResourceLoadRequest;
@property(nonatomic, setter=_setResourcesAvailability:) long long _resourcesAvailability; // @synthesize _resourcesAvailability=__resourcesAvailability;
@property(copy, nonatomic, setter=_setNextRenderCompletionBlock:) CDUnknownBlockType _nextRenderCompletionBlock; // @synthesize _nextRenderCompletionBlock=__nextRenderCompletionBlock;
@property(nonatomic, setter=_setWaitingForOriginalImageRequest:) _Bool _waitingForOriginalImageRequest; // @synthesize _waitingForOriginalImageRequest=__waitingForOriginalImageRequest;
@property(nonatomic, setter=_setWaitingForBaseImageRequest:) _Bool _waitingForBaseImageRequest; // @synthesize _waitingForBaseImageRequest=__waitingForBaseImageRequest;
@property(nonatomic, getter=_isPenultimateAvailable, setter=_setPenultimateAvailable:) _Bool _penultimateAvailable; // @synthesize _penultimateAvailable=__penultimateAvailable;
@property(retain, nonatomic, setter=_setOriginalWorkCIImage:) CIImage *_originalWorkCIImage; // @synthesize _originalWorkCIImage=__originalWorkCIImage;
@property(retain, nonatomic, setter=_setOriginalWorkUIImage:) UIImage *_originalWorkUIImage; // @synthesize _originalWorkUIImage=__originalWorkUIImage;
@property(retain, nonatomic, setter=_setBaseWorkCIImage:) CIImage *_baseWorkCIImage; // @synthesize _baseWorkCIImage=__baseWorkCIImage;
@property(retain, nonatomic, setter=_setBaseWorkUIImage:) UIImage *_baseWorkUIImage; // @synthesize _baseWorkUIImage=__baseWorkUIImage;
@property(retain, nonatomic, setter=_setAggregateSession:) PLPhotoEditAggregateSession *_aggregateSession; // @synthesize _aggregateSession=__aggregateSession;
@property(retain, nonatomic, setter=_setRedEyeController:) PURedeyeToolController *_redEyeController; // @synthesize _redEyeController=__redEyeController;
@property(retain, nonatomic, setter=_setMainRenderer:) PLPhotoEditRenderer *_mainRenderer; // @synthesize _mainRenderer=__mainRenderer;
@property(copy, nonatomic, setter=_setUneditedPhotoEditModel:) PLPhotoEditModel *_uneditedPhotoEditModel; // @synthesize _uneditedPhotoEditModel=__uneditedPhotoEditModel;
@property(retain, nonatomic, setter=_setValuesCalculator:) PUPhotoEditValuesCalculator *_valuesCalculator; // @synthesize _valuesCalculator=__valuesCalculator;
@property(retain, nonatomic, setter=_setPhotoEditModel:) PLPhotoEditMutableModel *_photoEditModel; // @synthesize _photoEditModel=__photoEditModel;
@property(nonatomic, setter=_setWorkImageVersion:) long long _workImageVersion; // @synthesize _workImageVersion=__workImageVersion;
@property(nonatomic, getter=isPreviewViewHidden) _Bool previewViewHidden; // @synthesize previewViewHidden=_previewViewHidden;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(readonly, nonatomic) PHAsset *photo; // @synthesize photo=_photo;
@property(nonatomic) __weak id <PUPhotoEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // @synthesize photoEditSpec=_photoEditSpec;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void).cxx_destruct;
- (void)editPluginSessionDidEnd:(id)arg1;
- (void)editPluginSessionWillBegin:(id)arg1;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)_updatePenultimateAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePhoto;
- (void)_updatePluginWorkImageVersion;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 loadFullSizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadDisplaySizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)toolControllerDidFinish:(id)arg1;
- (struct CGSize)toolControllerOriginalImageSize:(id)arg1;
- (id)toolControllerBaseCIImage:(id)arg1;
- (id)toolControllerBaseImage:(id)arg1;
- (id)toolControllerImageScrollView:(id)arg1;
- (id)toolControllerPreviewView:(id)arg1;
- (id)toolControllerMainRenderer:(id)arg1;
- (id)toolControllerMainContainerView:(id)arg1;
- (id)toolControllerUneditedPhotoEditModel:(id)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
- (void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(_Bool)arg2;
- (void)toolControllerDidChangePreferredRenderMode:(id)arg1;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
- (void)toolController:(id)arg1 updateModelDependentControlsAnimated:(_Bool)arg2;
- (void)_switchToEditingTool:(id)arg1 animated:(_Bool)arg2;
- (id)_defaultInitialEditingTool;
- (id)_allTools;
- (void)_setupToolsIfNeeded;
- (void)_loadToolsIfNeeded;
- (void)_restoreSnapshot:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_captureSnapshotOfBasePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resetModelAndBaseImagesToWorkImageVersion:(long long)arg1;
- (id)_orientedCIImageFromUIImage:(id)arg1;
- (void)_updateMainRenderer;
- (void)_updateValuesCalculator;
- (void)_loadBaseImageIfNecessary;
- (void)_loadOriginalImageIfNecessary;
- (struct CGSize)_workImageSizeForScreen:(id)arg1;
- (void)_loadRemoteResourcesIfNecessary;
- (void)_loadPhotoEditModelIfNecessary;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTogglePreviewPressGesture:(id)arg1;
- (void)_updateTogglePreviewGestureRecognizer;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleAutoEnhanceButton:(id)arg1;
- (void)_handleRedeyeButton:(id)arg1;
- (void)_handlePluginButton:(id)arg1;
- (void)_notifyDelegateSaveFinishedIfReady;
- (void)_stopWaitingForSaveCompletionWithSuccess:(_Bool)arg1;
- (void)_startWaitingForSaveCompletion;
- (void)_stopWaitingForAssetChange;
- (void)_startWaitingForAssetChange;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_showCancelAndRevertOptionsAllowResetTool:(_Bool)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleToolbarToolButton:(id)arg1;
- (void)_updatePreviewingOriginalBadge;
- (void)_updatePreviewingOriginal;
- (_Bool)_isPreviewingOriginal;
- (_Bool)_shouldDisplayRedEyeTool;
- (void)_checkPhotoTakenWithoutFlash;
- (void)_updateScrollViewForProxyZooming;
- (void)_updateScrollViewCentering;
- (void)_updateScrollViewContentSize;
- (void)_updateLayoutOrientationWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_updateSubviewsOrdering;
- (void)_updatePlaceholderImage;
- (void)_updateProgressIndicatorAnimated:(_Bool)arg1;
- (void)_updatePreviewContainerLayout;
- (void)_updateLastKnownImageSize;
- (void)_updatePluginButtonAnimated:(_Bool)arg1;
- (void)_updateAutoEnhanceButtonAnimated:(_Bool)arg1;
- (void)_updateMainActionButtonAnimated:(_Bool)arg1;
- (void)_updateModelDependentControlsAnimated:(_Bool)arg1;
- (void)_updateSpecDependentUIPieces;
- (void)_updateToolbarBackgroundAnimated:(_Bool)arg1;
- (void)_updateBackgroundColor;
- (id)_newToolButtonForTool:(id)arg1;
- (void)_reloadMainAndSecondaryToolbarButtonsIfNeeded;
- (void)_updateAlternateToolbarAnimated:(_Bool)arg1;
- (void)_updateToolbarsAnimated:(_Bool)arg1;
- (void)_updateRenderedPreviewForceRender:(_Bool)arg1;
- (void)_configureEnablenessOfControlButton:(id)arg1 animated:(_Bool)arg2;
- (void)_setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setLayoutOrientation:(long long)arg1;
- (void)requestDismissTransitionViewContentsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isReadyToRender;
@property(readonly, nonatomic) struct CGRect previewViewFrame;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)_scaleSize:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithPhoto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

