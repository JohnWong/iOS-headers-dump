//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NSManagedObjectID : NSObject <NSCopying>
{
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (long long)version;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)URIRepresentation;
- (id)description;
- (_Bool)isTemporaryID;
- (id)persistentStore;
- (id)entity;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (id)_retainedURIString;
- (_Bool)_isPersistentStoreAlive;
- (id)_storeInfo1;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (id)_referenceData;

@end

