//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/__NSCFLocalSessionTask.h>

#import "NSURLSessionDownloadTaskSubclass.h"
#import "__NSCFLocalDownloadFileOpener.h"

@class NSDictionary, NSObject<OS_dispatch_data>, NSString, __NSCFLocalDownloadFile;

__attribute__((visibility("hidden")))
@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener>
{
    _Bool _canWrite;
    _Bool _suppressProgress;
    _Bool _needFinish;
    _Bool _didIssueNeedFinish;
    int _seqNo;
    CDUnknownBlockType _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    unsigned long long _totalWrote;
    CDUnknownBlockType _resumeCallback;
    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long __transientWriteProgress;
    CDUnknownBlockType __afterDidReportProgressOnQueue;
}

@property(copy) CDUnknownBlockType _afterDidReportProgressOnQueue; // @synthesize _afterDidReportProgressOnQueue=__afterDidReportProgressOnQueue;
@property unsigned long long _transientWriteProgress; // @synthesize _transientWriteProgress=__transientWriteProgress;
@property(retain) NSDictionary *originalResumeInfo; // @synthesize originalResumeInfo=_originalResumeInfo;
@property long long initialResumeSize; // @synthesize initialResumeSize=_initialResumeSize;
@property(copy) CDUnknownBlockType resumeCallback; // @synthesize resumeCallback=_resumeCallback;
@property unsigned long long totalWrote; // @synthesize totalWrote=_totalWrote;
@property _Bool didIssueNeedFinish; // @synthesize didIssueNeedFinish=_didIssueNeedFinish;
@property _Bool needFinish; // @synthesize needFinish=_needFinish;
@property int seqNo; // @synthesize seqNo=_seqNo;
@property unsigned long long ioSuspend; // @synthesize ioSuspend=_ioSuspend;
@property NSObject<OS_dispatch_data> *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property _Bool suppressProgress; // @synthesize suppressProgress=_suppressProgress;
@property _Bool canWrite; // @synthesize canWrite=_canWrite;
@property(retain) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
@property(copy) CDUnknownBlockType fileCompletion; // @synthesize fileCompletion=_fileCompletion;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkWrite;
- (void)_private_fileCompletion;
- (void)_private_errorCompletion;
- (id)createResumeInformation:(id)arg1;
- (void)writeAndResume;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_private_posixError:(int)arg1;
- (void)reportProgress:(unsigned long long)arg1;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInitialization;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (_Bool)setupForNewDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

