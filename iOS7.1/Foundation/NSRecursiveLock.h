//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

@interface NSRecursiveLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (_Bool)isLocking;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)unlock;
- (_Bool)tryLock;
- (_Bool)lockBeforeDate:(id)arg1;
- (void)lock;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

