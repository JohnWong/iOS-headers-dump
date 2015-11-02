//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying>
{
    CDStruct_b0fa4487 _dateGr;
    double _dateAbs;
    EKTimeZone *_timeZone;
    unsigned int _flags;
}

+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (long long)compare:(id)arg1;
- (id)laterDate:(id)arg1;
- (id)earlierDate:(id)arg1;
- (id)calendarDateForYear;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(int)arg1;
- (id)calendarDateForWeekWithWeekStart:(int)arg1 daysSinceWeekStart:(long long *)arg2;
- (id)calendarDateForWeekWithWeekStart:(int)arg1;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForDay;
- (unsigned long long)weeksInYear;
- (unsigned long long)daysInYear;
- (unsigned long long)daysInMonth;
- (unsigned long long)weekOfYear;
- (unsigned long long)dayOfYear;
- (int)dayOfWeek;
- (double)second;
- (unsigned long long)minute;
- (unsigned long long)hour;
- (unsigned long long)day;
- (unsigned long long)month;
- (unsigned long long)year;
- (long long)differenceInDays:(id)arg1;
- (long long)differenceInMonths:(id)arg1;
- (long long)differenceInYears:(id)arg1;
- (CDStruct_6e43267c)differenceAsGregorianUnits:(id)arg1 flags:(unsigned long long)arg2;
- (id)calendarDateWithDate:(id)arg1;
- (id)calendarDateInTimeZone:(id)arg1;
- (id)calendarDateByAddingYears:(long long)arg1;
- (id)calendarDateByAddingMonths:(long long)arg1;
- (id)calendarDateByAddingWeeks:(long long)arg1;
- (id)calendarDateByAddingDays:(long long)arg1;
- (id)calendarDateByAddingGregorianUnits:(CDStruct_6e43267c)arg1;
- (long long)secondsFromGMT;
- (id)timeZone;
- (CDStruct_b0fa4487)gregorianDate;
- (id)componentsWithoutTime;
- (id)components;
- (id)componentsIncludingTime:(_Bool)arg1;
- (double)absoluteTime;
- (id)date;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;
- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 internalTimeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2;
- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;

@end

