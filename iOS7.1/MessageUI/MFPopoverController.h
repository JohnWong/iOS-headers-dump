//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverController.h"

#import "UIPopoverControllerDelegate.h"

@interface MFPopoverController : UIPopoverController <UIPopoverControllerDelegate>
{
    id _mailDelegate;
    id _mailPopoverManager;
    _Bool _isRotating;
}

@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) id mailPopoverManager; // @synthesize mailPopoverManager=_mailPopoverManager;
@property(nonatomic) id <MFMailPopoverManagerDelegate> mailDelegate; // @synthesize mailDelegate=_mailDelegate;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;

@end

