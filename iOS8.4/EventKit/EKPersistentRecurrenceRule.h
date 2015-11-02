//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

#import "NSCopying.h"

@class EKPersistentCalendarItem, EKRecurrenceEnd, NSArray, NSDate, NSString;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying>
{
    id _helper;
    EKRecurrenceEnd *_recurrenceEnd;
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (_Bool)validate:(id *)arg1;
@property(copy, nonatomic) NSArray *setPositions;
@property(copy, nonatomic) NSArray *monthsOfTheYear;
@property(copy, nonatomic) NSArray *weeksOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheMonth;
@property(copy, nonatomic) NSArray *daysOfTheWeek;
- (id)_helper;
@property(nonatomic) long long firstDayOfTheWeek;
@property(readonly, nonatomic) NSDate *cachedEndDate;
@property(nonatomic) unsigned long long count;
@property(copy, nonatomic) NSDate *endDate;
@property(nonatomic) long long interval;
@property(nonatomic) int frequency;
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (CDStruct_6e43267c)gregorianUnits;
- (_Bool)isDirty;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool shouldPinMonthDays;
@property(retain, nonatomic) EKPersistentCalendarItem *owner;
@property(readonly, nonatomic) NSString *UUID;
- (int)entityType;
- (id)init;

@end

