//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerRangeReservationContext : NSObject
{
    NSMutableDictionary *_peerEntityNameRangeStartSet;
    NSMutableDictionary *_globalIDToLocalURI;
    NSMutableArray *_unresolvedGlobalObjectIDs;
    NSManagedObjectContext *_moc;
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_psc;
    NSMutableDictionary *_storeNameToFetchedMetadata;
    NSArray *_globalObjectIDs;
    long long _numRangesToReserve;
}

@property(readonly, nonatomic) NSDictionary *peerEntityNameRangeStartSet; // @synthesize peerEntityNameRangeStartSet=_peerEntityNameRangeStartSet;
@property(readonly, nonatomic) long long numRangesToReserve; // @synthesize numRangesToReserve=_numRangesToReserve;
@property(readonly, nonatomic) NSArray *globalObjectIDs; // @synthesize globalObjectIDs=_globalObjectIDs;
@property(readonly, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *psc; // @synthesize psc=_psc;
- (id)createLocalIDStringForStoreUUID:(id)arg1 entityName:(id)arg2 andPrimaryKeyString:(id)arg3;
- (void)prepareForRangeReservationWithRangeStart:(id)arg1 andGlobalID:(id)arg2 andEntityName:(id)arg3;
- (_Bool)createNewPeerRangesWithCache:(id)arg1 Error:(id *)arg2;
- (void)dealloc;
- (id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2;
- (id)init;

@end

