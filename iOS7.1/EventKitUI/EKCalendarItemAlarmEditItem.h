//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray;

__attribute__((visibility("hidden")))
@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem
{
    CalendarEventAlarmTable *_alarmTable;
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    int _lastSeenAllDayState;
    _Bool _userChangedAlarm;
}

- (void).cxx_destruct;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (void)_updateDefaultAlarm;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (_Bool)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (unsigned long long)numberOfSubitemsInSubsection:(unsigned long long)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (id)init;

@end
