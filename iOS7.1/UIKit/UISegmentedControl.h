//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"
#import "_UIBasicAnimationFactory.h"

@class NSMutableArray, UIColor, UIView;

@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, NSCoding>
{
    NSMutableArray *_segments;
    long long _selectedSegment;
    long long _highlightedSegment;
    UIView *_removedSegment;
    long long _barStyle;
    id _appearanceStorage;
    UIView *_backgroundBarView;
    double _enabledAlpha;
    struct {
        unsigned int style:3;
        unsigned int size:2;
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks:1;
        unsigned int momentaryClick:1;
        unsigned int tracking:1;
        unsigned int autosizeToFitSegments:1;
        unsigned int isSizingToFit:1;
        unsigned int autosizeText:1;
        unsigned int transparentBackground:1;
        unsigned int useProportionalWidthSegments:1;
        unsigned int translucentBackground:1;
        unsigned int appearanceNeedsUpdate:1;
        unsigned int contentTextPaddingEnabled:1;
    } _segmentedControlFlags;
    _Bool __hasTranslucentOptionsBackground;
}

+ (id)_modernDividerImage;
+ (id)_modernBackgroundSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 size:(int)arg2;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)defaultHeight;
@property(nonatomic, setter=_setTranslucentOptionsBackground:) _Bool _hasTranslucentOptionsBackground; // @synthesize _hasTranslucentOptionsBackground=__hasTranslucentOptionsBackground;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1;
- (void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_clearSelectedSegment;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(_Bool)arg3;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (_Bool)_isInTranslucentToolbar;
- (_Bool)_isInMiniBar;
- (double)_barHeight;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1;
- (struct UIOffset)contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset)arg1 forSegmentType:(long long)arg2 barMetrics:(long long)arg3;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_optionsBackgroundImage;
- (void)_setOptionsBackgroundImage:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)removedSegment;
- (void)setRemovedSegment:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1 forcePropagateToSegments:(_Bool)arg2;
- (_Bool)useBlockyMagnificationInClassic;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_tapSegmentAtPoint:(struct CGPoint)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)highlightSegment:(int)arg1;
- (void)_setHighlightedSegmentHighlighted:(_Bool)arg1;
- (_Bool)shouldTrack;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)_setSelected:(_Bool)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(_Bool)arg3;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_animateContentChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(_Bool)arg2 animate:(_Bool)arg3;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(_Bool)arg2;
@property(nonatomic) long long selectedSegmentIndex;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (_Bool)_shouldSelectSegmentAtIndex:(long long)arg1;
- (_Bool)isEnabledForSegmentAtIndex:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (struct CGSize)contentOffsetForSegmentAtIndex:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)removeAllSegments;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_setUsesNewAnimations:(_Bool)arg1;
- (_Bool)_usesNewAnimations;
- (_Bool)transparentBackground;
- (void)setTransparentBackground:(_Bool)arg1;
- (long long)barStyle;
- (void)setBarStyle:(long long)arg1;
- (void)_setContentTextPaddingEnabled:(_Bool)arg1;
- (void)_setAutosizeText:(_Bool)arg1;
@property(nonatomic, getter=isMomentary) _Bool momentary;
- (void)setSegmentControlStyle:(long long)arg1;
- (long long)segmentControlStyle;
- (void)setControlSize:(int)arg1;
- (void)_setControlSize:(int)arg1 andInvalidate:(_Bool)arg2;
- (int)controlSize;
@property(nonatomic) long long segmentedControlStyle;
- (void)_setAppearanceIsTiled:(_Bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)_setSegmentedControlAppearance:(CDStruct_41b0f204 *)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_resetForAppearanceChange;
- (void)_setOptionsShadowHidden:(_Bool)arg1;
- (_Bool)_optionsShadowHidden;
- (void)_updateOptionsBackground;
- (void)_setCurrentBackgroundImage:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_tintColorArchivingKey;
- (id)initWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonSegmentedControlInit;
- (void)updateForMiniBarState:(_Bool)arg1;
@property(nonatomic) _Bool apportionsSegmentWidthsByContent;
- (id)infoViewForSegment:(long long)arg1;
- (long long)selectedSegment;
- (void)setSelectedSegment:(long long)arg1;
- (_Bool)isEnabledForSegment:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (struct CGSize)contentOffsetForSegment:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (float)widthForSegment:(unsigned long long)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2;
- (id)imageForSegment:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (id)titleForSegment:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)removeSegment:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(_Bool)arg3;
- (void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(_Bool)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (void)selectSegment:(int)arg1;
- (void)setImagePadding:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(long long)arg2 withItems:(id)arg3;
- (id)scriptingInfoWithChildren;

@end

