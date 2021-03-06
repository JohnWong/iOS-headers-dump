//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKAttendee, EKCalendar, EKOrganizer, EKStructuredLocation, NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItem : EKObject
{
    _Bool _haveCachedActionsState;
    int _actionsStateCachedValue;
    EKAttendee *_selfAttendee;
    NSString *_sharedItemCreatedByEmailAddress;
}

@property(copy, nonatomic) NSString *sharedItemCreatedByEmailAddress; // @synthesize sharedItemCreatedByEmailAddress=_sharedItemCreatedByEmailAddress;
@property(retain, nonatomic) EKAttendee *selfAttendee; // @synthesize selfAttendee=_selfAttendee;
- (void)moveToCalendar:(id)arg1;
@property(readonly, nonatomic) EKCalendarItem *originalItem;
- (void)_moveToCalendarInternal:(id)arg1;
- (_Bool)rebase;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentObject;
- (_Bool)validate:(id *)arg1;
- (_Bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSArray *attachments;
- (id)_attachmentsRelation;
@property(copy, nonatomic) NSTimeZone *sharedItemModifiedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemModifiedDate;
@property(copy, nonatomic) NSString *sharedItemModifiedByLastName;
@property(copy, nonatomic) NSString *sharedItemModifiedByFirstName;
@property(copy, nonatomic) NSString *sharedItemModifiedByEmailAddress;
@property(copy, nonatomic) NSString *sharedItemModifiedByDisplayName;
@property(copy, nonatomic) NSTimeZone *sharedItemCreatedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemCreatedDate;
@property(copy, nonatomic) NSString *sharedItemCreatedByLastName;
@property(copy, nonatomic) NSString *sharedItemCreatedByFirstName;
- (void)setSharedItemCreatedByAddress:(id)arg1;
@property(copy, nonatomic) NSString *sharedItemCreatedByDisplayName;
@property(retain, nonatomic) EKOrganizer *organizer;
- (id)_organizerRelation;
@property(readonly, nonatomic) int selfParticipantStatus;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setAttendees:(id)arg1;
@property(readonly, nonatomic) NSArray *attendees;
@property(readonly, nonatomic) _Bool hasAttendees;
- (id)_selfAttendeeRelation;
- (id)_attendeesRelation;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
@property(copy, nonatomic) NSArray *recurrenceRules;
@property(readonly, nonatomic) _Bool hasRecurrenceRules;
- (id)_recurrencesRelation;
- (void)removeAllSnoozedAlarms;
- (void)removeAcknowledgedSnoozedAlarms;
- (_Bool)isAlarmAcknowledgedPropertyDirty;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *allAlarms;
@property(copy, nonatomic) NSArray *alarms;
@property(readonly, nonatomic) _Bool hasAlarms;
- (id)_alarmsRelation;
@property(readonly, nonatomic) int actionsState;
@property(readonly, nonatomic) _Bool allowsAttendeeModifications;
@property(readonly, nonatomic) _Bool allowsAlarmModifications;
@property(readonly, nonatomic) _Bool allowsRecurrenceModifications;
@property(readonly, nonatomic) _Bool allowsCalendarModifications;
@property(readonly, nonatomic) _Bool isOrganizedBySharedCalendarOwner;
@property(readonly, nonatomic) _Bool isExternallyOrganizedInvitation;
@property(readonly, nonatomic) _Bool isSelfOrganizedInvitation;
@property(readonly, nonatomic) _Bool isSelfOrganized;
@property(readonly, nonatomic) _Bool isFloating;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool requiresDetach;
@property(readonly, nonatomic) NSURL *externalURI;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
@property(nonatomic, getter=isDefaultAlarmRemoved) _Bool defaultAlarmRemoved;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) EKCalendar *calendar;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSURL *action;
@property(nonatomic) long long priority;
@property(nonatomic, getter=isAllDay) _Bool allDay;
- (void)setCreationDate:(id)arg1;
@property(readonly, nonatomic) NSDate *creationDate;
- (void)setLastModifiedDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
@property(copy, nonatomic) NSString *location;
- (id)_locationRelation;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasNotes;
@property(copy, nonatomic) NSString *notes;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *calendarItemExternalIdentifier;
@property(readonly, nonatomic) NSString *calendarItemIdentifier;
- (id)_persistentItem;
- (id)description;
- (id)lazyLoadRelationForKey:(id)arg1;

@end

