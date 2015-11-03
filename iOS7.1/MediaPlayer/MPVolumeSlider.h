//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "MPVolumeControllerDelegate.h"

@class MPAVController, MPAVRoutingController, MPVolumeController, NSString, NSTimer, UIImage, UIImageView, UILabel, UIView;

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate>
{
    MPVolumeController *_volumeController;
    NSTimer *_commitTimer;
    UILabel *_routeNameLabel;
    long long _style;
    UIImageView *_thumbImageView;
    UIImageView *_thumbMaskImageView;
    _Bool _isOffScreen;
    _Bool _forcingOffscreenVisibility;
    _Bool _thumbIsDefault;
    UIView *_volumeWarningView;
    _Bool _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    MPAVRoutingController *_routingController;
}

@property(retain, nonatomic) UIImage *volumeWarningTrackImage; // @synthesize volumeWarningTrackImage=_volumeWarningTrackImage;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *_newVolumeWarningView;
- (void)_endBlinkingWarningView;
- (void)_blinkWarningView;
- (void)_beginBlinkingWarningView;
- (void)_routeNameLabelAnimationDidEnd;
- (void)_layoutVolumeWarningView;
- (void)_layoutForAvailableRoutes;
- (void)_layoutMaskForThumb;
- (void)_resetThumbImageForState:(unsigned long long)arg1;
- (id)_maxTrackImageForStyle:(long long)arg1;
- (id)_minTrackImageForStyle:(long long)arg1;
- (id)_thumbImageForStyle:(long long)arg1;
- (void)_commitVolumeChange;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
@property(nonatomic, setter=_setIsOffScreen:) _Bool _isOffScreen;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
@property(copy, nonatomic) NSString *volumeAudioCategory;
@property(retain, nonatomic) MPAVController *player;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_endTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (float)minimumValue;
- (float)maximumValue;
- (id)createThumbView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
