//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarItem.h>

@class EKCalendarDate, EKEventStore, EKParticipant, NSArray, NSDate, NSNumber, NSString, NSURL;

@interface EKEvent : EKCalendarItem
{
    _Bool _occurrenceIsAllDay;
    _Bool _requiresDetachDueToSnoozedAlarm;
    int _attendeeCount;
    EKCalendarDate *_occurrenceStartDate;
    EKCalendarDate *_occurrenceEndDate;
    EKCalendarDate *_originalOccurrenceStartDate;
    EKCalendarDate *_originalOccurrenceEndDate;
    NSNumber *_originalOccurrenceIsAllDay;
}

+ (id)eventWithEventStore:(id)arg1;
@property(readonly) int attendeeCount; // @synthesize attendeeCount=_attendeeCount;
@property(nonatomic) _Bool requiresDetachDueToSnoozedAlarm; // @synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm;
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay; // @synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay;
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate; // @synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate;
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate; // @synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate;
@property(nonatomic) _Bool occurrenceIsAllDay; // @synthesize occurrenceIsAllDay=_occurrenceIsAllDay;
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate; // @synthesize occurrenceEndDate=_occurrenceEndDate;
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate; // @synthesize occurrenceStartDate=_occurrenceStartDate;
- (void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(_Bool)arg3;
- (_Bool)removeWithSpan:(int)arg1 error:(id *)arg2;
- (_Bool)_isInitialOccurrenceDate:(id)arg1;
- (_Bool)_cancelWithSpan:(int)arg1 error:(id *)arg2;
- (void)_deleteThisOccurrence;
- (_Bool)_deleteWithSpan:(int)arg1 error:(id *)arg2;
- (_Bool)_shouldDeclineInsteadOfDelete;
- (_Bool)_shouldCancelInsteadOfDeleteWithSpan:(int)arg1;
- (_Bool)_checkStartDateConstraintAgainstDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2 error:(id *)arg3;
- (_Bool)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2;
- (_Bool)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1;
- (_Bool)_validateDurationConstrainedToRecurrenceInterval;
- (_Bool)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id *)arg2;
- (id)_dateForNextOccurrence;
- (void)rollback;
- (void)revert;
- (void)didCommit;
- (id)dirtyPropertiesToSkip;
- (_Bool)commitWithSpan:(int)arg1 error:(id *)arg2;
- (_Bool)validateWithSpan:(int)arg1 error:(id *)arg2;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (_Bool)refresh;
- (id)description;
@property(readonly, nonatomic) _Bool canBeRespondedTo;
- (_Bool)allowsAlarmModifications;
- (_Bool)hasSelfAttendee;
@property(readonly, nonatomic) _Bool canSetAvailability;
@property(readonly, nonatomic) NSString *uniqueId;
@property(readonly, nonatomic) NSDate *participationStatusModifiedDate;
@property(readonly, nonatomic) int pendingParticipationStatus;
- (_Bool)changingAllDayPropertyIsAllowed;
@property(readonly) _Bool canDetachSingleOccurrence;
- (_Bool)requiresDetach;
@property(readonly, nonatomic) _Bool responseMustApplyToAll;
- (_Bool)allowsCalendarModifications;
- (_Bool)allowsRecurrenceModifications;
@property(readonly, nonatomic) _Bool isDetached;
- (long long)compareStartDateWithEvent:(id)arg1;
- (_Bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (_Bool)isTentative;
@property(readonly, nonatomic) _Bool locationChanged;
@property(readonly, nonatomic) _Bool titleChanged;
@property(readonly, nonatomic) _Bool timeChanged;
@property(readonly, nonatomic) _Bool dateChanged;
- (void)clearInvitationStatus;
@property(nonatomic) unsigned long long invitationStatus;
@property(copy) NSString *responseComment;
@property(nonatomic) int availability;
- (void)setRecurrenceRule:(id)arg1;
- (id)recurrenceRule;
@property(readonly, nonatomic) NSArray *attachments;
@property(readonly, nonatomic) EKParticipant *organizer;
- (id)attendees;
@property(readonly, nonatomic) long long birthdayPersonID;
- (int)_parentParticipationStatus;
@property(nonatomic) int participationStatus;
- (void)setNeedsOccurrenceCacheUpdate:(_Bool)arg1;
- (_Bool)needsOccurrenceCacheUpdate;
- (void)setModifiedProperties:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int modifiedProperties;
@property(readonly, nonatomic) int status;
- (CDStruct_b0fa4487)endDatePinnedForAllDay;
- (CDStruct_b0fa4487)startDatePinnedForAllDay;
@property(readonly, nonatomic) CDStruct_b0fa4487 endDateGr;
@property(readonly, nonatomic) CDStruct_b0fa4487 startDateGr;
- (CDStruct_b0fa4487)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2;
@property(readonly) NSDate *initialEndDate;
@property(readonly, nonatomic) NSDate *occurrenceDate;
@property(readonly) NSDate *initialStartDate;
- (id)_effectiveTimeZone;
- (void)setTimeZone:(id)arg1;
@property(copy, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) EKCalendarDate *endCalendarDate;
@property(readonly) double duration;
@property(copy, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) EKCalendarDate *startCalendarDate;
@property(nonatomic, getter=isAllDay) _Bool allDay;
- (_Bool)_isAllDay;
- (id)title;
- (id)committedValueForKey:(id)arg1;
- (void)_sendModifiedNote;
- (_Bool)isDirtyIgnoringCalendar;
@property(readonly) _Bool isAllDayDirty;
@property(readonly) _Bool isEndDateDirty;
@property(readonly) _Bool isStartDateDirty;
@property(readonly) _Bool isStatusDirty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)exportToICS;
@property(readonly, nonatomic) EKEventStore *eventStore;
@property(readonly, nonatomic) NSURL *externalURL;
- (id)externalURI;
@property(readonly, nonatomic) NSString *eventIdentifier;
- (void)dealloc;
- (id)_persistentEvent;
- (id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2;
- (id)initWithPersistentObject:(id)arg1;
- (id)initWithEventStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *UUID;
@property(readonly) _Bool isEditable;

@end

