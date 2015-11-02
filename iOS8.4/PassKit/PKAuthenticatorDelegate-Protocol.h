//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKAuthenticator, UIViewController;

@protocol PKAuthenticatorDelegate <NSObject>

@optional
- (void)dismissPassphraseRemoteViewController;
- (void)presentPassphraseViewController:(UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)dismissPasscodeRemoteViewController;
- (void)presentPasscodeViewController:(UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)authenticatorDidEncounterMatchMiss:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOff:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOn:(PKAuthenticator *)arg1;
@end

