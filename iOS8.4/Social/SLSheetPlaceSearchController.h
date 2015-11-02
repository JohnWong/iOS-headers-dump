//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SLPlaceDataSourceDelegate.h"
#import "UITableViewDataSource.h"

@class NSArray, NSLock, NSObject<SLPlaceDataSource>, NSString, NSTimer, UISearchDisplayController;

@interface SLSheetPlaceSearchController : NSObject <UITableViewDataSource, SLPlaceDataSourceDelegate>
{
    NSTimer *_delayTimer;
    _Bool _isSearching;
    NSString *_searchString;
    int _retryCount;
    NSLock *_retryLock;
    NSObject<SLPlaceDataSource> *_placeDataSource;
    UISearchDisplayController *_searchDisplayController;
    NSArray *_searchResults;
}

@property(retain) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain) NSObject<SLPlaceDataSource> *placeDataSource; // @synthesize placeDataSource=_placeDataSource;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (void)performDelayedFetch:(id)arg1;
- (void)cancelSearch;
- (void)searchWithSearchString:(id)arg1;
- (id)initWithPlaceDataSource:(id)arg1 searchDisplayController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

