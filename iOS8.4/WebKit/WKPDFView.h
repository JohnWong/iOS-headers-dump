//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPDFAnnotationControllerDelegate.h"
#import "UIPDFPageViewDelegate.h"
#import "WKActionSheetAssistantDelegate.h"
#import "WKWebViewContentProvider.h"

@class NSString, UIScrollView, WKWebView;

__attribute__((visibility("hidden")))
@interface WKPDFView : UIView <WKWebViewContentProvider, UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WKActionSheetAssistantDelegate>
{
    struct RetainPtr<UIPDFDocument> _pdfDocument;
    struct RetainPtr<NSString> _suggestedFilename;
    struct RetainPtr<WKPDFPageNumberIndicator> _pageNumberIndicator;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow> _pages;
    unsigned int _centerPageNumber;
    struct CGSize _minimumSize;
    struct CGSize _overlaidAccessoryViewsInset;
    WKWebView *_webView;
    UIScrollView *_scrollView;
    UIView *_fixedOverlayView;
    _Bool _isStartingZoom;
    _Bool _isPerformingSameDocumentNavigation;
    struct RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;
    struct InteractionInformationAtPosition _positionInformation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (RetainPtr_f649c0c3)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr_f649c0c3)arg3;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint)arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (const struct InteractionInformationAtPosition *)positionInformationForActionSheetAssistant:(id)arg1;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)resetZoom:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;
- (id)_URLForLinkAnnotation:(id)arg1;
- (void)_highlightLinkAnnotation:(id)arg1 forDuration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resetZoomAnimated:(_Bool)arg1;
- (void)_computePageAndDocumentFrames;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)_scrollToFragment:(id)arg1;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_computedContentInsetDidChange;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)_updatePageNumberIndicator;
- (struct CGPoint)_offsetForPageNumberIndicator;
- (void)_revalidateViews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize)arg1;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)_clearPages;
@property(readonly, nonatomic) struct CGPDFDocument *pdfDocument;
@property(readonly, nonatomic) NSString *suggestedFilename;
- (void)dealloc;
- (id)web_initWithFrame:(struct CGRect)arg1 webView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
