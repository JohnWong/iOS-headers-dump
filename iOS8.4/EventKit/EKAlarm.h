//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "NSCopying.h"

@class EKCalendarItem, EKObjectToOneRelation, EKStructuredLocation, NSArray, NSDate, NSString;

@interface EKAlarm : EKObject <NSCopying>
{
    EKObjectToOneRelation *_locationRelation;
}

+ (double)defaultGeofencedReminderRadius;
+ (_Bool)areLocationsCurrentlyEnabled;
+ (_Bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (_Bool)areLocationsAllowed;
+ (int)_currentAuthorizationStatus;
+ (_Bool)areLocationsAvailable;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (id)alarmWithAbsoluteDate:(id)arg1;
@property(retain, nonatomic) EKObjectToOneRelation *locationRelation; // @synthesize locationRelation=_locationRelation;
- (_Bool)validate:(id *)arg1;
- (id)description;
- (_Bool)rebase;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isSnoozedAlarm;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)addSnoozedAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *snoozedAlarms;
- (id)_snoozedAlarmsRelation;
@property(retain, nonatomic) EKAlarm *originalAlarm;
- (id)_originalAlarmRelation;
@property(nonatomic, getter=isDefaultAlarm) _Bool defaultAlarm;
- (id)ownerUUID;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
- (id)_locationRelation;
@property(nonatomic) long long proximity;
@property(readonly) _Bool isAbsolute;
@property(readonly, nonatomic) NSString *externalID;
@property(copy, nonatomic) NSDate *acknowledgedDate;
@property(copy, nonatomic) NSDate *absoluteDate;
@property(nonatomic) double relativeOffset;
@property(readonly, nonatomic) NSString *UUID;
@property(retain, nonatomic) EKCalendarItem *owner; // @dynamic owner;
- (id)lazyLoadRelationForKey:(id)arg1;
- (void)dealloc;
- (id)initWithRelativeOffset:(double)arg1;
- (id)initWithAbsoluteDate:(id)arg1;
- (id)init;

@end

