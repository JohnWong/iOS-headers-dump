//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSObject<OS_voucher>, NSString;

__attribute__((visibility("hidden")))
@interface _NSActivityAssertion : NSObject
{
    long long _ended;
    unsigned long long _options;
    NSString *_reason;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    id <NSObject> _xpcBoost;
    BKSProcessAssertion *_processAssertion;
    CDUnknownBlockType _expirationHandler;
}

+ (void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_expireAllActivies;
+ (void)_dumpExpiringActivitives;
+ (id)_expiringActivities;
+ (id)_expirationHandlerExecutionQueue;
+ (id)_expiringTaskExecutionQueue;
+ (id)_expiringAssertionManagementQueue;
- (void)_fireExpirationHandler;
- (void)_reactivate;
- (void)_end;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;

@end

