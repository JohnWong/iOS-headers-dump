//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKPaymentNotificationAppURLHelper : NSObject
{
}

+ (id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 identifier:(id)arg3 appLaunchToken:(id)arg4 usingDeviceAccountNumber:(_Bool)arg5;
+ (_Bool)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1;
+ (id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;

@end

