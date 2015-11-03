//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITwoSidedAlertController.h"

#import "UITwoSidedAlertControllerDelegate.h"

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate>
{
    NSString *_audioCategory;
}

- (void).cxx_destruct;
- (void)audioRoutingPicker:(id)arg1 didSelectRouteAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)twoSidedAlertControllerDidDismiss:(id)arg1;
- (id)createBackAlert;
- (void)flip;
- (id)createFrontAlert;
- (id)initWithAudioCategory:(id)arg1;

@end

