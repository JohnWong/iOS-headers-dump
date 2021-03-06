//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLRemotePrintPageHelper.h>

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLRemotePrintPageHelper
{
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}

- (id)pdfDataForPageAtIndex:(long long)arg1 withSize:(struct CGSize)arg2 printingDone:(_Bool *)arg3;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (long long)numberOfPages;
- (id)_currentNodes;
- (id)_htmlPageXPath;
- (void)dealloc;

@end

