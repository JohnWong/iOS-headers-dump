//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@class NSDate, NSNumber, NSString;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification
{
    NSString *_location;
    NSString *_calendarName;
    NSDate *_startDate;
    NSDate *_endDate;
    _Bool _allDay;
    NSString *_eventID;
    unsigned int _changeType;
    _Bool _dateChanged;
    _Bool _timeChanged;
    _Bool _locationChanged;
    _Bool _titleChanged;
    NSNumber *_createCount;
    NSNumber *_updateCount;
    NSNumber *_deleteCount;
    NSDate *_startDateForNextOccurrence;
}

@property(retain, nonatomic) NSNumber *deleteCount; // @synthesize deleteCount=_deleteCount;
@property(retain, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSNumber *createCount; // @synthesize createCount=_createCount;
@property(nonatomic) _Bool titleChanged; // @synthesize titleChanged=_titleChanged;
@property(nonatomic) _Bool locationChanged; // @synthesize locationChanged=_locationChanged;
@property(nonatomic) _Bool timeChanged; // @synthesize timeChanged=_timeChanged;
@property(nonatomic) _Bool dateChanged; // @synthesize dateChanged=_dateChanged;
@property(nonatomic) unsigned int changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDateForNextOccurrence; // @synthesize startDateForNextOccurrence=_startDateForNextOccurrence;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *calendarName; // @synthesize calendarName=_calendarName;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
- (_Bool)needsAlert;
- (id)resourceChangeFromEventStore:(id)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

