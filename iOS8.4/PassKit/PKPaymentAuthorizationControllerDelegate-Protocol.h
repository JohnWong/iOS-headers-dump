//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPayment, PKPaymentAuthorizationController, PKShippingMethod;

@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
- (void)paymentAuthorizationControllerDidFinish:(PKPaymentAuthorizationController *)arg1;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;

@optional
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingAddress:(void *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationControllerWillAuthorizePayment:(PKPaymentAuthorizationController *)arg1;
@end

