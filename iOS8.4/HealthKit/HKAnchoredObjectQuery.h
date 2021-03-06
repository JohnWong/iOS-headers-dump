//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSNumber;

@interface HKAnchoredObjectQuery : HKQuery
{
    NSNumber *_anchor;
    unsigned long long _limit;
    CDUnknownBlockType _completionHandler;
}

+ (Class)_queryServerDataObjectClass;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)deliverDataObjects:(id)arg1 withAnchor:(id)arg2 queryUUID:(id)arg3;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

