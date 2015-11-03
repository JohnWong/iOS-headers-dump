//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailRecurrenceCell, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface EKEventRecurrenceDetailItem : EKEventDetailItem
{
    EKEventDetailRecurrenceCell *_cell;
    long long _repeatType;
    long long _originalRepeatType;
    NSDate *_repeatEnd;
    NSString *_customRepeatDescription;
    _Bool _indent;
}

- (void).cxx_destruct;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

