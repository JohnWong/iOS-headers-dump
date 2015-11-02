//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCNearbyServiceAdvertiserDelegate.h"
#import "UIAlertViewDelegate.h"

@class MCNearbyServiceAdvertiser, MCPeerID, MCSession, NSBundle, NSDictionary, NSMutableArray, NSString, UIAlertView;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate, UIAlertViewDelegate>
{
    id <MCAdvertiserAssistantDelegate> _delegate;
    _Bool _isAdvertising;
    _Bool _wasAdvertising;
    MCSession *_session;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    MCPeerID *_myPeerID;
    MCNearbyServiceAdvertiser *_advertiser;
    NSMutableArray *_invitationsBuffer;
    CDUnknownBlockType _invitationHandlerForPresentedAlert;
    NSString *_appName;
    NSBundle *_frameworkBundle;
    UIAlertView *_alertView;
}

@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property(nonatomic) _Bool wasAdvertising; // @synthesize wasAdvertising=_wasAdvertising;
@property(nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) CDUnknownBlockType invitationHandlerForPresentedAlert; // @synthesize invitationHandlerForPresentedAlert=_invitationHandlerForPresentedAlert;
@property(retain, nonatomic) NSMutableArray *invitationsBuffer; // @synthesize invitationsBuffer=_invitationsBuffer;
@property(retain, nonatomic) MCNearbyServiceAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(copy, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSDictionary *discoveryInfo; // @synthesize discoveryInfo=_discoveryInfo;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (void)presentNextInvitation;
- (void)stop;
- (void)start;
@property(nonatomic) __weak id <MCAdvertiserAssistantDelegate> delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

