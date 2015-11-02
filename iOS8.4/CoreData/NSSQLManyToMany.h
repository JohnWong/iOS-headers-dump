//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLRelationship.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLManyToMany : NSSQLRelationship
{
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}

- (_Bool)isTableSchemaEqual:(id)arg1;
- (id)inverseOrderColumnName;
- (id)inverseColumnName;
- (id)inverseManyToMany;
- (void)_setCorrelationTableName:(id)arg1;
- (void)_setOrderColumnName:(id)arg1;
- (void)_setColumnName:(id)arg1;
- (unsigned int)orderColumnSQLType;
- (unsigned int)columnSQLType;
- (id)orderColumnName;
- (id)columnName;
- (_Bool)isReflexive;
- (void)_setInverseManyToMany:(id)arg1;
- (_Bool)isMaster;
- (id)correlationTableName;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

@end
