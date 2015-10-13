//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateList.h"

@class NSArray, NSMutableArray, NSString, TIKeyboardCandidateResultSet;

__attribute__((visibility("hidden")))
@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList>
{
    struct CGRect m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    NSArray *m_usageTrackingTypes;
    NSMutableArray *m_typedTextViews;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    _Bool m_fits;
    _Bool m_mouseDown;
    id m_delegate;
    long long m_index;
    int m_promptTextType;
    double m_originalTypedTextRectCorrectionAmount;
    double m_maxX;
    _Bool _showHiddenCandidatesOnly;
    unsigned int m_usageTrackingMask;
    TIKeyboardCandidateResultSet *_candidateResultSet;
}

@property(nonatomic) _Bool showHiddenCandidatesOnly; // @synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property(nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=m_usageTrackingMask;
- (_Bool)prepareForAnimation:(struct CGRect)arg1;
- (id)activeCandidateList;
- (void)setSelectedItem:(unsigned long long)arg1;
- (unsigned long long)numberOfShownItems;
- (unsigned long long)index;
- (void)_candidateSelected:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dismiss;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)correctionShadowView;
- (id)typedTextAnimationView;
- (id)correctionAnimationView;
- (id)correctionView;
- (id)typedTextView;
- (id)typedText;
- (id)correction;
- (struct CGRect)correctionFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(int)arg2 withExtraGap:(double)arg3;
- (struct CGRect)horizontallySquishedCorrectionFrame:(struct CGRect)arg1;
- (double)maximumCandidateWidth;
- (_Bool)isAcceptableTextEffectsFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;
- (void)addTypedTextRect:(struct CGRect)arg1;
- (void)setCandidateObject:(id)arg1 candidateSet:(id)arg2 type:(int)arg3 typedText:(id)arg4 inRect:(struct CGRect)arg5 maxX:(double)arg6 showHiddenCandidatesOnly:(_Bool)arg7;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(_Bool)arg2;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect)arg3 maxX:(double)arg4;
- (void)revealHiddenCandidates;
- (_Bool)isHiddenCandidatesList;
- (id)inlineText;
@property(readonly, nonatomic) TIKeyboardCandidateResultSet *candidates;
- (_Bool)isExtendedList;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (id)currentCandidate;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (_Bool)showCandidate:(id)arg1;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (void)candidatesDidChange;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (struct CGRect)shadowFrameForFrame:(struct CGRect)arg1;
- (void)removePromptSubviews;
- (void)dealloc;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

