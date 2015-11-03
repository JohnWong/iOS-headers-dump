//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSData, NSEntityDescription, NSMutableDictionary, NSString;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying>
{
    NSString *_versionHashModifier;
    id _underlyingProperty;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    struct __propertyDescriptionFlags {
        unsigned int _isReadOnly:1;
        unsigned int _isTransient:1;
        unsigned int _isOptional:1;
        unsigned int _isIndexed:1;
        unsigned int _skipValidation:1;
        unsigned int _isIndexedBySpotlight:1;
        unsigned int _isStoredInExternalRecord:1;
        unsigned int _extraIvarsAreInDataBlob:1;
        unsigned int _isOrdered:1;
        unsigned int _reservedPropertyDescription:23;
    } _propertyDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    long long _entitysReferenceIDForProperty;
}

+ (void)initialize;
- (id)renamingIdentifier;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setVersionHashModifier:(id)arg1;
- (id)versionHashModifier;
- (id)versionHash;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
- (void)setName:(id)arg1;
- (void)setTransient:(_Bool)arg1;
- (void)setOptional:(_Bool)arg1;
- (id)validationWarnings;
- (id)validationPredicates;
- (id)entity;
- (id)name;
- (void)setIndexed:(_Bool)arg1;
- (_Bool)isIndexed;
- (_Bool)isOptional;
- (_Bool)isTransient;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (_Bool)_skipValidation;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (_Bool)_comparePredicatesAndWarnings:(id)arg1;
- (_Bool)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (id)_rawValidationWarnings;
- (id)_rawValidationPredicates;
- (void)_setOrdered:(_Bool)arg1;
- (_Bool)_isOrdered;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)isReadOnly;
- (void)_throwIfNotEditable;
- (_Bool)_isEditable;
- (long long)_entitysReferenceID;
- (void)_setEntitysReferenceID:(long long)arg1;
- (void)_setEntity:(id)arg1;
- (id)_initWithName:(id)arg1;
- (_Bool)_isToManyRelationship;
- (_Bool)_isRelationship;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_createCachesAndOptimizeState;
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;
- (struct _NSExtraPropertyIVars *)_extraIVars;
- (void)_initializeExtraIVars;
- (void)setStoredInExternalRecord:(_Bool)arg1;
- (_Bool)isStoredInExternalRecord;
- (void)setIndexedBySpotlight:(_Bool)arg1;
- (_Bool)isIndexedBySpotlight;
- (void)setStoredInTruth:(_Bool)arg1;
- (_Bool)isStoredInTruth;
- (void)setStoredInTruthFile:(_Bool)arg1;
- (_Bool)isStoredInTruthFile;
- (void)setSpotlightIndexed:(_Bool)arg1;
- (_Bool)isSpotlightIndexed;
- (id)elementID;
- (void)setElementID:(id)arg1;

@end

