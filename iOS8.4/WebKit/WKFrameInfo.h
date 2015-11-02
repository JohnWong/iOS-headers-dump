//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURLRequest;

@interface WKFrameInfo : NSObject <NSCopying>
{
    struct RetainPtr<NSURLRequest> _request;
    _Bool _mainFrame;
}

@property(readonly, nonatomic, getter=isMainFrame) _Bool mainFrame; // @synthesize mainFrame=_mainFrame;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSURLRequest *request;
- (id)description;
- (id)initWithWebFrameProxy:(struct WebFrameProxy *)arg1;

@end

