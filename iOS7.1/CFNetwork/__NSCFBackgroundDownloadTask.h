//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask
{
    _Bool _finished;
}

@property _Bool finished; // @synthesize finished=_finished;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (_Bool)isKindOfClass:(Class)arg1;

@end

