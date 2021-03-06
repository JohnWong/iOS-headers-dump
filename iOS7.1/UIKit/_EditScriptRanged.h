//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_EditScript.h>

@class NSString, _EditScriptRangedAtom;

__attribute__((visibility("hidden")))
@interface _EditScriptRanged : _EditScript
{
    _EditScriptRangedAtom *_currentScriptAtom;
}

+ (id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(_Bool)arg4 operationPrecedence:(long long)arg5;
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2;
- (void)finalizeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)initializeCurrentScriptAtom;
- (id)applyToString:(id)arg1;
@property(readonly, nonatomic) NSString *stringB;
@property(readonly, nonatomic) NSString *stringA;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(_Bool)arg6;
- (void)dealloc;

@end

