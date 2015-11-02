//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewItem.h"

@class NSString, NSURL, QLPreviewItemProxy, QLServicePreviewContentController;

@interface QLPreviewRemoteItem : NSObject <QLPreviewItem>
{
    QLServicePreviewContentController *_contentController;
    long long _index;
    QLPreviewItemProxy *_proxy;
    _Bool _resolving;
    CDUnknownBlockType _completionBlock;
}

- (id)backgroundColorOverride;
- (double)autoPlaybackPosition;
- (_Bool)isPromisedItem;
- (id)previewItemURLForDisplay;
- (id)previewItemContentType;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
@property(readonly, copy) NSString *description;
@property(readonly) QLPreviewItemProxy *proxy;
- (void)invalidate;
- (void)resolveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_clearCompletionBlock;
- (void)dealloc;
- (id)initWithContentController:(id)arg1 index:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
