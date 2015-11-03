//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class MCPeerID, NSMutableDictionary, NSNetServiceBrowser, NSObject<OS_dispatch_queue>, NSString;

@interface MCNearbyServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    _Bool _isBrowsing;
    _Bool _wasBrowsing;
    id <MCNearbyServiceBrowserDelegate> _delegate;
    MCPeerID *_myPeerID;
    NSString *_serviceType;
    NSString *_formattedServiceType;
    NSMutableDictionary *_peers;
    NSNetServiceBrowser *_networkBrowser;
    long long _outgoingInviteID;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_invites;
}

@property(nonatomic) _Bool wasBrowsing; // @synthesize wasBrowsing=_wasBrowsing;
@property(nonatomic) _Bool isBrowsing; // @synthesize isBrowsing=_isBrowsing;
@property(retain, nonatomic) NSMutableDictionary *invites; // @synthesize invites=_invites;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) long long outgoingInviteID; // @synthesize outgoingInviteID=_outgoingInviteID;
@property(retain, nonatomic) NSNetServiceBrowser *networkBrowser; // @synthesize networkBrowser=_networkBrowser;
@property(retain, nonatomic) NSMutableDictionary *peers; // @synthesize peers=_peers;
@property(copy, nonatomic) NSString *formattedServiceType; // @synthesize formattedServiceType=_formattedServiceType;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(nonatomic) id <MCNearbyServiceBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (id)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)invitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncHandleInviteTimeout:(id)arg1 forPeer:(id)arg2;
- (void)syncHandleInviteResponse:(id)arg1 fromPeer:(id)arg2;
- (void)syncInvitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)syncInitiateConnectionToPeer:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)stopBrowsingForPeers;
- (void)syncStopBrowsingForPeers;
- (void)startBrowsingForPeers;
- (void)syncStartBrowsingForPeers;
- (void)parseIDString:(id *)arg1 displayName:(id *)arg2 fromIdentifier:(id)arg3;
- (long long)syncNextOutgoingInviteID;
- (id)description;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 serviceType:(id)arg2;
- (id)init;

@end

