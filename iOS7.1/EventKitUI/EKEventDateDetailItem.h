//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import "EKCellShortener.h"

@class NSDate, PreferencesDoubleTwoPartValueCell;

__attribute__((visibility("hidden")))
@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener>
{
    PreferencesDoubleTwoPartValueCell *_cell;
    NSDate *_startDate;
    NSDate *_endDate;
    _Bool _indent;
}

- (void).cxx_destruct;
- (void)shortenCell:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)reset;
- (void)dealloc;

@end

