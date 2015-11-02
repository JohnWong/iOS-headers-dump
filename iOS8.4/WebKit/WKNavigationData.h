//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString, NSURL, NSURLRequest, NSURLResponse;

@interface WKNavigationData : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationData> _data;
}

- (id).cxx_construct;
@property(readonly) struct Object *_apiObject;
@property(readonly) NSURLResponse *response;
@property(readonly) NSURL *destinationURL;
@property(readonly) NSURLRequest *originalRequest;
@property(readonly) NSString *title;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

