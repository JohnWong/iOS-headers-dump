//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject
{
    NSMutableArray *_cachedSpans;
}

+ (id)_generateCachedSpansFromSpans:(id)arg1;
+ (id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (_Bool)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_validateCachedSpansIfDebugLoggingIsEnabled;
- (id)spans;
- (void)injectSpans:(id)arg1;
- (id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

