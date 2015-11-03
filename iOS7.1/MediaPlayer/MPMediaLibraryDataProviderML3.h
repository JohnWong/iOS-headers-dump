//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPMediaLibraryDataProviderPrivate.h"

@class ML3MusicLibrary, MPMediaEntityCache, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate>
{
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    unsigned long long _backgroundTask;
    unsigned long long _backgroundTaskCount;
    _Bool _hasScheduledEventPosting;
    ML3MusicLibrary *_library;
    int _refreshState;
    MPMediaEntityCache *_entityCache;
}

+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;
+ (id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1;
@property(readonly, nonatomic) MPMediaEntityCache *entityCache; // @synthesize entityCache=_entityCache;
@property(retain, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (_Bool)_removeEntitiesWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3;
- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_libraryUIDDidChange:(id)arg1;
- (void)_syncGenerationDidChange:(id)arg1;
- (void)_displayValuesDidChange:(id)arg1;
- (void)_invisiblePropertiesDidChange:(id)arg1;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (_Bool)_dataProviderSupportsEntityChangeTracking;
- (void)_postEvents;
- (void)_coalesceEvents;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedArtworkCacheIDPropertyOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (void)performBackgroundTaskWithBlock:(CDUnknownBlockType)arg1;
- (id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 additionalFilterPredicates:(id)arg3;
- (id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (id)collectionResultSetForQueryCriteria:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 itemBlock:(CDUnknownBlockType)arg3 collectionBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *syncValidity;
- (void)loadBestArtworkImageDataForSize:(struct CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property(readonly, nonatomic) NSArray *preferredAudioLanguages;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long *)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 hideFromPurchaseHistory:(_Bool)arg3;
- (_Bool)removePlaylistWithIdentifier:(long long)arg1;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)hasUbiquitousBookmarkableItems;
- (_Bool)hasGeniusMixes;
- (_Bool)hasMediaOfType:(unsigned long long)arg1;
- (_Bool)writable;
- (long long)playlistGeneration;
- (unsigned long long)syncGenerationID;
- (unsigned long long)currentEntityRevision;
- (id)lastModifiedDate;
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool isGeniusEnabled;
@property(readonly, nonatomic) NSSet *propertiesToCache;
@property(readonly, nonatomic) _Bool requiresAuthentication;

@end

