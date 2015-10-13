//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIKBThemedView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateToggleButton : UIButton
{
    NSString *_arrowDirection;
    UIKBThemedView *_themedView;
}

@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(copy, nonatomic) NSString *arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void)_setRenderConfig:(id)arg1;
- (void)setArrowColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)arrowColorForState:(unsigned long long)arg1;
- (void)updateArrow;
- (void)layoutSubviews;
- (struct CGRect)labelFrameFromFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

