//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLRequest, QLPreviewConverter, UIWebBrowserView;

@interface QLRemotePrintPageHelper : NSObject
{
    UIWebBrowserView *_browserView;
    NSURLRequest *_request;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
    struct CGSize _printableSize;
}

+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
+ (_Bool)_isXPathType:(id)arg1;
@property(retain) QLPreviewConverter *previewConverter; // @synthesize previewConverter=_previewConverter;
@property struct CGSize printableSize; // @synthesize printableSize=_printableSize;
- (id)pdfDataForPageAtIndex:(long long)arg1 withSize:(struct CGSize)arg2 printingDone:(_Bool *)arg3;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (long long)numberOfPages;
- (void)_waitForPreview;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

@end

