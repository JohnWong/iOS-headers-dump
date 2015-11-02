//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKGlyphViewDelegate.h"

@class NSString, PKGlyphView, UILabel;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate>
{
    _Bool _touchRecognizingHint;
    long long _state;
    PKGlyphView *_glyph;
    UILabel *_label;
    double _labelAlpha;
    id <PKPassPaymentPayStateViewDelegate> _delegate;
}

@property(nonatomic) id <PKPassPaymentPayStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool touchRecognizingHint; // @synthesize touchRecognizingHint=_touchRecognizingHint;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) PKGlyphView *glyph; // @synthesize glyph=_glyph;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)glyphView:(id)arg1 revealingCheckmark:(_Bool)arg2;
- (id)_labelForState:(long long)arg1 textOverride:(id)arg2;
- (_Bool)_canEmphasizeState:(long long)arg1;
- (void)emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyStateWithTextOverride:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setState:(long long)arg1 textOverride:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

