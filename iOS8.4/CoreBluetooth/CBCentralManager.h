//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPairingAgentParentDelegate.h"
#import "CBXpcConnectionDelegate.h"

@class CBPairingAgent, CBXpcConnection, NSMapTable, NSString;

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate>
{
    id <CBCentralManagerDelegate> _delegate;
    struct {
        unsigned int willRestoreState:1;
        unsigned int didRetrievePeripherals:1;
        unsigned int didRetrieveConnectedPeripherals:1;
        unsigned int didDiscoverPeripheral:1;
        unsigned int didConnectPeripheral:1;
        unsigned int didFailToConnectPeripheral:1;
        unsigned int didDisconnectPeripheral:1;
        unsigned int didUpdatePeripheralConnectionState:1;
        unsigned int didLoseZone:1;
        unsigned int didUpdateConnectionParameters:1;
    } _delegateFlags;
    long long _state;
    _Bool _isScanning;
    NSMapTable *_peripherals;
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
}

@property _Bool isScanning; // @synthesize isScanning=_isScanning;
@property long long state; // @synthesize state=_state;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)handlePeripheralMsg:(int)arg1 args:(id)arg2;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handleConnectedPeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralsRetrieved:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1 force:(_Bool)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(_Bool)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
@property(nonatomic) __weak id <CBCentralManagerDelegate> delegate; // @dynamic delegate;
- (oneway void)release;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) CBPairingAgent *sharedPairingAgent; // @synthesize sharedPairingAgent=_pairingAgent;
- (void)dealloc;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)orphanPeripherals;
- (void)forEachPeripheral:(CDUnknownBlockType)arg1;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;
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

