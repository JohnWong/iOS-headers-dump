//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, QLPrintPageRenderer;

@protocol QLPrintPageRendererDataSource <NSObject>
- (NSData *)printPageRenderer:(QLPrintPageRenderer *)arg1 pdfDataForPageAtIndex:(long long)arg2 withSize:(struct CGSize)arg3 printingDone:(_Bool *)arg4;
- (void)printPageRenderer:(QLPrintPageRenderer *)arg1 prepareForDrawingPages:(struct _NSRange)arg2;
- (long long)numberOfPageInPrintPageRenderer:(QLPrintPageRenderer *)arg1 withSize:(struct CGSize)arg2;
@end

