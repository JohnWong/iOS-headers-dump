//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/__NSCFURLSessionTask.h>

@class NSData, NSInputStream, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_source>, NSString, NSURL, __NSCFLocalSessionBridge, __NSCFURLSession;

__attribute__((visibility("hidden")))
@interface __NSCFLocalSessionTask : __NSCFURLSessionTask
{
    _Bool _pendingResponseDisposition;
    _Bool _pendingResponseDisposition_didFinish;
    _Bool _duetAccountingIsDiscretionary;
    _Bool _didIssueDidFinish;
    struct _CFURLConnection *_cfConn;
    NSURL *_uploadFile;
    NSData *_uploadData;
    NSInputStream *_uploadDataStream;
    NSObject<OS_dispatch_data> *_dataTaskData;
    CDUnknownBlockType _dataTaskCompletion;
    NSObject<OS_dispatch_data> *_pendingResponseBytes;
    __NSCFLocalSessionBridge *_bridge;
    __NSCFURLSession *_session;
    unsigned long long _suspendCount;
    CDUnknownBlockType _async_initialization;
    NSObject<OS_dispatch_source> *_resourceTimeout;
    NSString *_duetAccountedBundleID;
}

@property _Bool didIssueDidFinish; // @synthesize didIssueDidFinish=_didIssueDidFinish;
@property _Bool duetAccountingIsDiscretionary; // @synthesize duetAccountingIsDiscretionary=_duetAccountingIsDiscretionary;
@property(retain) NSString *duetAccountedBundleID; // @synthesize duetAccountedBundleID=_duetAccountedBundleID;
@property(retain) NSObject<OS_dispatch_source> *resourceTimeout; // @synthesize resourceTimeout=_resourceTimeout;
@property(copy) CDUnknownBlockType async_initialization; // @synthesize async_initialization=_async_initialization;
@property unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property(retain) __NSCFURLSession *session; // @synthesize session=_session;
@property(retain) __NSCFLocalSessionBridge *bridge; // @synthesize bridge=_bridge;
@property(retain) NSObject<OS_dispatch_data> *pendingResponseBytes; // @synthesize pendingResponseBytes=_pendingResponseBytes;
@property _Bool pendingResponseDisposition_didFinish; // @synthesize pendingResponseDisposition_didFinish=_pendingResponseDisposition_didFinish;
@property _Bool pendingResponseDisposition; // @synthesize pendingResponseDisposition=_pendingResponseDisposition;
@property(copy) CDUnknownBlockType dataTaskCompletion; // @synthesize dataTaskCompletion=_dataTaskCompletion;
@property(retain) NSObject<OS_dispatch_data> *dataTaskData; // @synthesize dataTaskData=_dataTaskData;
@property(retain) NSInputStream *uploadDataStream; // @synthesize uploadDataStream=_uploadDataStream;
@property(retain) NSData *uploadData; // @synthesize uploadData=_uploadData;
@property(retain) NSURL *uploadFile; // @synthesize uploadFile=_uploadFile;
@property(retain) struct _CFURLConnection *cfConn; // @synthesize cfConn=_cfConn;
- (void)setConnection:(struct _CFURLConnection *)arg1;
- (id)timeoutError;
- (id)posixError:(int)arg1;
- (id)canceledError;
- (id)nsurlError:(int)arg1;
- (id)error:(id)arg1 code:(long long)arg2;
- (void)_onqueue_completeInitialization;
- (void)resume;
- (void)suspend;
- (void)cancel_without_error;
- (void)cancel;
- (void)cancel_with_error:(id)arg1;
- (void)cancel0:(_Bool)arg1 forcedError:(id)arg2;
- (void)_onqueue_connection_resume;
- (void)_onqueue_connection_suspend;
- (void)_onqueue_connection_cancel;
- (void)_onqueue_issue_cancel_error:(id)arg1;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1;
- (void)_onqueue_didReceiveDispatchData:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_task_onqueue_didFinish;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1;
- (id)_onqueue_strippedMutableRequest;
- (id)description;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3 bridge:(id)arg4;

@end

