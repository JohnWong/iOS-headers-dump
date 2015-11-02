//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface UIViewController (iAdAdditions)
+ (void)prepareInterstitialAds;
@property(readonly, nonatomic) _Bool shouldPresentInterstitialAd;
- (_Bool)requestInterstitialAdPresentation;
@property(readonly, nonatomic, getter=isDisplayingBannerAd) _Bool displayingBannerAd;
@property(readonly, nonatomic, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd;
@property(readonly, retain, nonatomic) UIView *originalContentView;
@property(nonatomic) _Bool canDisplayBannerAds;
@property(nonatomic) long long interstitialPresentationPolicy;
@end

