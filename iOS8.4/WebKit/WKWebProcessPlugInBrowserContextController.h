//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString, WKBrowsingContextHandle, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, _WKRemoteObjectRegistry;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPage> _page;
    struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>> _loadDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>> _formDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
}

+ (id)lookUpBrowsingContextFromHandle:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
@property(readonly) WKWebProcessPlugInPageGroup *pageGroup;
@property(readonly) WKWebProcessPlugInFrame *mainFrame;
@property(readonly) WKDOMRange *selectedRange;
@property(readonly) WKDOMDocument *mainFrameDocument;
- (void)dealloc;
@property __weak id <WKWebProcessPlugInLoadDelegate> loadDelegate;
@property(readonly, nonatomic) _Bool _usesNonPersistentWebsiteDataStore;
@property(nonatomic, setter=_setDefersLoading:) _Bool _defersLoading;
@property(setter=_setFormDelegate:) __weak id <WKWebProcessPlugInFormDelegatePrivate> _formDelegate;
@property(readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property(readonly, nonatomic) WKBrowsingContextHandle *handle;
@property(readonly, nonatomic) struct OpaqueWKBundlePage *_bundlePageRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

