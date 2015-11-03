//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLRUDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPStoreOfferArtworkImageCache : NSObject
{
    CPLRUDictionary *_lruCache;
    NSMutableDictionary *_didLoadBlocksByURL;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedArtworkImageCache;
- (void).cxx_destruct;
- (void)_onQueueCallDidLoadBlocksWithImage:(id)arg1 forURL:(id)arg2;
- (void)_dumpCache;
- (id)imageForURL:(id)arg1;
- (void)_applicationDidReceiveMemoryWarningNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

