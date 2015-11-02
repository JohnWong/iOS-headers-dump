//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@class NSArray, NSDate, NSString;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification
{
    _Bool _allDay;
    _Bool _hasRecurrenceRules;
    _Bool _timeChanged;
    _Bool _dateChanged;
    _Bool _locationChanged;
    _Bool _attendeeReplyChanged;
    int _participationStatus;
    int _status;
    NSString *_location;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    NSDate *_endDate;
    NSDate *_participationStatusModifiedDate;
    NSArray *_attendees;
}

@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(nonatomic) _Bool attendeeReplyChanged; // @synthesize attendeeReplyChanged=_attendeeReplyChanged;
@property(nonatomic) _Bool locationChanged; // @synthesize locationChanged=_locationChanged;
@property(nonatomic) _Bool dateChanged; // @synthesize dateChanged=_dateChanged;
@property(nonatomic) _Bool timeChanged; // @synthesize timeChanged=_timeChanged;
@property(nonatomic) _Bool hasRecurrenceRules; // @synthesize hasRecurrenceRules=_hasRecurrenceRules;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int participationStatus; // @synthesize participationStatus=_participationStatus;
@property(retain, nonatomic) NSDate *participationStatusModifiedDate; // @synthesize participationStatusModifiedDate=_participationStatusModifiedDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDateForNextOccurrence; // @synthesize startDateForNextOccurrence=_startDateForNextOccurrence;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
- (id)eventFromEventStore:(id)arg1;
- (void)dealloc;
- (id)initWithEvent:(id)arg1;

@end

