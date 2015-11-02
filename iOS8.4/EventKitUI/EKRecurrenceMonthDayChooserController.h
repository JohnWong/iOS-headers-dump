//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController
{
    NSMutableSet *_daysOfTheMonthSet;
    _Bool _prohibitsMultipleDaysInMonthlyRecurrence;
}

@property(nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence; // @synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence;
- (void).cxx_destruct;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)refreshCells;
- (void)prepareForDisplay;
- (long long)gridViewType;
- (id)cellLabels;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (id)daysOfTheMonth;
- (int)frequency;
- (id)initWithDate:(id)arg1;

@end

