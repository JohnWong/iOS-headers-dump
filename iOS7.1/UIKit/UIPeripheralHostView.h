//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIKBInputBackdropView, UIKBRenderConfig, UIKeyboardCornerView;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostView : UIView
{
    int _explicitLayoutCount;
    UIKeyboardCornerView *_cornerViewLeft;
    UIKeyboardCornerView *_cornerViewRight;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    UIKBRenderConfig *_renderConfig;
}

@property(readonly, nonatomic) UIKBInputBackdropView *inputAccessoryBackdropView; // @synthesize inputAccessoryBackdropView=_inputAccessoryBackdropView;
@property(readonly, nonatomic) UIKBInputBackdropView *inputBackdropView; // @synthesize inputBackdropView=_inputBackdropView;
@property(readonly, nonatomic) UIKeyboardCornerView *cornerViewRight; // @synthesize cornerViewRight=_cornerViewRight;
@property(readonly, nonatomic) UIKeyboardCornerView *cornerViewLeft; // @synthesize cornerViewLeft=_cornerViewLeft;
- (void)removeFromSuperview;
- (int)_clipCornersOfView:(id)arg1;
- (void)resizeForKeyplaneSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)explicitLayout;
- (void)endExplicitLayout;
- (void)beginExplicitLayout;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didAddSubview:(id)arg1;
- (void)_setRenderConfig:(id)arg1 updateKeyboard:(_Bool)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)_setBaseRenderConfig:(id)arg1;
- (id)_inheritedRenderConfig;
- (void)syncInputAccessoryViewBackdropToFrame:(struct CGRect)arg1;
- (void)syncInputViewBackdropToFrame:(struct CGRect)arg1;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (void)updateBackdropViewForInputAccessoryView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

