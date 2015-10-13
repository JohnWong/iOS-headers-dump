//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPopoverControllerDelegate.h"

@class DOMNode, NSString, UIPopoverController;

__attribute__((visibility("hidden")))
@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate>
{
    _Bool _isRotating;
    DOMNode *_node;
    struct CGPoint _presentationPoint;
    UIPopoverController *_popoverController;
    id <UIWebRotatingNodePopoverDelegate> _dismissDelegate;
}

@property(nonatomic) id <UIWebRotatingNodePopoverDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(nonatomic) struct CGPoint presentationPoint; // @synthesize presentationPoint=_presentationPoint;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)presentPopoverAnimated:(_Bool)arg1;
- (unsigned long long)popoverArrowDirections;
- (void)dealloc;
- (id)initWithDOMNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

