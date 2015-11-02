//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADAdSpaceRemoteViewControllerDelegate.h"
#import "ADAdSpace_RPC.h"
#import "UIViewControllerTransitioningDelegate.h"

@class ADAdImpressionPublicAttributes, ADAdSpaceConfiguration, ADAdSpaceRemoteViewController, NSDictionary, NSSet, NSString, NSURL, _ADRemoteViewController, _UIAsyncInvocation;

@interface ADAdSpace : NSObject <UIViewControllerTransitioningDelegate, ADAdSpace_RPC, ADAdSpaceRemoteViewControllerDelegate>
{
    id <ADAdRecipient> _recipient;
    _Bool _visibilityCheckScheduled;
    _Bool _serviceAdSpaceRequestInProgress;
    _Bool _shouldPresentActionViewControllerWhenReady;
    _Bool _actionViewControllerReadyForPresentation;
    _Bool _actionViewControllerWantsDismissal;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
    ADAdImpressionPublicAttributes *_currentAdImpressionPublicAttributes;
    long long _visibility;
    double _lastSlowCheck;
    ADAdSpaceRemoteViewController *_creativeViewController;
    _UIAsyncInvocation *_remoteViewControllerRequestCancelationInvocation;
    _ADRemoteViewController *_remoteViewController;
    _ADRemoteViewController *_portraitOnlyViewController;
    NSDictionary *_adToLoad;
}

@property(retain, nonatomic) NSDictionary *adToLoad; // @synthesize adToLoad=_adToLoad;
@property(nonatomic) _Bool actionViewControllerWantsDismissal; // @synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal;
@property(nonatomic) _Bool actionViewControllerReadyForPresentation; // @synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation;
@property(nonatomic) _Bool shouldPresentActionViewControllerWhenReady; // @synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady;
@property(retain, nonatomic) _ADRemoteViewController *portraitOnlyViewController; // @synthesize portraitOnlyViewController=_portraitOnlyViewController;
@property(retain, nonatomic) _ADRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) _UIAsyncInvocation *remoteViewControllerRequestCancelationInvocation; // @synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation;
@property(nonatomic) _Bool serviceAdSpaceRequestInProgress; // @synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress;
@property(retain, nonatomic) ADAdSpaceRemoteViewController *creativeViewController; // @synthesize creativeViewController=_creativeViewController;
@property(nonatomic) double lastSlowCheck; // @synthesize lastSlowCheck=_lastSlowCheck;
@property(nonatomic) _Bool visibilityCheckScheduled; // @synthesize visibilityCheckScheduled=_visibilityCheckScheduled;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes; // @synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes;
@property(copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_remote_dismissPortraitOnlyViewController;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_dismissViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned long long)arg1;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
- (void)_considerPresentingActionViewController;
- (void)_remote_resumeBannerMedia;
- (void)_remote_pauseBannerMedia;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1;
- (void)_remote_creativeWillLoad;
- (void)interstitialWasRemovedFromSuperview;
- (void)cancelBannerViewAction;
- (void)refuseBannerViewAction;
- (void)executeBannerViewActionFrom:(struct CGRect)arg1 withTapLocation:(struct CGPoint)arg2;
- (void)setAdSpaceType:(int)arg1;
- (void)loadAd:(id)arg1;
- (void)_updateAllProperties;
- (void)updateVisibility;
- (void)adSpaceRemoteViewControllerDidTerminateWithError:(id)arg1;
@property(readonly, nonatomic) id <ADSAdSpace_RPC><NSObject> serviceAdSpace;
- (void)_clientApplicationDidBecomeActive;
- (void)_clientApplicationDidEnterBackground;
- (void)_remote_close;
- (void)close;
- (void)_closeConnectionIfNecessary;
@property(readonly, nonatomic) id <ADAdRecipient> recipient;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_requestServiceAdSpace;
@property(readonly, nonatomic) ADAdSpaceConfiguration *configuration;
@property(readonly, nonatomic) NSString *connectionAssertionIdentifier;
@property(readonly, copy) NSString *description;
- (id)initForRecipient:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

