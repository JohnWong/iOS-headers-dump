//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface NSCFURLProtocol : NSURLProtocol
{
    struct _CFURLProtocol *cfProt;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)finalize;
- (void)dealloc;

@end
