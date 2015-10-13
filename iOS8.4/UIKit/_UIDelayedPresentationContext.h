//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject
{
    _Bool _enableUserInteraction;
    long long _reqcnt;
    NSInvocation *_presentInvocation;
    CDUnknownBlockType _cancellationHandler;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSInvocation *presentInvocation; // @synthesize presentInvocation=_presentInvocation;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
- (void)finishDelayedPresentation:(id)arg1;
- (void)beginDelayedPresentation;
- (void)cancelDelayedPresentation:(_Bool)arg1;
- (long long)incrementRequestCount;
- (long long)decrementRequestCount;
- (long long)requestCount;
- (id)delayingController;
- (id)invocationTarget;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(CDUnknownBlockType)arg2;

@end

