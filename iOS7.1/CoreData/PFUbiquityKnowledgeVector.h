//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying>
{
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
    unsigned long long _hash;
}

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;
@property(readonly, nonatomic) unsigned long long hash; // @synthesize hash=_hash;
- (id)createStoreKnowledgeVectorDictionary;
- (_Bool)conflictsWithKnowledgeVector:(id)arg1;
- (_Bool)canMergeWithKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (id)allPeerIDs;
- (id)transactionNumberForPeerID:(id)arg1;
- (id)createKnowledgeVectorString;
- (void)decrementToMinimumWithKnowledgeVector:(id)arg1;
- (void)updateWithKnowledgeVector:(id)arg1;
- (_Bool)isZeroVector;
- (_Bool)isAncestorOfKnowledgeVector:(id)arg1;
- (_Bool)isDescendantOfKnowledgeVector:(id)arg1;
- (void)_updateHash;
@property(readonly, nonatomic) unsigned long long length;
- (_Bool)hasPeerIDInCommonWith:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2;
- (id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)init;

@end

