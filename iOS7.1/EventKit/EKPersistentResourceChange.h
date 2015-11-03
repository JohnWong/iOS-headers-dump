//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendar, EKPersistentCalendarItem, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKPersistentResourceChange : EKPersistentObject
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(readonly, nonatomic) unsigned int publicStatus;
@property(readonly, nonatomic) _Bool alerted;
@property(readonly, nonatomic) NSString *deletedTitle;
@property(readonly, nonatomic) unsigned int changedProperties;
@property(readonly, nonatomic) NSNumber *deleteCount;
@property(readonly, nonatomic) NSNumber *updateCount;
@property(readonly, nonatomic) NSNumber *createCount;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) unsigned int changeType;
@property(readonly, nonatomic) NSString *changedByLastName;
@property(readonly, nonatomic) NSString *changedByFirstName;
@property(readonly, nonatomic) NSURL *changedByAddress;
@property(readonly, nonatomic) NSString *changedByDisplayName;
@property(readonly, nonatomic) EKPersistentCalendarItem *calendarItem;
@property(readonly, nonatomic) EKPersistentCalendar *calendar;

@end

