//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFetchRequest, NSManagedObjectContext, NSString;

@interface NSFetchedResultsController : NSObject
{
    NSFetchRequest *_fetchRequest;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_sectionNameKeyPath;
    NSString *_sectionNameKey;
    NSString *_cacheName;
    void *_cache;
    struct _fetchResultsControllerFlags {
        unsigned int _sendObjectChangeNotifications:1;
        unsigned int _sendSectionChangeNotifications:1;
        unsigned int _sendDidChangeContentNotifications:1;
        unsigned int _sendWillChangeContentNotifications:1;
        unsigned int _sendSectionIndexTitleForSectionName:1;
        unsigned int _changedResultsSinceLastSave:1;
        unsigned int _hasMutableFetchedResults:1;
        unsigned int _hasBatchedArrayResults:1;
        unsigned int _hasSections:1;
        unsigned int _usesNonpersistedProperties:1;
        unsigned int _includesSubentities:1;
        unsigned int _reservedFlags:21;
    } _flags;
    id _delegate;
    id _sortKeys;
    id _fetchedObjects;
    id _sections;
    id _sectionsByName;
    id _sectionIndexTitles;
    id _sectionIndexTitlesSections;
}

+ (void)deleteCacheWithName:(id)arg1;
+ (void)initialize;
+ (void)_set__PF__SkipSimulatorAsserts:(_Bool)arg1;
+ (void)_set__PF_LINKEDAFTERWILDCAT:(_Bool)arg1;
+ (void)_set__PF_LINKEDAFTERNORTHSTAR:(_Bool)arg1;
+ (unsigned long long)_insertIndexForObject:(id)arg1 inArray:(id)arg2 lowIdx:(unsigned long long)arg3 highIdx:(unsigned long long)arg4 sortDescriptors:(id)arg5;
+ (id)_CoreDataSectionCachesPath;
@property(nonatomic) id <NSFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(readonly, nonatomic) NSString *sectionNameKeyPath; // @synthesize sectionNameKeyPath=_sectionNameKeyPath;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (id)sectionIndexTitleForSectionName:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *fetchedObjects;
- (_Bool)performFetch:(id *)arg1;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (_Bool)_keyPathContainsNonPersistedProperties:(id)arg1;
- (id)_resolveSectionIndexTitleForSectionName:(id)arg1;
- (void)_dumpSectionInfo;
- (_Bool)_didUseGroupBy;
- (_Bool)_didFailPostprocessing;
- (_Bool)_didUpdateOnlyStoreInfo;
- (_Bool)_didUseCachedSectionInfo;
- (id)_sectionCachePath;
- (void)_managedObjectContextDidSave:(id)arg1;
- (void)_updateCachedStoreInfo;
- (void)_appendAffectedStoreInfoToData:(id)arg1 adjustedOffset:(long long *)arg2;
- (void)_managedObjectContextDidChange:(id)arg1;
- (_Bool)_postprocessUpdatedObjects:(id)arg1;
- (void)_preprocessUpdatedObjects:(id)arg1 insertsInfo:(id)arg2 deletesInfo:(id)arg3 updatesInfo:(id)arg4 sectionsWithDeletes:(id)arg5 newSectionNames:(id)arg6 treatAsRefreshes:(_Bool)arg7;
- (_Bool)_postprocessDeletedObjects:(id)arg1;
- (void)_preprocessDeletedObjects:(id)arg1 deletesInfo:(id)arg2 sectionsWithDeletes:(id)arg3;
- (id)_createNewSectionForObject:(id)arg1;
- (_Bool)_postprocessInsertedObjects:(id)arg1;
- (void)_preprocessInsertedObjects:(id)arg1 insertsInfo:(id)arg2 newSectionNames:(id)arg3;
- (void)_updateSectionOffsetsStartingAtSection:(id)arg1;
- (_Bool)_objectInResults:(id)arg1;
- (id)_indexPathForIndex:(unsigned long long)arg1;
- (unsigned long long)_sectionNumberForIndex:(unsigned long long)arg1;
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned long long)arg1;
- (void)_insertObjectInFetchedObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_indexOfFetchedID:(id)arg1;
- (id)_fetchedObjectsArrayOfObjectIDs;
- (void)_makeMutableFetchedObjects;
- (_Bool)_computeSectionInfoWithGroupBy:(id)arg1 error:(id *)arg2;
- (_Bool)_computeSectionInfo:(id)arg1 error:(id *)arg2;
- (_Bool)_restoreCachedSectionInfo;
- (id)_sectionNameForObject:(id)arg1;
- (_Bool)_hasFetchedObjects;

@end

