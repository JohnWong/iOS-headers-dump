//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_io>, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface __NSCFLocalDownloadFile : NSObject
{
    struct stat _stat;
    _Bool _finished;
    _Bool _skipUnlink;
    _Bool _truncateFile;
    int _error;
    NSObject<OS_dispatch_io> *_writeIO;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_path;
}

@property int error; // @synthesize error=_error;
@property _Bool truncateFile; // @synthesize truncateFile=_truncateFile;
@property _Bool skipUnlink; // @synthesize skipUnlink=_skipUnlink;
@property(retain) NSString *path; // @synthesize path=_path;
@property _Bool finished; // @synthesize finished=_finished;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSObject<OS_dispatch_io> *writeIO; // @synthesize writeIO=_writeIO;
- (id).cxx_construct;
- (void)captureFile:(id *)arg1 outStat:(struct stat *)arg2;
- (id)fileURL;
- (void)finishOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)truncate;
- (void)dealloc;
- (id)ioChannel;
- (id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2;
- (id)initTempFileWithDirectory:(id)arg1;
- (id)initQueues;

@end

