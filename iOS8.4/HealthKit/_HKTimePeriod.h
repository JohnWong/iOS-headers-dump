//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface _HKTimePeriod : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)startsAfterDate:(id)arg1;
- (_Bool)endsBeforeDate:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (long long)compareByEndDate:(id)arg1;
- (long long)compareByStartDate:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)overlapsTimePeriod:(id)arg1;
- (_Bool)containsTimePeriod:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end

