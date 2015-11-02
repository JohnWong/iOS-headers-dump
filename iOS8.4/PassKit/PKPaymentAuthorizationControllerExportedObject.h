//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentAuthorizationHostProtocol.h"

@class NSString, PKPaymentAuthorizationController;

@interface PKPaymentAuthorizationControllerExportedObject : NSObject <PKPaymentAuthorizationHostProtocol>
{
    id <PKPaymentAuthorizationControllerDelegate> _delegate;
    id <PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;
    PKPaymentAuthorizationController *_controller;
    id <PKPaymentAuthorizationServiceProtocol> _serviceProxy;
}

@property(retain, nonatomic) id <PKPaymentAuthorizationServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) PKPaymentAuthorizationController *controller; // @synthesize controller=_controller;
@property(nonatomic) id <PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) id <PKPaymentAuthorizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationWillStart;
- (void)authorizationDidPresent;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

