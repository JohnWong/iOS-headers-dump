//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendarDate, EKDayViewContent, EKDayViewContentItem, NSArray, NSMutableArray;

@interface EKUISingleDayTimelineLayout : NSObject
{
    NSArray *_occurrences;
    unsigned long long _currentOccurrenceIndex;
    EKDayViewContentItem *_currentOccurrence;
    NSMutableArray *_partitions;
    NSMutableArray *_occurrenceBuckets;
    NSMutableArray *_collidingOccurrences;
    EKCalendarDate *_startOfDay;
    EKCalendarDate *_endOfDay;
    double _startOfDayAbsoluteTime;
    double _endOfDayAbsoluteTime;
    struct CGRect _frame;
    EKDayViewContent *_dayViewContent;
}

- (void).cxx_destruct;
- (double)_combinedWidthOfPartitions;
- (double)_effectiveEndTimeForOccurrence:(id)arg1;
- (double)_adjustedEndTimeForOccurrence:(id)arg1;
- (double)_adjustedStartTimeForOccurrence:(id)arg1;
- (void)_capVisibleTextForBucket:(id)arg1;
- (_Bool)_inputIsInvalid;
- (void)_initializeFirstGridStripe;
- (void)_stampOccurrenceFrames;
- (void)_reclaimSpaceFromStackedOccurrences;
- (void)_putCollidingOccurrencesIntoBuckets;
- (void)_findCollidingOccurrences;
- (void)_mergePartitions;
- (void)_generateNewPartitions;
- (void)_popOccurrencesInPartition:(id)arg1 endingBeforeTime:(double)arg2;
- (void)applyLayoutToOccurrences;
- (void)_calculateVerticalFrameAspectsForOccurrence:(id)arg1;
- (id)initWithOccurrences:(id)arg1 startOfDay:(id)arg2 endOfDay:(id)arg3 frame:(struct CGRect)arg4 dayViewContent:(id)arg5;

@end

