//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLCloudFeedNavigating.h"
#import "PLNavigableCloudFeedViewController.h"
#import "PUAlbumStreamActivityDelegate.h"
#import "PUFeedCollectionViewLayoutDelegate.h"
#import "PUFeedImageCellDelegate.h"
#import "PUFeedInvitationCellDelegate.h"
#import "PUFeedSectionInfosManagerDelegate.h"
#import "PUFeedTextCellDelegate.h"
#import "PUPhotoBrowserZoomTransitionDelegate.h"
#import "PUScrollViewSpeedometerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSDictionary, NSIndexPath, NSMutableArray, NSMutableSet, NSString, PHCachingImageManager, PLCloudSharedAlbum, PLCloudSharedComment, PLDateRangeFormatter, PLManagedAlbumList, PLManagedAsset, PUAlbumStreamActivity, PUFeedAssetContainerList, PUFeedSectionInfosManager, PUFeedViewControllerRestorableState, PUFeedViewControllerSpec, PUPhotoPinchGestureRecognizer, PUPhotosPickerViewController, PUScrollViewSpeedometer, UIBarButtonItem, UICollectionView, UITapGestureRecognizer, _UIContentUnavailableView;

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, _UISettingsKeyObserver, PUScrollViewSpeedometerDelegate, PLCloudFeedNavigating, PLNavigableCloudFeedViewController>
{
    _Bool __flowDirectionReversed;
    _Bool __collectionViewScrolledToNewest;
    _Bool __shouldSuspendQualityImageFormats;
    _Bool __viewDidAppear;
    _Bool __viewsInSyncWithModel;
    _Bool __appJustEnteredForeground;
    _Bool __userDidDismissPlaceholder;
    _Bool __interfaceBatchUpdateScheduled;
    _Bool __invitationsPopoverShowPending;
    _Bool __libraryUpdatingPreviouslyExpired;
    PUFeedViewControllerSpec *_spec;
    long long _contentType;
    PUFeedSectionInfosManager *__feedSectionInfosManager;
    PHCachingImageManager *__cachingImageManager;
    NSMutableArray *__lastPreheatIndexPathList;
    NSMutableArray *__lastPreheatIndexPathInfoList;
    PLDateRangeFormatter *__dateRangeFormatter;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    long long __sizeTransitionState;
    PUFeedViewControllerRestorableState *__rotationLastRestorableState;
    long long __barsState;
    long long __currentCollectionViewType;
    long long __targetCollectionViewType;
    UICollectionView *__currentCollectionView;
    UICollectionView *__targetCollectionView;
    long long __loadedSectionInfosWindowSize;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UIBarButtonItem *__invitationsBarButtonItem;
    PUFeedViewController *__invitationsPopoverRootController;
    NSIndexPath *__indexPathForImageHiddenDuringZoomTransition;
    PUPhotoPinchGestureRecognizer *__pinchGestureRecognizer;
    UICollectionView *__pinchedCollectionView;
    PLManagedAlbumList *__sharedAlbumList;
    PLCloudSharedAlbum *__pushedAlbum;
    UIViewController *__pushedViewController;
    PUPhotosPickerViewController *__presentedPhotosPickerViewController;
    _UIContentUnavailableView *__emptyPlaceholderView;
    PUAlbumStreamActivity *__albumStreamActivity;
    PLManagedAsset *__browsingSelectedAsset;
    PLCloudSharedComment *__browsingSelectedComment;
    PUFeedAssetContainerList *__browsingAssetContainerList;
    NSDictionary *__justLikedSections;
    NSMutableSet *__sectionInfosWithCommentChanges;
    NSMutableSet *__updatedAssets;
    double __preheatingWindowSize;
    struct CGSize __targetSize;
    struct CGPoint __lastPreheatedContentOffset;
}

+ (void)initialize;
@property(nonatomic, setter=_setPreheatingWindowSize:) double _preheatingWindowSize; // @synthesize _preheatingWindowSize=__preheatingWindowSize;
@property(nonatomic, getter=_isLibraryUpdatingPreviouslyExpired, setter=_setLibraryUpdatingPreviouslyExpired:) _Bool _libraryUpdatingPreviouslyExpired; // @synthesize _libraryUpdatingPreviouslyExpired=__libraryUpdatingPreviouslyExpired;
@property(nonatomic, getter=_isInvitationsPopoverShowPending, setter=_setInvitationsPopoverShowPending:) _Bool _invitationsPopoverShowPending; // @synthesize _invitationsPopoverShowPending=__invitationsPopoverShowPending;
@property(retain, nonatomic, setter=_setUpdatedAssets:) NSMutableSet *_updatedAssets; // @synthesize _updatedAssets=__updatedAssets;
@property(retain, nonatomic, setter=_setSectionInfosWithCommentChanges:) NSMutableSet *_sectionInfosWithCommentChanges; // @synthesize _sectionInfosWithCommentChanges=__sectionInfosWithCommentChanges;
@property(nonatomic, getter=_isInterfaceBatchUpdateScheduled, setter=_setInterfaceBatchUpdateScheduled:) _Bool _interfaceBatchUpdateScheduled; // @synthesize _interfaceBatchUpdateScheduled=__interfaceBatchUpdateScheduled;
@property(retain, nonatomic, setter=_setJustLikedSections:) NSDictionary *_justLikedSections; // @synthesize _justLikedSections=__justLikedSections;
@property(retain, nonatomic, setter=_setBrowsingAssetContainerList:) PUFeedAssetContainerList *_browsingAssetContainerList; // @synthesize _browsingAssetContainerList=__browsingAssetContainerList;
@property(retain, nonatomic, setter=_setBrowsingSelectedComment:) PLCloudSharedComment *_browsingSelectedComment; // @synthesize _browsingSelectedComment=__browsingSelectedComment;
@property(retain, nonatomic, setter=_setBrowsingSelectedAsset:) PLManagedAsset *_browsingSelectedAsset; // @synthesize _browsingSelectedAsset=__browsingSelectedAsset;
@property(retain, nonatomic, setter=_setAlbumStreamActivity:) PUAlbumStreamActivity *_albumStreamActivity; // @synthesize _albumStreamActivity=__albumStreamActivity;
@property(nonatomic, setter=_setUserDidDismissPlaceholder:) _Bool _userDidDismissPlaceholder; // @synthesize _userDidDismissPlaceholder=__userDidDismissPlaceholder;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(nonatomic, setter=_setAppJustEnteredForeground:) _Bool _appJustEnteredForeground; // @synthesize _appJustEnteredForeground=__appJustEnteredForeground;
@property(retain, nonatomic, setter=_setPresentedPhotosPickerViewController:) PUPhotosPickerViewController *_presentedPhotosPickerViewController; // @synthesize _presentedPhotosPickerViewController=__presentedPhotosPickerViewController;
@property(retain, nonatomic, setter=_setPushedViewController:) UIViewController *_pushedViewController; // @synthesize _pushedViewController=__pushedViewController;
@property(retain, nonatomic, setter=_setPushedAlbum:) PLCloudSharedAlbum *_pushedAlbum; // @synthesize _pushedAlbum=__pushedAlbum;
@property(readonly, nonatomic) PLManagedAlbumList *_sharedAlbumList; // @synthesize _sharedAlbumList=__sharedAlbumList;
@property(retain, nonatomic, setter=_setPinchedCollectionView:) UICollectionView *_pinchedCollectionView; // @synthesize _pinchedCollectionView=__pinchedCollectionView;
@property(retain, nonatomic, setter=_setPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer; // @synthesize _pinchGestureRecognizer=__pinchGestureRecognizer;
@property(copy, nonatomic, setter=_setIndexPathForImageHiddenDuringZoomTransition:) NSIndexPath *_indexPathForImageHiddenDuringZoomTransition; // @synthesize _indexPathForImageHiddenDuringZoomTransition=__indexPathForImageHiddenDuringZoomTransition;
@property(nonatomic, setter=_setLastPreheatedContentOffset:) struct CGPoint _lastPreheatedContentOffset; // @synthesize _lastPreheatedContentOffset=__lastPreheatedContentOffset;
@property(retain, nonatomic, setter=_setInvitationsPopoverRootController:) PUFeedViewController *_invitationsPopoverRootController; // @synthesize _invitationsPopoverRootController=__invitationsPopoverRootController;
@property(retain, nonatomic, setter=_setInvitationsBarButtonItem:) UIBarButtonItem *_invitationsBarButtonItem; // @synthesize _invitationsBarButtonItem=__invitationsBarButtonItem;
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(nonatomic, getter=_areViewsInSyncWithModel, setter=_setViewsInSyncWithModel:) _Bool _viewsInSyncWithModel; // @synthesize _viewsInSyncWithModel=__viewsInSyncWithModel;
@property(nonatomic, setter=_setLoadedSectionInfosWindowSize:) long long _loadedSectionInfosWindowSize; // @synthesize _loadedSectionInfosWindowSize=__loadedSectionInfosWindowSize;
@property(retain, nonatomic, setter=_setTargetCollectionView:) UICollectionView *_targetCollectionView; // @synthesize _targetCollectionView=__targetCollectionView;
@property(retain, nonatomic, setter=_setCurrentCollectionView:) UICollectionView *_currentCollectionView; // @synthesize _currentCollectionView=__currentCollectionView;
@property(nonatomic, setter=_setTargetCollectionViewType:) long long _targetCollectionViewType; // @synthesize _targetCollectionViewType=__targetCollectionViewType;
@property(nonatomic, setter=_setCurrentCollectionViewType:) long long _currentCollectionViewType; // @synthesize _currentCollectionViewType=__currentCollectionViewType;
@property(nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property(nonatomic, setter=_setBarsState:) long long _barsState; // @synthesize _barsState=__barsState;
@property(retain, nonatomic, setter=_setRotationLastRestorableState:) PUFeedViewControllerRestorableState *_rotationLastRestorableState; // @synthesize _rotationLastRestorableState=__rotationLastRestorableState;
@property(nonatomic, setter=_setSizeTransitionState:) long long _sizeTransitionState; // @synthesize _sizeTransitionState=__sizeTransitionState;
@property(nonatomic, setter=_setViewDidAppear:) _Bool _viewDidAppear; // @synthesize _viewDidAppear=__viewDidAppear;
@property(nonatomic, setter=_setShouldSuspendQualityImageFormats:) _Bool _shouldSuspendQualityImageFormats; // @synthesize _shouldSuspendQualityImageFormats=__shouldSuspendQualityImageFormats;
@property(nonatomic, getter=_isCollectionViewScrolledToNewest, setter=_setCollectionViewScrolledToNewest:) _Bool _collectionViewScrolledToNewest; // @synthesize _collectionViewScrolledToNewest=__collectionViewScrolledToNewest;
@property(retain, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // @synthesize _collectionViewSpeedometer=__collectionViewSpeedometer;
@property(nonatomic, getter=_isFlowDirectionReversed, setter=_setFlowDirectionReversed:) _Bool _flowDirectionReversed; // @synthesize _flowDirectionReversed=__flowDirectionReversed;
@property(readonly, nonatomic) PLDateRangeFormatter *_dateRangeFormatter; // @synthesize _dateRangeFormatter=__dateRangeFormatter;
@property(retain, nonatomic) NSMutableArray *_lastPreheatIndexPathInfoList; // @synthesize _lastPreheatIndexPathInfoList=__lastPreheatIndexPathInfoList;
@property(retain, nonatomic) NSMutableArray *_lastPreheatIndexPathList; // @synthesize _lastPreheatIndexPathList=__lastPreheatIndexPathList;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property(readonly, nonatomic) PUFeedSectionInfosManager *_feedSectionInfosManager; // @synthesize _feedSectionInfosManager=__feedSectionInfosManager;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_createNewStream;
- (void)_handlePlaceholderAction;
- (void)_showInvitationsPopoverAnimated:(_Bool)arg1;
- (void)_invitationsButtonAction:(id)arg1;
- (_Bool)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_handlePinch:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_openiCloudSettings;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_navigateToRevealPhoto:(id)arg1 inAlbum:(struct NSObject *)arg2 animated:(_Bool)arg3;
- (void)_restoreScrollPositionInCollectionView:(id)arg1 fromRestorableState:(id)arg2;
- (void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_currentRestorableState;
- (long long)_defaultMaximumScrollRegimeForQualityImageFormats;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)feedInvitationCell:(id)arg1 didAccept:(_Bool)arg2;
- (void)didTapButtonInFeedTextCell:(id)arg1;
- (void)_didTapSectionFooterFeedCell:(id)arg1;
- (void)_didTapSectionHeaderFeedCell:(id)arg1;
- (void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1;
- (void)didTapCommentButtonInFeedImageCell:(id)arg1;
- (void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1;
- (void)didTapFeedCell:(id)arg1;
- (_Bool)pu_handleSecondTabTap;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_navigateToSectionInfo:(id)arg1 atItemIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_loadedSectionInfoForCloudFeedEntry:(id)arg1;
- (_Bool)_navigateToRevealComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_navigateToRevealAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToNewestContentAnimated:(_Bool)arg1;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (_Bool)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(_Bool)arg2 forPhotoToken:(id)arg3;
- (_Bool)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_updateSectionsWithCaptionChangesFromUpdatedAssets:(id)arg1;
- (void)_performInterfaceBatchUpdateNow;
- (void)_scheduleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
- (struct PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
- (struct PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double *)arg3 minimumNumberOfTilesToOmit:(long long *)arg4 forSection:(long long)arg5;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
- (long long)_typeForSectionInfo:(id)arg1;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
- (_Bool)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(_Bool)arg1;
- (void)_dismissInvitationsPopoverIfNeeded;
- (void)_autoHideBarsNow;
- (void)_cancelBarsAutoHide;
- (void)_scheduleBarsAutoHide;
- (_Bool)_shouldShowBarsForCollectionViewType:(long long)arg1;
- (void)_updateSubviewsOrdering;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;
- (void)_updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (void)_updateCollectionViews;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)_updateWindowOfLoadedSectionInfos;
- (void)_ensureWindowOfLoadedSectionInfosIncludesSection:(long long)arg1;
- (void)_expandWindowOfLoadedSectionInfos;
- (void)_getPhotoBrowserController:(out id *)arg1 transition:(out id *)arg2 withOptions:(long long)arg3;
- (id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1;
- (long long)_browsingSelectedSection;
- (void)_updateBrowsingAssetContainerList;
- (void)_tearDownBrowsing;
- (void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2;
- (_Bool)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_configureSpeedometer:(id)arg1;
- (long long)_placeholderTypeForSizeTransitionState:(long long)arg1;
- (_Bool)_shouldShowTransitionUI;
- (void)_libraryUpdatingDidExpire:(id)arg1;
- (_Bool)_isLibraryUpdatingTimeoutExpired;
- (_Bool)_isAnySharedAlbumAvailable;
- (_Bool)_areSharedStreamsEnabled;
- (void)_preheatSectionInfosAtIndexes:(id)arg1;
- (void)_invalidateLastPreheatedContentOffset;
- (void)_updatePreheatedAssetsForCollectionView:(id)arg1;
- (void)_invalidatePreheatedAssets;
- (void)_setUserCloudSharedLiked:(_Bool)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3;
- (void)_userDidScrollFeed;
- (void)_userDidViewFeed;
- (void)_appDidFinishEnteringForeground;
- (void)_contextDidFinishRemoteMerge:(id)arg1;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_appWillEnterForeground:(id)arg1;
- (void)_configureCollectionView:(id)arg1;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (id)_textForDate:(id)arg1;
- (id)_dateForSectionWithInfo:(id)arg1;
- (id)_groupIDForSectionWithInfo:(id)arg1;
- (_Bool)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(long long)arg3;
- (_Bool)_shouldHideHeaderForSectionWithType:(long long)arg1;
- (_Bool)_shouldHideSectionWithType:(long long)arg1 inCollectionViewType:(long long)arg2;
- (void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3;
- (_Bool)_configureTextCell:(id)arg1 forFooterOfSection:(long long)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(_Bool)arg4;
- (void)_getDescriptionPhrase:(out id *)arg1 streamAffordanceLabel:(out id *)arg2 actionText:(out id *)arg3 buttonType:(long long *)arg4 forSections:(id)arg5 inCollectionView:(id)arg6;
- (void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2;
- (id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2;
- (id)_sectionInfoForSection:(long long)arg1 collectionView:(id)arg2;
- (long long)_numberOfSectionInfosForCollectionView:(id)arg1;
- (long long)_typeForCollectionView:(id)arg1;
- (id)_collectionViewContainingView:(id)arg1;
- (_Bool)_isCollectionViewEmpty:(id)arg1;
- (id)_collectionViews;
- (id)_suppressionContexts;
- (_Bool)_appAllowsSupressionOfAlerts;
- (_Bool)pu_shouldActAsTabRootViewController;
- (struct CGSize)contentSizeForViewInPopover;
- (id)contentScrollView;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)_collectionViewTypeForSize:(struct CGSize)arg1;
- (_Bool)_updateSpec;
@property(readonly, nonatomic) PUFeedViewControllerSpec *spec; // @synthesize spec=_spec;
- (id)initWithSpec:(id)arg1 contentType:(long long)arg2;
- (id)ppt_currentCollectionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
