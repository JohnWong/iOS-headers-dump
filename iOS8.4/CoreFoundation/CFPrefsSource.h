//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CFPrefsSource : NSObject
{
    struct __CFDictionary *_dict;
    unsigned int _generationCount:63;
    unsigned int _isSearchList:1;
    CDUnion_694411ff *shmemEntry;
    struct _opaque_pthread_mutex_t *_lock;
    CDUnion_694411ff lastKnownShmemState;
}

+ (void)withNamedVolatileSourceForIdentifier:(struct __CFString *)arg1 perform:(CDUnknownBlockType)arg2;
+ (void)withSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 container:(struct __CFString *)arg4 perform:(CDUnknownBlockType)arg5;
- (void)finalize;
- (void)dealloc;
- (struct __CFString *)container;
- (_Bool)isByHost;
- (struct __CFString *)domainIdentifier;
- (struct __CFString *)userIdentifier;
- (void)setAccessRestricted:(_Bool)arg1;
- (void)setDaemonCacheEnabled:(_Bool)arg1;
- (void)clearCache;
- (_Bool)managed;
- (void)unlock;
- (void)lock;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (id)createRequestNewContentMessageForDaemon:(_Bool)arg1;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)copyDictionary;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)copyKeyList;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (_Bool)synchronize;
- (_Bool)alreadylocked_requestNewData;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)removeAllValues;
- (void)alreadylocked_removeAllValues;
- (void)setValues:(const void **)arg1 forKeys:(const void **)arg2 count:(long long)arg3;
- (void)alreadylocked_setValues:(const void **)arg1 forKeys:(const void **)arg2 count:(long long)arg3;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)alreadylocked_setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (id)init;

@end

