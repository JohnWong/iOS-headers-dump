//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPServiceRadioController.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener, RadioAvailabilityController, RadioRecentStationsController;

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_connections;
    _Bool _hasRefreshedStations;
    NSXPCListener *_listener;
    RadioAvailabilityController *_availabilityController;
    RadioRecentStationsController *_recentStationsController;
}

@property(retain, nonatomic) RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
@property(retain, nonatomic) RadioAvailabilityController *availabilityController; // @synthesize availabilityController=_availabilityController;
- (void).cxx_destruct;
- (void)_removeConnection:(id)arg1;
- (_Bool)_isRadioAvailable;
- (void)_addConnection:(id)arg1;
- (void)_recentStationsControllerDidChangeStationsNotification:(id)arg1;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1;
- (void)start;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

