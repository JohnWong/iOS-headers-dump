//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMMessageReceiver.h"

@class HMHome, HMMessageDispatcher, HMPendingRequests, HMXpcClient, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMHomeManager : NSObject <HMMessageReceiver>
{
    _Bool _fetchInProgress;
    id <HMHomeManagerDelegate> _delegate;
    HMHome *_primaryHome;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_currentHomes;
    HMXpcClient *_xpcClient;
    HMMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
    unsigned long long _generationCounter;
    HMPendingRequests *_pendingRequests;
    unsigned long long _metadataVersion;
}

@property(nonatomic) unsigned long long metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(retain, nonatomic) HMPendingRequests *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(nonatomic) _Bool fetchInProgress; // @synthesize fetchInProgress=_fetchInProgress;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMXpcClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSMutableArray *currentHomes; // @synthesize currentHomes=_currentHomes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMHome *primaryHome; // @synthesize primaryHome=_primaryHome;
@property(nonatomic) __weak id <HMHomeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleMetadataUpdatedNotification:(id)arg1;
- (void)_handleHomesDidUpdateNotification:(id)arg1;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomeAddedNotification:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_migrateDelegates:(id)arg1 fromHomes:(id)arg2 primaryHome:(id)arg3;
- (void)_updateHomes:(id)arg1;
- (void)_submitHomesConfigFetchMetric:(double)arg1;
- (void)_fetchHomeConfiguration;
- (void)_fetchHomeConfigurationWithPrivacyCheck;
- (void)_start;
- (void)setMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)primaryAccountWasDeletedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)primaryAccountDidChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryHomeKitUsageStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logControl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eraseHomeDataAndDeleteMetadata:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eraseHomeDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetConfiguration:(_Bool)arg1 withoutPopup:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addHomeWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy, nonatomic) NSArray *homes;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

