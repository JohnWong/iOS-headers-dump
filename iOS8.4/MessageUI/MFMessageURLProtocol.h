//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@class MFMessageTextAttachment, MFMonitoredInvocation, NSMutableArray, NSThread, NSURL;

@interface MFMessageURLProtocol : NSURLProtocol
{
    NSURL *_url;
    MFMessageTextAttachment *_attachment;
    MFMonitoredInvocation *_invocation;
    NSThread *_loader;
    _Bool _stopped;
    NSMutableArray *_attachments;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)initialize;
- (void)dealloc;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)_downloadAttachment;
- (void)stopLoading;
- (void)startLoading;

@end

