//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DASearchQueryConsumer.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSOrderedSet, NSString;

@interface MFContactsSearchManager : NSObject <DASearchQueryConsumer>
{
    struct __CFDictionary *_taskIDsBySearchQuery;
    NSMutableDictionary *_taskContextsByTaskID;
    void *_addressBook;
    NSOperationQueue *_queue;
    unsigned int _genNumber;
    NSOrderedSet *_properties;
    unsigned int _searchTypes;
    NSObject<OS_dispatch_queue> *_serverSearchQueue;
    NSArray *_explicitSearchAccountIDs;
    NSArray *_searchAccounts;
    int _contactSearchAccountChangedToken;
    _Bool _registeredForAddressBookChanges;
    NSString *_recentsBundleIdentifier;
    NSString *_sendingAddress;
}

@property(copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(retain) NSArray *searchAccountIDs; // @synthesize searchAccountIDs=_explicitSearchAccountIDs;
@property(copy, nonatomic) NSString *recentsBundleIdentifier; // @synthesize recentsBundleIdentifier=_recentsBundleIdentifier;
- (void)dealloc;
- (id)_serverSearchQueue;
- (void)cancelTaskWithID:(id)arg1;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)_handleSearchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)_handleSearchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)_handleSearchQueryFinished:(id)arg1 context:(id)arg2;
- (void)_handleCorecipientSearchResults:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (void)_handleSearchQueriesByAccountID:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (void)_handleLocalSearchResults:(id)arg1 type:(int)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)_handleRecentsSearchFrequentResults:(id)arg1 infrequentResults:(id)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)_registerForAddressBookChanges;
- (void)_handleAddressBookChangeNotification;
- (void)_invalidateSearchAccounts;
@property(readonly, nonatomic) NSArray *searchAccounts;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (id)searchForCorecipientsWithRecipients:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 consumer:(id)arg2;
- (void)_performLazySetup;
- (void)setSearchTypes:(unsigned int)arg1;
- (id)initWithAddressBook:(void *)arg1 properties:(int *)arg2 propertyCount:(unsigned int)arg3;
- (id)initWithAddressBook:(void *)arg1 properties:(int *)arg2 propertyCount:(unsigned int)arg3 recentsBundleIdentifier:(id)arg4;

@end

