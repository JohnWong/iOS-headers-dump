//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPopoverController;

@protocol MFMailPopoverManagerDelegate <NSObject>

@optional
- (_Bool)popoverControllerSupportsRotation:(UIPopoverController *)arg1;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg1 isUserAction:(_Bool)arg2;
- (_Bool)popoverControllerShouldDismissPopover:(UIPopoverController *)arg1;
@end

