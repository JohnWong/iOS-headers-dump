//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PKPassbookSettingsDataSource <NSObject>
- (_Bool)showPassState;
- (_Bool)deviceInRestrictedMode;
- (_Bool)deviceSupportsInAppPayments;
- (NSString *)secureElementID;
- (id <PKPassbookSettingsOptionsDelegate>)optionsDelegate;
- (id <PKPassLibraryDataProvider>)passDataProvider;
- (id <PKPaymentSetupDelegate>)setupDelegate;
@end

