//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface NSURLDownloadInternal : NSObject
{
    struct _CFURLDownload *cfDownload;
    struct _CFURLAuthChallenge *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    id delegate;
    _Bool downloadActive;
    NSOperationQueue *_targetQueue;
}

- (void)dealloc;

@end

