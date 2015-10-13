//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor;

__attribute__((visibility("hidden")))
@interface _UIButtonMaskAnimationView : UIView
{
    unsigned long long _hardEdge;
    UIView *_hardEdgeLine;
    UIButton *_delegate;
}

@property(nonatomic) UIButton *delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
@property unsigned long long hardEdge;
@property(nonatomic) UIColor *borderColor;
@property double borderWidth;
- (void)layoutSubviews;
- (struct CGRect)_frameForLine;
- (void)dealloc;
- (id)init;

@end

