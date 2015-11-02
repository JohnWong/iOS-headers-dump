//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

#import "NSURLSessionSubclass.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface __NSURLSessionLocal : NSURLSession <NSURLSessionSubclass>
{
    unsigned long long _identSeed;
    struct XTubeManager *_tubeManager;
    NSMutableDictionary *_tasks;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    CDUnknownBlockType _invalidateCallback;
    const struct XURLCache *_xCache;
    long long _xCacheOnce;
    const struct XCookieStorage *_xCookies;
    long long _xCookiesOnce;
    const struct XCredentialStorage *_xCreds;
    long long _xCredsOnce;
    NSArray *_localProtocolClassesForDefaultSession;
    _Bool _isInvalid;
}

- (void)_removeProtocolClassForDefaultSession:(Class)arg1;
- (_Bool)_prependProtocolClassForDefaultSession:(Class)arg1;
- (struct URLProtocol *)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient *)arg2;
- (struct URLProtocol *)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient *)arg2 protocolClass:(Class)arg3;
- (_Bool)_cfurlRequest:(struct _CFURLRequest *)arg1 isCacheEquivalentTo:(struct _CFURLRequest *)arg2;
- (_Bool)_request:(id)arg1 isCacheEquivalentTo:(id)arg2;
- (id)_createCanonicalRequestForTask:(id)arg1;
- (id)_createCanonicalRequest:(id)arg1;
- (Class)_protocolClassForRequest:(id)arg1;
- (Class)_protocolClassForTask:(id)arg1;
- (id)_protocolClasses;
- (struct Tube *)_withConnectionCache_getPendingTubeForProtocol:(struct MetaConnectionCacheClient *)arg1 withKey:(const struct HTTPConnectionCacheKey *)arg2 scheduling:(const struct CoreSchedulingSet *)arg3;
- (_Bool)_withConnectionCache_enqueueRequest:(const struct HTTPRequestMessage *)arg1 forProtocol:(struct MetaConnectionCacheClient *)arg2 scheduling:(const struct CoreSchedulingSet *)arg3 options:(struct MetaConnectionOptions)arg4;
- (void)_withConnectionCache_setCurrentSSLMethod:(struct __CFString *)arg1 forKey:(const struct HTTPConnectionCacheKey *)arg2 scheduling:(const struct CoreSchedulingSet *)arg3;
- (struct __CFString *)_withConnectionCache_getCurrentSSLMethodForKey:(const struct HTTPConnectionCacheKey *)arg1 scheduling:(const struct CoreSchedulingSet *)arg2;
- (void)_getCookieHeadersForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (const struct XCookieStorage *)copyBaseStorageForRequest:(struct _CFURLRequest *)arg1;
- (id)_createTaskFromOriginalCFURLRequest:(struct _CFURLRequest *)arg1 updatedCFURLRequest:(struct _CFURLRequest *)arg2 connProps:(struct __CFDictionary *)arg3 sockProps:(struct __CFDictionary *)arg4;
- (void)invalidateUnpurgeableConnectionsForConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg1;
- (void)_purgeIdleConnections;
- (void)_invalidateAllConnections;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XCredentialStorage *)_createXCredentialStorage0;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XCookieStorage *)_createXCookieStorage0;
- (const struct XURLCache *)_createXURLCache;
- (const struct XURLCache *)_createXURLCache0;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_onqueue_completeInvalidation:(_Bool)arg1;
- (struct XTubeManager *)_actualTubeManager;
- (void)_onqueue_getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)task:(id)arg1 terminatedConnection:(id)arg2;
- (id)_streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)dataTaskForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)_flushOrResetStorage:(CDUnknownBlockType)arg1 reset:(unsigned char)arg2;
- (void)_onqueue_invalidateSession:(_Bool)arg1 withQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_invokeInvalidateCallback;
- (id)taskForClass:(Class)arg1 request:(id)arg2 uploadFile:(id)arg3 bodyData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)nextSeed;
- (void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4;
- (id)copyTasks;
- (void)replaceTask:(id)arg1 withTask:(id)arg2;
- (id)connToTask:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

