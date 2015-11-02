//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSMutableArray, NSSQLConnection, NSSQLCore, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLChannel : NSObject
{
    NSSQLConnection *_connection;
    NSSQLCore *_sqlCore;
    NSSQLEntity *_currentEntity;
    NSMutableArray *_fetchProperties;
    NSManagedObjectContext *_currentMOCon;
}

- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)arg1;
- (id)currentContext;
- (void)_closeChannel;
- (void)_openChannel;
- (void)endFetchAndRecycleStatement:(_Bool)arg1;
- (void)endFetch;
- (_Bool)selectCountWithFetchRequest:(id)arg1;
- (void)selectRowsWithCachedStatement:(id)arg1;
- (void)selectRowsWithStatement:(id)arg1;
- (void)selectRowsWithFetchRequest:(id)arg1;
- (void)bindTempTablesForStatementIfNecessary:(id)arg1;
- (id)sqlCore;
- (_Bool)isFetchInProgress;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentEntity:(id)arg1;
- (id)_propertiesToFetch;
- (id)connection;
- (void)dealloc;
- (void)finalize;
- (id)initWithSQLCore:(id)arg1;

@end

