//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentDataItem.h>

@class NSArray, NSString;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem
{
}

+ (long long)dataType;
- (_Bool)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) NSArray *paymentSummaryItems;
@property(readonly, nonatomic) NSString *currencyCode;

@end

