//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class HKCorrelationType, NSDictionary;

@interface HKCorrelationQuery : HKQuery
{
    NSDictionary *_samplePredicates;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_filterDictionary;
    long long _behaviorVersion;
}

+ (Class)_queryServerDataObjectClass;
@property(nonatomic, getter=_behaviorVersion, setter=_setBehaviorVersion:) long long behaviorVersion; // @synthesize behaviorVersion=_behaviorVersion;
@property(readonly, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_predicateFilterClasses;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)deliverCorrelations:(id)arg1 forQuery:(id)arg2;
@property(readonly, copy) HKCorrelationType *correlationType;
@property(readonly, copy) NSDictionary *samplePredicates;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

