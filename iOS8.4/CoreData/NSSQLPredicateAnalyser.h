//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPredicateVisitor.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor>
{
    _Bool _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}

- (id)setExpressions;
- (id)subqueries;
- (id)allModifierPredicates;
- (id)keypaths;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

