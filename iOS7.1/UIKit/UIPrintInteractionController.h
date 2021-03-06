//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PKPrinter, UIPrintFormatter, UIPrintInfo, UIPrintPageRenderer, UIPrintPaper;

@interface UIPrintInteractionController : NSObject
{
    UIPrintInfo *_printInfo;
    id <UIPrintInteractionControllerDelegate> _delegate;
    _Bool _showsPageRange;
    _Bool _hidesNumberOfCopies;
    UIPrintPageRenderer *_printPageRenderer;
    UIPrintFormatter *_printFormatter;
    id _printingItem;
    NSArray *_printingItems;
    UIPrintPaper *_printPaper;
    CDUnknownBlockType _completionHandler;
    unsigned long long _backgroundTaskIdentifier;
    id _printState;
}

+ (id)sharedPrintController;
+ (_Bool)canPrintData:(id)arg1;
+ (_Bool)canPrintURL:(id)arg1;
+ (id)printableUTIs;
+ (_Bool)isPrintingAvailable;
@property(copy, nonatomic) NSArray *printingItems; // @synthesize printingItems=_printingItems;
@property(copy, nonatomic) id printingItem; // @synthesize printingItem=_printingItem;
@property(retain, nonatomic) UIPrintFormatter *printFormatter; // @synthesize printFormatter=_printFormatter;
@property(retain, nonatomic) UIPrintPageRenderer *printPageRenderer; // @synthesize printPageRenderer=_printPageRenderer;
@property(readonly, nonatomic) UIPrintPaper *printPaper; // @synthesize printPaper=_printPaper;
@property(nonatomic) _Bool showsPageRange; // @synthesize showsPageRange=_showsPageRange;
@property(nonatomic) id <UIPrintInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
- (void)_endPrintJob:(_Bool)arg1 error:(id)arg2;
- (id)_printPageRenderer:(id)arg1;
- (id)_printItem:(id)arg1;
- (void)_printPage;
- (void)_startPrinting;
- (void)_updatePrintPaper;
- (id)_paperForContentType:(long long)arg1;
- (id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2;
- (void)_preparePrintInfo;
- (void)_printPanelDidDismiss;
- (void)_setPrintInfoState:(int)arg1;
- (void)_printPanelWillDismiss:(_Bool)arg1;
- (void)_printPanelDidPresent;
- (_Bool)_setupPrintPanel:(CDUnknownBlockType)arg1;
- (void)_updatePageCount;
@property(retain, nonatomic) UIPrintPaper *paper;
@property(retain, nonatomic) PKPrinter *printer;
@property(nonatomic) struct _NSRange pageRange;
@property(readonly, nonatomic) long long pageCount;
@property(nonatomic) _Bool showsNumberOfCopies;
- (_Bool)_canShowCopies;
- (_Bool)_canShowPaperList;
- (_Bool)_canShowPageRange;
- (_Bool)_canShowDuplex;
- (struct CGSize)_printItemContentSize;
- (id)_currentPrintInfo;
- (void)_cleanPrintState;
- (void)dismissAnimated:(_Bool)arg1;
- (_Bool)presentFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;
- (oneway void)release;
- (void)_cancelManualPrintPage;
- (void)_manualPrintPage;
- (void)_enableManualPrintPage:(_Bool)arg1;

@end

