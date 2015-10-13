//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PKPrinter, UINavigationController, UIPopoverController, UIPrintInteractionController, UIPrintPanelTableViewController, UIPrintPaper, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController : NSObject
{
    UIPrintInteractionController *_printInteractionController;
    UINavigationController *_navigationController;
    UIPrintPanelTableViewController *_tableViewController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIWindow *_window;
    PKPrinter *_printer;
    _Bool _dismissed;
    _Bool _animated;
    _Bool _observingRotation;
    _Bool _parentHasNoPopover;
}

@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
@property(readonly, nonatomic) _Bool showPaper;
@property(readonly, nonatomic) _Bool showCopies;
@property(readonly, nonatomic) _Bool showPageRange;
@property(readonly, nonatomic) _Bool showDuplex;
@property(retain, nonatomic) UIPrintPaper *paper;
@property(readonly, nonatomic) NSArray *paperList;
- (id)_removeRollsFrom:(id)arg1;
@property(nonatomic) long long copies;
@property(nonatomic) struct _NSRange pageRange;
@property(readonly, nonatomic) long long pageCount;
@property(nonatomic) _Bool duplex;
- (void)controllerDidDisappear;
- (void)cancelPrinting;
- (void)startPrinting;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismissPrintPanel:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)presentPrintPanelAnimated:(_Bool)arg1;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentWindow;
- (void)_presentInParentAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;

@end

