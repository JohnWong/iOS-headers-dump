//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MPDetailSliderDelegate.h"
#import "MPVideoOverlay.h"

@class MPAVController, MPAVItem, MPDetailSlider, NSMutableDictionary, NSString, UINavigationBar;

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate>
{
    id <MPVideoControllerProtocol> _videoViewController;
    id <MPVideoOverlayDelegate> _delegate;
    MPAVItem *_item;
    MPAVController *_player;
    MPDetailSlider *_scrubControl;
    long long _interfaceOrientation;
    _Bool _controlsAutohideDisabled;
    _Bool _wantsTick;
    unsigned long long _desiredParts;
    unsigned long long _visibleParts;
    unsigned long long _disabledParts;
    NSMutableDictionary *_tickTimeEvents;
    double _lastTickTime;
}

@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController; // @synthesize videoViewController=_videoViewController;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(nonatomic) __weak id <MPVideoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_playableDuration;
- (double)_duration;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (_Bool)updateTimeBasedValues;
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)stopTicking;
- (void)startTicking;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
@property(nonatomic) _Bool navigationBarHidden;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
@property(nonatomic) _Bool allowsWirelessPlayback;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_endSliderTracking;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

