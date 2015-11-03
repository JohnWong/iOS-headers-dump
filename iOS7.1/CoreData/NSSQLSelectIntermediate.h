//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSArray, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSelectIntermediate : NSSQLIntermediate
{
    NSSQLEntity *_entity;
    NSString *_entityAlias;
    NSString *_correlationTarget;
    NSArray *_fetchColumns;
    _Bool _useDistinct;
    NSString *_columnAlias;
    _Bool _isCount;
}

- (id)generateSQLStringInContext:(id)arg1;
- (void)setIsCount:(_Bool)arg1;
- (void)setFetchEntity:(id)arg1;
- (void)setFetchColumns:(id)arg1;
- (void)setColumnAlias:(id)arg1;
- (void)setUseDistinct:(_Bool)arg1;
- (_Bool)onlyFetchesAggregates;
- (_Bool)isSelectTargetScoped;
- (void)dealloc;
- (id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;

@end

