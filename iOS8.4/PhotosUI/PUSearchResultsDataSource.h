//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUSearchResultsValueDelegate.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString, PLPhotoLibrary, PLSearchIndexDateFormatter, PSIDatabase, PSIQuery;

@interface PUSearchResultsDataSource : NSObject <PUSearchResultsValueDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queryTag;
    unsigned long long _unprocessedSearchResultsCount;
    PSIQuery *_query;
    _Bool _ignorePastResults;
    PLPhotoLibrary *_photoLibrary;
    NSSet *_albumUUIDs;
    NSArray *_results;
    unsigned long long _maxGroupedResultsCount;
    NSArray *_uncommittedResults;
    unsigned long long _uncommittedMaxGroupedResultsCount;
    PLSearchIndexDateFormatter *_dateFormatter;
    PSIDatabase *_searchIndex;
    id <PUSearchResultsDelegate> _delegate;
}

@property(nonatomic) __weak id <PUSearchResultsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
- (void).cxx_destruct;
- (id)dateFormatter;
- (_Bool)searchIsFinished:(id)arg1;
- (void)cancel;
- (void)_inqCancel;
- (void)mergePendingChanges;
- (_Bool)hasPendingChanges;
- (void)setSearchString:(id)arg1;
- (void)_inqBackgroundProcessSearchResults:(id)arg1 withTag:(unsigned long long)arg2 searchString:(id)arg3;
- (id)_fetchAlbumsWithUUIDs:(id)arg1;
- (id)_fetchAssetsWithUUIDs:(id)arg1;
- (_Bool)_shouldCancel:(unsigned long long)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSearchResults;
- (id)initWithSearchIndex:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

