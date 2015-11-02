//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    id _dataForOptimization;
    id *_optimizationHints;
    id _localizationPolicy;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags {
        unsigned int _isInUse:1;
        unsigned int _isImmutable:1;
        unsigned int _isOptimizedForEncoding:1;
        unsigned int _reservedEntityDescription:29;
    } _managedObjectModelFlags;
}

+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)modelByMergingModels:(id)arg1;
+ (id)mergedModelFromBundles:(id)arg1;
+ (void)initialize;
+ (id)_newModelFromOptimizedEncoding:(id)arg1 error:(id *)arg2;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;
- (_Bool)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
@property(readonly, copy) NSDictionary *entityVersionHashesByName;
@property(copy) NSSet *versionIdentifiers;
@property(retain) NSDictionary *localizationDictionary;
- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;
- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;
- (id)fetchRequestTemplateForName:(id)arg1;
@property(readonly, copy) NSDictionary *fetchRequestTemplatesByName;
- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;
- (id)entitiesForConfiguration:(id)arg1;
@property(readonly) NSArray *configurations;
@property(retain) NSArray *entities;
@property(readonly, copy) NSDictionary *entitiesByName;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;
- (id)_modelForVersionHashes:(id)arg1;
- (id)versionHash;
- (void)_addEntity:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2;
- (id)_optimizedEncoding:(id *)arg1;
- (id)initWithContentsOfOptimizedURL:(id)arg1;
- (id)_versionIdentifiersAsArray;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (id)_entitiesByVersionHash;
- (void)_addVersionIdentifiers:(id)arg1;
- (id)_sortedEntitiesForConfiguration:(id)arg1;
- (void)_setLocalizationPolicy:(id)arg1;
- (id)_localizationPolicy;
- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;
- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;
- (id)_configurationsByName;
- (void)_removeEntity:(id)arg1;
- (void)_removeEntityNamed:(id)arg1;
- (id)_entityForName:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_setIsEditable:(_Bool)arg1;
- (void)_setIsEditable:(_Bool)arg1 optimizationStyle:(unsigned long long)arg2;
- (id)_precomputedKeysForEntity:(id)arg1;
- (_Bool)_hasPrecomputedKeyOrder;
- (_Bool)_isOptimizedForEncoding;
- (void)_createCachesAndOptimizeState;
- (void)_flattenProperties;
- (_Bool)isEditable;
- (id)_initWithEntities:(id)arg1;
- (id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1;
- (_Bool)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3;

@end

