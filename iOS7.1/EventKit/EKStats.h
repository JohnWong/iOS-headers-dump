//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface EKStats : NSObject
{
    int _domain;
    NSMutableDictionary *_scalarOperations;
    NSMutableDictionary *_distributionOperations;
}

+ (void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)clearDistribution:(id)arg1 domain:(int)arg2;
+ (void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;
+ (void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;
+ (void)clearScalar:(id)arg1 domain:(int)arg2;
+ (_Bool)enabled;
- (void)commit;
- (void)pushToDistribution:(id)arg1 value:(double)arg2;
- (void)setDistribution:(id)arg1 value:(double)arg2;
- (void)clearDistribution:(id)arg1;
- (void)addToScalar:(id)arg1 value:(long long)arg2;
- (void)setScalar:(id)arg1 value:(long long)arg2;
- (void)clearScalar:(id)arg1;
- (id)initWithDomain:(int)arg1;

@end

