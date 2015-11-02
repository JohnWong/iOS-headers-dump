//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPassPaymentFooterContentView.h>

#import "PKPaymentVerificationPresentationDelegate.h"

@class PKPassView, PKPaymentVerificationPresentationController, UIButton, UILabel, UIView;

@interface PKPassPaymentVerificationView : PKPassPaymentFooterContentView <PKPaymentVerificationPresentationDelegate>
{
    PKPassView *_passView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_button;
    UIButton *_alternateButton;
    UIView *_bottomRule;
    PKPaymentVerificationPresentationController *_presenter;
}

- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didChangeVerificationPresentation;
- (id)_bottomRule;
- (id)_alternateButton;
- (id)_button;
- (id)_bodyLabel;
- (id)_titleLabel;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPass:(id)arg1 passView:(id)arg2;

@end

