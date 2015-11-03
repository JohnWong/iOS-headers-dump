//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface ABPersonCellContentView : UIView
{
    struct CGRect _labelViewRect;
    struct CGRect _valueViewRect;
    UILabel *_label;
    UIImageView *_badge;
    _Bool _editing;
    id <ABStyleProvider> _styleProvider;
}

+ (struct CGRect)firstValueFrameForValueViewFrame:(struct CGRect)arg1 styleProvider:(id)arg2 whenEditing:(_Bool)arg3;
+ (void)computeLabelViewFrame:(struct CGRect *)arg1 valueViewFrame:(struct CGRect *)arg2 forSize:(struct CGSize)arg3 styleProvider:(id)arg4 whenEditing:(_Bool)arg5;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 styleProvider:(id)arg3 whenEditing:(_Bool)arg4;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutLabel;
- (struct CGRect)frameForLabel;
- (struct CGRect)frameForBadge;
- (double)labelBaselineAdjustment;
- (struct CGRect)backgroundRectForView:(id)arg1;
- (struct CGRect)rectForView:(id)arg1;
- (void)setBadgeIcon:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;

@end

