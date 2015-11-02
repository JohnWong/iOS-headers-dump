//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSFetchRequest, NSManagedObjectContext, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray
{
    int _cd_rc;
    unsigned int _count;
    _PFArray *_array;
    unsigned int *_entryFlags;
    NSManagedObjectContext *_moc;
    NSFetchRequest *_request;
    unsigned int _batchSize;
    unsigned int *_LRUBatches;
    struct _PFBatchFaultingArrayFlags _flags;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (_Bool)accessInstanceVariablesDirectly;
+ (void)initialize;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)description;
- (id)newArrayFromObjectIDs;
- (id)arrayFromObjectIDs;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)getObjects:(id *)arg1;
- (void)_turnAllBatchesIntoObjects;
- (void)_turnAllBatchesIntoFaults;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (void)_internalDealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_newSubArrayInRange:(struct _NSRange)arg1 asMutable:(_Bool)arg2;
- (_Bool)isEqualToArray:(id)arg1;
- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;

@end

