//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PKPaymentCameraCaptureViewController;

@protocol PKPaymentCameraCaptureViewControllerDelegate <NSObject>
- (void)cameraCaptureViewController:(PKPaymentCameraCaptureViewController *)arg1 didRecognizeObjects:(NSArray *)arg2;
- (void)cameraCaptureViewControllerDidFail:(PKPaymentCameraCaptureViewController *)arg1;
@end

