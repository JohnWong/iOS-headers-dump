//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface NSHTTPCookieStorageInternal : NSObject
{
    struct OpaqueCFHTTPCookieStorage *storage;
    struct OpaqueCFHTTPCookieStorage *privateStorage;
    NSRecursiveLock *dataLock;
    _Bool privateBrowsing;
}

- (void)dealloc;
- (void)_syncCookies;
- (id)initInternalWithCFStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)registerForPostingNotifications;

@end

