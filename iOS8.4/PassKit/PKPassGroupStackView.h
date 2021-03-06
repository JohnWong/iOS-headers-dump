//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "PKPassDeleteDelegate.h"
#import "PKPassDeleteHandler.h"
#import "PKPassGroupViewDelegate.h"
#import "PKPaymentServiceDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, PKGroup, PKPGSVHeaderContext, PKPass, PKPassGroupView, PKPassPaymentFooterView, PKPaymentService, PKReusablePassViewQueue, UIView;

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteDelegate, PKPaymentServiceDelegate, PKPassGroupViewDelegate, PKPassDeleteHandler>
{
    PKPassGroupView *_modallyPresentedGroupView;
    PKGroup *_modallyPresentedGroup;
    NSMutableArray *_passPileViews;
    unsigned long long _modalGroupIndex;
    long long _scrollingTestState;
    int _currentTestReps;
    long long _presentationState;
    NSMutableDictionary *_groupViewsByGroupID;
    PKPGSVHeaderContext *_paymentHeaderContext;
    PKPGSVHeaderContext *_passHeaderContext;
    struct {
        unsigned long long numberOfGroups;
        unsigned long long separatorIndex;
        double separationPadding;
        unsigned int hasPaymentPasses:1;
        unsigned int hasPasses:1;
        unsigned int hasPaymentHeader:1;
        unsigned int hasPassHeader:1;
        unsigned int isDeleting:1;
        unsigned int isContinuingModalPresentation:1;
        unsigned int forceSubheaderUpdate:1;
    } _layoutState;
    CDUnknownBlockType _transitionCanceller;
    long long _nextState;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    _Bool _hasSuspendedTransition;
    long long _suspendedNextState;
    NSMutableArray *_suspendedTransitionCompletionHandlers;
    _Bool _inPassthroughHitTest;
    PKReusablePassViewQueue *_reusableCardViewQueue;
    PKPassGroupView *_reorderedGroupView;
    unsigned long long _previousIndexOfReorderedGroup;
    struct CGPoint _reorderedGroupViewPositionInFrame;
    struct CGPoint _panningVelocity;
    NSTimer *_autoscrollTimer;
    struct {
        unsigned int isReordering:1;
        unsigned int isReorderPeekCompensated:1;
        unsigned int hasScrolledUp:1;
        unsigned int hasScrolledDown:1;
    } _reorderingFlags;
    NSMutableArray *_reorderActions;
    unsigned long long _reorderActionTag;
    NSMutableDictionary *_groupViewsInFlightByGroupID;
    unsigned int _userInteractionCounter;
    NSMutableDictionary *_animatorsByGroupID;
    PKPaymentService *_paymentService;
    PKPassPaymentFooterView *_paymentFooterView;
    _Bool _showingFooter;
    UIView *_headerContainerView;
    UIView *_subheaderContainerView;
    UIView *_passContainerView;
    NSMutableArray *_passthroughViews;
    _Bool _paymentFooterSuppressed;
    id <PKPassGroupStackViewDatasource> _datasource;
}

@property(nonatomic) _Bool paymentFooterSuppressed; // @synthesize paymentFooterSuppressed=_paymentFooterSuppressed;
@property(nonatomic) unsigned long long modalGroupIndex; // @synthesize modalGroupIndex=_modalGroupIndex;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) id <PKPassGroupStackViewDatasource> datasource; // @synthesize datasource=_datasource;
- (_Bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)deleteSheet:(id)arg1 didComplete:(_Bool)arg2;
- (_Bool)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupViewFrontPassDidFlip:(id)arg1 animated:(_Bool)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
- (_Bool)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (_Bool)groupViewPassesGrowWhenFlipped:(id)arg1;
- (_Bool)groupViewShouldAllowPassFlip:(id)arg1;
- (void)groupView:(id)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewPanDidEnd:(id)arg1;
- (void)groupViewPanDidBegin:(id)arg1;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (void)groupView:(id)arg1 didEndShowingFontmostPassView:(id)arg2;
- (void)groupView:(id)arg1 didBeginShowingFontmostPassView:(id)arg2;
- (void)groupViewTapped:(id)arg1;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)_cancelSuspendedTransition;
- (void)_resumeSuspendedTransition;
- (void)_suspendTransition;
- (void)_cancelTransition;
- (void)_transitionSuccessful:(_Bool)arg1;
- (void)_executeCompletionHandlers:(id)arg1 cancelled:(_Bool)arg2;
- (id)_headerContextForPassType:(unsigned long long)arg1;
- (void)_disableScrollingAndNormalizeContentOffset;
- (void)_setScrollEnabled:(_Bool)arg1;
- (void)_removeDimmingFromPileWithAnimation:(_Bool)arg1;
- (void)_addDimmingToPileWithAnimation:(_Bool)arg1;
- (long long)_defaultContentModeForPresentationState:(long long)arg1 index:(unsigned long long)arg2;
- (_Bool)_isIngestingPass;
- (void)_setModalGroupView:(id)arg1;
- (void)_notifyDelegateOfStateChange:(_Bool)arg1;
- (id)_groupViewAtIndexWhileEnsuringVisible:(unsigned long long)arg1 withContentMode:(long long)arg2;
- (id)_groupViewWithGroup:(id)arg1;
- (id)_groupViewAtIndex:(unsigned long long)arg1;
- (void)_reverseEnumerateLoadedGroupViews:(CDUnknownBlockType)arg1;
- (void)_enumerateLoadedGroupViews:(CDUnknownBlockType)arg1;
- (id)_sortedDescendingGroupViewIndexes;
- (id)_sortedAscendingGroupViewIndexes;
- (id)_groupBeforeSeparatorGroup;
- (id)_separatorGroup;
- (id)_firstHeaderContext;
- (_Bool)_isModalPresentationAllowedForSingleGroup;
- (_Bool)_isModalPresentationAllowed;
- (_Bool)_isTableModalPresentation;
- (id)_frontmostPastViewForGroupIndex:(unsigned long long)arg1;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(long long)arg2 reverse:(_Bool)arg3;
- (void)_removeMotionEffectsFromModalPile;
- (void)_addMotionEffectsToModalPile;
- (void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(struct CGPoint)arg1;
- (unsigned long long)_indexOfReorderedGroupView;
- (void)_adjustSeparationGroupAndPassViewsForReordering;
- (void)_stopAutoscrollTimer;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_autoscrollIfNecessary;
- (void)_animateGroupViewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 withAnchorView:(id)arg3 insertAbove:(_Bool)arg4;
- (void)_fanAndPageGroupView:(id)arg1 animated:(_Bool)arg2;
- (void)_layoutContentFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateTransformForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_transformCardGroupView:(id)arg1 toState:(long long)arg2 startTime:(double)arg3 animated:(_Bool)arg4;
- (void)_translateCardGroupView:(id)arg1 toState:(long long)arg2 startTime:(double)arg3 animated:(_Bool)arg4;
- (void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)_animateGroupViewToStackPresentation:(id)arg1 atIndex:(unsigned long long)arg2 indexes:(id)arg3;
- (void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_frameForPaymentFooterView;
- (_Bool)_isGroupAtIndexInModalPile:(unsigned long long)arg1;
- (unsigned long long)_lastIndex;
- (struct CATransform3D)_transformForGroupView:(id)arg1 forState:(long long)arg2;
- (struct CGPoint)_positionForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (double)_scaleForGroupView:(id)arg1 forState:(long long)arg2;
- (double)_xPositionForGroupView:(id)arg1 forState:(long long)arg2;
- (unsigned long long)_indexOfGroupView:(id)arg1;
- (double)_yForGroupInOffscreenPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInModalPileWithModalGroupY:(double)arg1;
- (double)_yForGroupInModalPileAtIndex:(unsigned long long)arg1;
- (double)_pileBaseHeight;
- (double)_pileAscenderHeightForGroupViewInPile:(id)arg1;
- (double)_pileAscenderHeight;
- (double)_pileSeparationHeight;
- (unsigned long long)_maximumNumberOfVisiblePilePasses;
- (double)_yForSingleGroupView:(id)arg1;
- (double)_yForModallyPresentedPaymentPassGroupView;
- (double)_yForModallyPresentedGroup;
- (double)_yForGroupInTableAtIndex:(unsigned long long)arg1;
- (double)_transformedYForNativeYInTable:(double)arg1 withBounds:(struct CGRect)arg2 index:(unsigned long long)arg3;
- (struct CGPoint)_nativePositionForPositionInTable:(struct CGPoint)arg1;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint)arg1 roundToClosestIndex:(_Bool)arg2;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint)arg1;
- (double)_nativeYForGroupInTableAtIndex:(unsigned long long)arg1;
- (struct CGSize)_contentSize;
- (double)_groupCellHeight;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeHeaderHidden;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeStacking;
- (double)_yPositionForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (void)_updateContentSizeAndLayout:(_Bool)arg1 forceUpdate:(_Bool)arg2;
- (void)_updateContentSizeAndLayout:(_Bool)arg1;
- (_Bool)_recomputeLayoutState;
- (void)_updateHeaderState:(_Bool)arg1;
- (_Bool)_updateHeaderContext:(id *)arg1 toContext:(id)arg2 animated:(_Bool)arg3;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_adjustPaymentFooterViewOpacityForYOffset:(double)arg1;
- (void)_showPaymentFooterView:(_Bool)arg1 forPassView:(id)arg2 animated:(_Bool)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updatePaymentFooterViewAnimated:(_Bool)arg1;
- (void)_updatePaymentFooterViewIfNecessaryAnimated:(_Bool)arg1 withBecomeVisibleDelay:(double)arg2;
- (long long)_footerStateForPassView:(id)arg1;
- (_Bool)_canShowPaymentFooter;
- (void)_presentPassIngestionAcceptanceWithAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentPassIngestionWithAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentGroupStackViewWithAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentFlippedModalGroupView:(id)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_presentModalGroupView:(id)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange)arg1 reservePlaceForModalGroup:(_Bool)arg2;
- (long long)_edgeStylesObscuredByTopCornersOfPassStyle:(long long)arg1;
- (long long)_edgeStylesObscuredByTopMiddleOfPassStyle:(long long)arg1;
- (struct _NSRange)_rangeOfEagerLoadedIndexes;
- (id)_arrayOfStackedIndexes;
- (struct _NSRange)_rangeOfVisibleIndexes;
- (unsigned long long)_startVisibleIndex;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_arrangeGroups;
- (void)_loadModalGroupView;
- (_Bool)_tileSentinelGroup:(id)arg1 forState:(long long)arg2 withAlreadyTiledGroupIDs:(id)arg3;
- (void)_tileGroupsForState:(long long)arg1 eager:(_Bool)arg2;
- (id)_loadGroupViewAtIndex:(unsigned long long)arg1 forState:(long long)arg2 contentMode:(long long)arg3 cached:(_Bool *)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) _Bool isPresentingPassViewFront;
@property(readonly, nonatomic) _Bool isReordering;
@property(readonly, nonatomic) double pileHeight;
- (id)subheaderForPassType:(unsigned long long)arg1;
- (id)headerForPassType:(unsigned long long)arg1;
- (void)updateHeaderAndSubheaderViewsIfNecessary;
- (void)tilePassesEagerly:(_Bool)arg1;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reloadGroupViewAtIndex:(unsigned long long)arg1;
- (void)reloadData;
@property(readonly, nonatomic) PKPass *modalGroupFrontmostPass;
- (void)stageGroupInPresentationState:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)layoutContentForCurrentPresentationState:(_Bool)arg1;
- (void)setPresentationState:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setPresentationState:(long long)arg1 animated:(_Bool)arg2;
- (CDStruct_86e25f83)_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)layoutHeadersAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)gotoBaseTestState;
- (void)beginFlipCardTest;
- (void)testFlipToFront;
- (void)testFlipToBack;
- (void)beginSelectCardTest;
- (void)testGroupSelection;
- (void)testGoModal;
- (void)beginScrollCardListTest;
- (void)scrollUpTest;
- (void)noteDidEndScrollingForTesting;
- (void)scrollDownTest;
- (void)scrollNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <PKPassGroupStackViewDelegate><UIScrollViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

