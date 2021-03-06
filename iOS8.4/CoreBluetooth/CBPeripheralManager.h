//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPairingAgentParentDelegate.h"
#import "CBXpcConnectionDelegate.h"

@class CBPairingAgent, CBXpcConnection, NSLock, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate>
{
    id <CBPeripheralManagerDelegate> _delegate;
    struct {
        unsigned int willRestoreState:1;
        unsigned int didAddService:1;
        unsigned int didReceiveReadRequest:1;
        unsigned int didReceiveWriteRequests:1;
        unsigned int centralDidSubscribeToCharacteristic:1;
        unsigned int centralDidUnsubscribeFromCharacteristic:1;
        unsigned int didStartAdvertising:1;
        unsigned int isReadyToUpdate:1;
        unsigned int centralDidConnect:1;
        unsigned int centralDidUpdateConnectionParameters:1;
    } _delegateFlags;
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    long long _state;
    _Bool _isAdvertising;
    NSMapTable *_centrals;
    NSMutableArray *_services;
    NSMutableDictionary *_characteristicIDs;
    NSLock *_updateLock;
    _Bool _readyForUpdates;
    _Bool _waitingForReady;
}

+ (long long)authorizationStatus;
@property _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property long long state; // @synthesize state=_state;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)handleCentralMsg:(int)arg1 args:(id)arg2;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleSolicitedServicesFound:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (_Bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)addService:(id)arg1;
- (void)stopAdvertising;
- (void)startAdvertising:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
@property(nonatomic) __weak id <CBPeripheralManagerDelegate> delegate; // @dynamic delegate;
- (oneway void)release;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) CBPairingAgent *sharedPairingAgent; // @synthesize sharedPairingAgent=_pairingAgent;
- (void)dealloc;
- (void)forEachCentral:(CDUnknownBlockType)arg1;
- (id)peerWithInfo:(id)arg1;
- (id)centralWithInfo:(id)arg1;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (_Bool)sendMsg:(int)arg1 args:(id)arg2;
- (_Bool)isMsgAllowedAlways:(int)arg1;
- (_Bool)isMsgAllowedWhenOff:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

