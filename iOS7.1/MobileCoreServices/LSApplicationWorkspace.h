//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LSApplicationWorkspace : NSObject
{
}

+ (id)defaultWorkspace;
- (_Bool)_LSPrivateRebuildLaunchServicesDatabase;
- (_Bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (_Bool)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)deviceIdentifierForVendor;
- (id)deviceIdentifierForAdvertising;
- (void)_clearCachedAdvertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (_Bool)invalidateIconCache:(id)arg1;
- (_Bool)unregisterApplication:(id)arg1;
- (_Bool)registerApplication:(id)arg1;
- (_Bool)registerApplicationDictionary:(id)arg1;
- (_Bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(unsigned long long)arg2;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (_Bool)applicationIsInstalled:(id)arg1;
- (id)allApplications;
- (id)unrestrictedApplications;
- (id)placeholderApplications;
- (id)allInstalledApplications;
- (id)installedApplications;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (_Bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (_Bool)openURL:(id)arg1 withOptions:(id)arg2;
- (_Bool)openApplicationWithBundleID:(id)arg1;
- (id)URLOverrideForURL:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)directionsApplications;
- (id)applicationForOpeningResource:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)delegateProxy;
- (id)remoteObserver;
- (_Bool)establishConnection;

@end

