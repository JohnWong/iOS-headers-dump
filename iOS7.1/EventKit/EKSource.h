//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKSourceConstraints, NSNumber, NSSet, NSString;

@interface EKSource : EKObject
{
}

+ (id)sourceWithEventStore:(id)arg1;
- (_Bool)remove:(id *)arg1;
- (_Bool)commit:(id *)arg1;
- (id)description;
@property(readonly, nonatomic) int displayOrderForNewCalendar;
@property(readonly, nonatomic) EKSourceConstraints *constraints;
- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;
- (id)calendarsForEntityType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSSet *allCalendars;
@property(readonly, nonatomic) NSSet *calendars;
@property(readonly, nonatomic) _Bool isFacebookSource;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) _Bool onlyCreatorCanModify;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
@property(readonly, nonatomic) NSString *sourceIdentifier;
@property(copy, nonatomic) NSNumber *defaultAlarmOffset;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) int sourceType;
- (id)_persistentItem;
- (id)init;

@end

