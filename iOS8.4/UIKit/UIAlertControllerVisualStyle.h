//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIAlertControllerDescriptor, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyle : NSObject
{
    UIAlertControllerDescriptor *_descriptor;
    UITraitCollection *_traitCollection;
}

@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) UIAlertControllerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (double)_scaledMarginBelowLastLabelLastBaseline;
- (double)_scaledMarginBelowMessageLabelLastBaseline;
- (double)_scaledMarginAboveMessageLabelFirstBaseline;
- (double)_scaledMarginBelowTitleLabelLastBaseline;
- (double)_scaledMarginAboveTitleLabelFirstBaseline;
- (_Bool)focusedActionAnimatesOnPresentationAndDismissal;
- (struct CGAffineTransform)presentationAnimationStartTransform;
- (id)dimmingView;
- (struct CGSize)collectionViewOutsetSize;
- (double)sectionDelimitingSeparatorDimension;
- (_Bool)hideActionSeparators;
- (double)minimumActionHeight;
- (id)defaultActionBackgroundColorWhenSeparate;
- (id)actionHighlightedBackgroundView;
- (id)disabledActionContentColor;
- (id)highlightedActionContentColor;
- (id)defaultActionFont;
- (id)regularActionFont;
- (id)backgroundView;
- (double)visualAltitude;
- (double)backgroundCornerRadius;
- (double)verticalContentMargin;
- (double)horizontalContentMargin;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (double)maximumWidth;
- (double)marginBelowLastLabelLastBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveMessageLabelFirstBaseline;
- (id)_detailMessageFont;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)titleLabelColor;
- (id)titleLabelFont;

@end

