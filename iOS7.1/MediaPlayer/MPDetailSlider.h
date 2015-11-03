//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "MPDetailScrubControllerDelegate.h"
#import "MPDetailedScrubbing.h"

@class MPDetailScrubController, NSString, NSTimer, UIImageView, UILabel, UIView;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>
{
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    MPDetailScrubController *_scrubController;
    _Bool _allowsScrubbing;
    _Bool _autoscrubActive;
    NSTimer *_autoscrubTimer;
    double _availableDuration;
    _Bool _canCommit;
    double _currentTime;
    id _delegate;
    UIView *_downloadingTrackOverlay;
    double _duration;
    UIImageView *_glowDetailScrubImageView;
    _Bool _isTracking;
    double _minTimeLabelWidth;
    double _maxTrackWidth;
    struct CGPoint _previousLocationInView;
    long long _style;
    struct UIEdgeInsets _timeLabelInsets;
    long long _timeLabelStyle;
    UIImageView *_thumbImageView;
    double _trackInset;
    double _detailScrubbingVerticalRange;
}

+ (Class)labelClass;
+ (double)defaultHeight;
@property(nonatomic) _Bool allowsScrubbing; // @synthesize allowsScrubbing=_allowsScrubbing;
@property(nonatomic) double minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;
@property(nonatomic) long long timeLabelStyle; // @synthesize timeLabelStyle=_timeLabelStyle;
@property(nonatomic) struct UIEdgeInsets timeLabelInsets; // @synthesize timeLabelInsets=_timeLabelInsets;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double detailScrubbingVerticalRange; // @synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange;
@property(nonatomic) __weak id <MPDetailSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double availableDuration; // @synthesize availableDuration=_availableDuration;
- (void).cxx_destruct;
- (void)_updateForAvailableDuraton;
- (void)_commitValue;
- (void)_resetScrubInfo;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (id)_stringForCurrentTime:(double)arg1;
- (id)_stringForTime:(double)arg1;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(_Bool)arg2;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateTrackInset;
- (void)_setupControlsForStyle;
- (id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2;
- (id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(_Bool)arg3;
- (double)timeLabelVerticalOffsetForStyle:(long long)arg1;
- (id)timeLabelTextColorForStyle:(long long)arg1;
- (struct CGSize)timeLabelShadowOffsetForStyle:(long long)arg1;
- (id)timeLabelShadowColorForStyle:(long long)arg1;
- (double)timeLabelHorizontalOffsetForStyle:(long long)arg1;
- (id)timeLabelFontForStyle:(long long)arg1;
@property(nonatomic) _Bool allowsDetailScrubbing;
@property(readonly, nonatomic) NSString *localizedScrubSpeedText;
- (void)cancelTracking;
@property(readonly, nonatomic) _Bool detailScrubbingAvailableForCurrentDuration;
- (_Bool)isTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_autoscrubTick:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (struct CGRect)thumbViewRect;
- (struct CGRect)thumbHitRect;
- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;
- (void)setValue:(float)arg1 duration:(double)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (id)currentThumbImage;
- (id)createThumbView;
- (void)tintColorDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 maxTrackWidth:(double)arg3;

@end
