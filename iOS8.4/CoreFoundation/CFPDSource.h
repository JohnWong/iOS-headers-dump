//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CFPDDataBuffer, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CFPDDataBuffer *_plist;
    struct __CFArray *_pendingChangesQueue;
    struct __CFString *_userName;
    struct __CFString *_domain;
    const char *_actualPath;
    const char *_pathToTemporaryFileToWriteTo;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _owner;
    short _generationShmemIndex;
    BOOL _plistAccessingCount;
    unsigned int _dirty:1;
    unsigned int _byHost:1;
    unsigned int _managed:1;
    unsigned int _neverCache:1;
    unsigned int _checkedForNonPrefsPlist:1;
    unsigned int _hasDrainedPendingChangesSinceLastReplyToOwner:1;
    unsigned int _restrictedReadability:1;
    unsigned int _waitingForDeviceUnlock:1;
}

+ (void)withSourceForDomain:(struct __CFString *)arg1 inContainer:(struct __CFString *)arg2 user:(struct __CFString *)arg3 byHost:(_Bool)arg4 managed:(_Bool)arg5 synchronously:(_Bool)arg6 perform:(CDUnknownBlockType)arg7;
+ (void)synchronousWithSourceCache:(CDUnknownBlockType)arg1;
+ (void)withSourceCache:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)acceptMessage:(id)arg1;
- (int)validateMessage:(id)arg1 withNewKey:(struct __CFString *)arg2 newValue:(void *)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (_Bool)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (_Bool)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2 targetingContainer:(_Bool *)arg3;
- (_Bool)validateReadAccessToken:(int)arg1;
- (void)lockedSync:(CDUnknownBlockType)arg1;
- (void)lockedAsync:(CDUnknownBlockType)arg1;
- (void)clearCache;
- (struct __CFString *)debugDump;
- (void)enqueueNewKey:(struct __CFString *)arg1 value:(void *)arg2;
- (void)drainPendingChanges;
- (id)propertyList;
- (id)propertyListWithoutDrainingPendingChanges;
- (void)writeToDisk:(_Bool)arg1;
- (void)setPlist:(id)arg1;
- (void)endAccessingPlist;
- (void)beginAccessingPlist;
- (void)setDirty:(_Bool)arg1;
- (void)updateShmemEntry;
- (_Bool)hasEverHadMultipleOwners;
- (short)shmemIndex;
- (void)noteAccessed;
- (void)autosync:(_Bool)arg1;
- (id)description;
- (_Bool)byHost;
- (void)removeOwner;
- (void)addOwner:(id)arg1;
- (void)transitionToMultiOwner;
- (struct __CFString *)container;
- (struct __CFString *)user;
- (struct __CFString *)domain;
- (_Bool)managed;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 shmemIndex:(short)arg5;
- (_Bool)getUncanonicalizedPath:(char *)arg1;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPathCreatingIfNecessary:(_Bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)cacheActualPath;
- (_Bool)acceptLocalMessage:(id)arg1 withReply:(struct __CFDictionary *)arg2 inode:(unsigned long long *)arg3;
- (_Bool)clearCacheIfStale:(unsigned long long *)arg1;
- (unsigned char)_backingPlistChangedSinceLastSync:(unsigned long long *)arg1;

@end

