//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSRefcountedPthreadMutex : NSObject
{
    struct _opaque_pthread_mutex_t lock;
}

- (void)finalize;
- (void)dealloc;
- (void)unlock;
- (void)lock;
- (id)init;

@end

