//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OccurrenceCacheDataSourceProtocol.h"

@class EKEventStore, NSArray, NSMutableDictionary, NSSet;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol>
{
    EKEventStore *_eventStore;
    NSSet *_calendars;
    NSArray *_cachedDays;
    NSMutableDictionary *_cachedOccurrences;
    int _cachedDaysSeed;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)stopSearching;
- (void)searchWithTerm:(id)arg1;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (id)dateAtDayIndex:(long long)arg1;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (long long)cachedDayCount;
- (id)_cachedDays;
- (_Bool)cachedOccurrencesAreLoaded;
- (_Bool)cachedOccurrencesAreBeingGenerated;
- (_Bool)supportsFakeTodaySection;
- (_Bool)supportsInvitations;
- (void)invalidateCachedOccurrences;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;

@end

