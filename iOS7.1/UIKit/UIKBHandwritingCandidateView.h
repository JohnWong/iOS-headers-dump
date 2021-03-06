//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIKeyboardCandidateList.h"

@class NSArray, TIKeyboardCandidateResultSet, UIKBCandidateCollectionView, UIKeyboardCandidateLogButton, UIKeyboardCandidatePocketShadow;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _usesCandidateSelection;
    id <UIKeyboardCandidateListDelegate> _delegate;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    UIKBCandidateCollectionView *_candidatesCollectionView;
    UIKeyboardCandidatePocketShadow *_pocketShadow;
    CDStruct_961fb75c _visualStyling;
    UIKeyboardCandidateLogButton *_logButton;
}

@property(retain, nonatomic) UIKeyboardCandidateLogButton *logButton; // @synthesize logButton=_logButton;
@property(nonatomic) _Bool usesCandidateSelection; // @synthesize usesCandidateSelection=_usesCandidateSelection;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(retain, nonatomic) UIKeyboardCandidatePocketShadow *pocketShadow; // @synthesize pocketShadow=_pocketShadow;
@property(retain, nonatomic) UIKBCandidateCollectionView *candidatesCollectionView; // @synthesize candidatesCollectionView=_candidatesCollectionView;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *candidates;
@property(readonly, nonatomic) id <UIKeyboardCandidateList> candidateList;
- (void)_setRenderConfig:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)_inheritedRenderConfig;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)dummyCellsCount;
- (void)reloadDataByAppendingAtEnd:(_Bool)arg1;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (_Bool)hasPreviousPage;
- (_Bool)hasNextPage;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (_Bool)isHiddenCandidatesList;
- (_Bool)isExtendedList;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updatePocketShadowForKeyplane:(id)arg1;
- (void)jumpToCompositions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

