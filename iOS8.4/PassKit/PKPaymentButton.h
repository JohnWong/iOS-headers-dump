//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class PKPaymentButtonPDFView, UILabel, UIView;

@interface PKPaymentButton : UIButton
{
    long long _style;
    long long _type;
    UIView *_highlightView;
    UILabel *_buyLabel;
    UIView *_container;
    PKPaymentButtonPDFView *_pdfView;
}

+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;
@property(retain, nonatomic) PKPaymentButtonPDFView *pdfView; // @synthesize pdfView=_pdfView;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UILabel *buyLabel; // @synthesize buyLabel=_buyLabel;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithType:(long long)arg1 style:(long long)arg2;

@end

