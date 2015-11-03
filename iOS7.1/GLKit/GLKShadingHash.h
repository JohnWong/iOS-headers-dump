//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GLKShadingHash : NSObject
{
    struct dispatch_queue_s *_vshQueue;
    struct dispatch_queue_s *_fshQueue;
    NSMutableDictionary *_compiledVshs;
    NSMutableDictionary *_compiledFshs;
}

- (void)dealloc;
- (id)compiledFshForKey:(id)arg1;
- (void)setCompiledFsh:(id)arg1 forKey:(id)arg2;
- (id)compiledVshForKey:(id)arg1;
- (void)setCompiledVsh:(id)arg1 forKey:(id)arg2;
- (void)purgeAllShaders;
- (id)init;

@end

