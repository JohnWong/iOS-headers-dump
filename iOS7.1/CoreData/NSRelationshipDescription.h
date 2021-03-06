//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSPropertyDescription.h>

@class NSEntityDescription, NSString;

@interface NSRelationshipDescription : NSPropertyDescription
{
    void *_reserved5;
    void *_reserved6;
    NSEntityDescription *_destinationEntity;
    NSString *_lazyDestinationEntityName;
    NSRelationshipDescription *_inverseRelationship;
    NSString *_lazyInverseRelationshipName;
    unsigned long long _maxCount;
    unsigned long long _minCount;
    unsigned long long _deleteRule;
}

+ (void)initialize;
- (_Bool)isOrdered;
- (void)setOrdered:(_Bool)arg1;
- (id)versionHash;
- (void)setInverseRelationship:(id)arg1;
- (id)inverseRelationship;
- (void)setDeleteRule:(unsigned long long)arg1;
- (void)setDestinationEntity:(id)arg1;
- (id)destinationEntity;
- (_Bool)isIndexed;
- (_Bool)isToMany;
- (void)setMinCount:(unsigned long long)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (unsigned long long)minCount;
- (unsigned long long)maxCount;
- (unsigned long long)deleteRule;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithName:(id)arg1;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)_updateInverse:(id)arg1;
- (_Bool)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (_Bool)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2;
- (void)_setLazyDestinationEntityName:(id)arg1;
- (_Bool)_isToManyRelationship;
- (_Bool)_isRelationship;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2 proxyContext:(id)arg3;
- (void)_createCachesAndOptimizeState;

@end

