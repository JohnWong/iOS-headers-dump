//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSData, NSDictionary, NSString;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;
}

+ (id)paymentWithProductIdentifier:(id)arg1;
+ (id)paymentWithProduct:(id)arg1;
@property(readonly, nonatomic) NSDictionary *requestParameters;
@property(readonly, nonatomic) NSString *partnerTransactionIdentifier;
@property(readonly, nonatomic) NSString *partnerIdentifier;
@property(readonly, nonatomic) NSData *requestData;
@property(readonly, nonatomic) long long quantity;
@property(readonly, nonatomic) NSString *productIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *applicationUsername;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

