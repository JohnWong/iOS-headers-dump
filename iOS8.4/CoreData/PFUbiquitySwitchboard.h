//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboard : NSObject
{
    NSMutableDictionary *_storeNameToLocalPeerIDToEntry;
    NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary *_rootLocationToLocalPeerIDToPreviousEntries;
    NSRecursiveLock *_registrationLock;
}

+ (id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 inStore:(id)arg2;
+ (id)sharedSwitchboard;
+ (void)initialize;
- (void)releaseAllEntriesForStoreName:(id)arg1 andPeerID:(id)arg2;
- (void)removeEntryFromPreviousEntries:(id)arg1;
- (void)addEntryToPreviousEntries:(id)arg1;
- (void)_quietlyMoveEntryToPreviousEntries:(id)arg1;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)unregisterPersistentStore:(id)arg1;
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3;
- (void)unregisterCoordinator:(id)arg1;
- (_Bool)registerUbiquitizedPersistentStore:(id)arg1 forLocalPeerID:(id)arg2 withLocalRootLocation:(id)arg3 andUbiquityRootLocation:(id)arg4 error:(id *)arg5;
- (void)_removeFilePresenter:(id)arg1;
- (void)_addFilePresenter:(id)arg1;
- (void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (_Bool)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)entryForStore:(id)arg1;
- (id)retainedEntryForStoreName:(id)arg1 andLocalPeerID:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

