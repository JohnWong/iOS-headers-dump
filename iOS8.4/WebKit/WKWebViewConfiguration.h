//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, WKPreferences, WKProcessPool, WKUserContentController, WKWebView, WKWebViewContentProviderRegistry, _WKVisitedLinkProvider, _WKWebsiteDataStore;

@interface WKWebViewConfiguration : NSObject <NSCopying>
{
    struct LazyInitialized<WKProcessPool> _processPool;
    struct LazyInitialized<WKPreferences> _preferences;
    struct LazyInitialized<WKUserContentController> _userContentController;
    struct LazyInitialized<_WKVisitedLinkProvider> _visitedLinkProvider;
    struct LazyInitialized<_WKWebsiteDataStore> _websiteDataStore;
    struct WeakObjCPtr<WKWebView> _relatedWebView;
    struct WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
    struct RetainPtr<NSString> _groupIdentifier;
    struct LazyInitialized<WKWebViewContentProviderRegistry> _contentProviderRegistry;
    _Bool _featureCounterEnabled;
    _Bool _suppressesIncrementalRendering;
    _Bool _allowsInlineMediaPlayback;
    _Bool _mediaPlaybackRequiresUserAction;
    _Bool _mediaPlaybackAllowsAirPlay;
    long long _selectionGranularity;
}

@property(nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay; // @synthesize mediaPlaybackAllowsAirPlay=_mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(nonatomic) _Bool suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_validate;
@property(nonatomic, setter=_setContentProviderRegistry:) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property(retain, nonatomic, setter=_setWebsiteDataStore:) _WKWebsiteDataStore *_websiteDataStore;
@property(retain, nonatomic, setter=_setVisitedLinkProvider:) _WKVisitedLinkProvider *_visitedLinkProvider;
@property(retain, nonatomic) WKUserContentController *userContentController;
@property(retain, nonatomic) WKPreferences *preferences;
@property(retain, nonatomic) WKProcessPool *processPool;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
@property(nonatomic, setter=_setFeatureCounterEnabled:) _Bool _featureCounterEnabled;
@property(copy, nonatomic, setter=_setGroupIdentifier:) NSString *_groupIdentifier;
@property(nonatomic, setter=_setAlternateWebViewForNavigationGestures:) __weak WKWebView *_alternateWebViewForNavigationGestures;
@property(nonatomic, setter=_setRelatedWebView:) __weak WKWebView *_relatedWebView;

@end

