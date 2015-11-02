//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentValidating.h"

@class CNContact, NSArray, NSDecimalNumber, NSMutableArray, NSMutableDictionary, NSString, PKPassLibrary, PKPaymentApplication, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentTransaction, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating>
{
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    unsigned long long _holdPendingUpdatesCount;
    NSArray *_acceptedPasses;
    NSMutableDictionary *_statusForPasses;
    _Bool _shippingEditable;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostAppLocalizedName;
    PKPaymentPass *_pass;
    CNContact *_shippingEmail;
    CNContact *_shippingPhone;
    CNContact *_shippingName;
    CNContact *_shippingAddress;
    PKShippingMethod *_shippingMethod;
    NSString *_shippingType;
    NSString *_shippingEditableMessage;
    CNContact *_billingAddress;
    PKPaymentOptionsDefaults *_defaults;
    PKPaymentOptionsRecents *_recents;
    PKPassLibrary *_library;
    PKPaymentTransaction *_pendingTransaction;
    CDUnknownBlockType _updateHandler;
    NSDecimalNumber *_transactionAmount;
    PKPaymentApplication *_paymentApplication;
    CNContact *_cachedRecentAddress;
}

@property(retain, nonatomic) CNContact *cachedRecentAddress; // @synthesize cachedRecentAddress=_cachedRecentAddress;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) PKPaymentTransaction *pendingTransaction; // @synthesize pendingTransaction=_pendingTransaction;
@property(retain, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) PKPaymentOptionsRecents *recents; // @synthesize recents=_recents;
@property(retain, nonatomic) PKPaymentOptionsDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(retain, nonatomic) NSString *shippingEditableMessage; // @synthesize shippingEditableMessage=_shippingEditableMessage;
@property(nonatomic, getter=isShippingEditable) _Bool shippingEditable; // @synthesize shippingEditable=_shippingEditable;
@property(retain, nonatomic) NSString *shippingType; // @synthesize shippingType=_shippingType;
@property(retain, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) CNContact *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) CNContact *shippingName; // @synthesize shippingName=_shippingName;
@property(retain, nonatomic) CNContact *shippingPhone; // @synthesize shippingPhone=_shippingPhone;
@property(retain, nonatomic) CNContact *shippingEmail; // @synthesize shippingEmail=_shippingEmail;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *hostAppLocalizedName; // @synthesize hostAppLocalizedName=_hostAppLocalizedName;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
- (_Bool)isValidWithError:(id *)arg1;
- (id)_inAppPaymentPassesForNetworks:(id)arg1;
- (void)_notifyModelChanged;
- (void)_ensurePlaceholderItems;
- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
- (id)_initialBillingContactForPropertyID:(int)arg1;
- (id)_initialShippingContactForPropertyID:(int)arg1;
- (long long)statusForPass:(id)arg1;
- (void)_setStatus:(long long)arg1 forPaymentPass:(id)arg2;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2;
- (void)_setDataItem:(id)arg1;
- (id)itemForType:(long long)arg1;
- (void)endUpdates;
- (void)beginUpdates;
@property(readonly, nonatomic) _Bool pinRequired;
@property(readonly, nonatomic) NSArray *acceptedPasses;
@property(retain, nonatomic) NSArray *paymentSummaryItems;
@property(readonly, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSString *merchantName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

