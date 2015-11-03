//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID
{
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (id)initWithEntity:(id)arg1;
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (void)_release_1;
+ (void)release;
+ (id)_retain_1;
+ (id)retain;
+ (long long)version;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (Class)classForStore:(id)arg1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (void)_storeDeallocated;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
- (id)_referenceData;
- (id)URIRepresentation;
- (id)_retainedURIString;
- (_Bool)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (_Bool)isTemporaryID;
- (id)entity;
- (void)_setPersistentStore:(id)arg1;
- (id)persistentStore;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (id)initWithEntity:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

