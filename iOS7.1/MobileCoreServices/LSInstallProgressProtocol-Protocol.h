//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSApplicationProxy, LSApplicationWorkspaceObserver, NSArray, NSString, NSUUID;

@protocol LSInstallProgressProtocol <NSObject>
- (void)sendUninstalledNotificationForApps:(NSArray *)arg1;
- (void)sendInstalledNotificationForApps:(NSArray *)arg1;
- (void)sendChangeNotificationForApp:(LSApplicationProxy *)arg1;
- (void)sendIconUpdatedNotificationForApp:(LSApplicationProxy *)arg1;
- (void)placeholderInstalledForApp:(LSApplicationProxy *)arg1;
- (void)installationFailedForApplication:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)installationEndedForApplication:(NSString *)arg1;
- (void)createInstallProgressForApplication:(LSApplicationProxy *)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(NSString *)arg3;
- (void)removeObserverWithUUID:(NSUUID *)arg1;
- (void)addObserver:(LSApplicationWorkspaceObserver *)arg1 withUUID:(NSUUID *)arg2;
@end
