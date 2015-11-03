//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIControl<MPDetailedScrubbing>;

@interface MPDetailScrubController : NSObject
{
    _Bool _didBeginTracking;
    _Bool _needsCommit;
    float _accumulatedDelta;
    struct CGPoint _previousLocationInView;
    struct CGPoint _beginLocationInView;
    struct CGPoint _lastCommittedLocationInView;
    float _currentValue;
    _Bool _detailedScrubbingEnabled;
    _Bool _isTracking;
    UIControl<MPDetailedScrubbing> *_scrubbingControl;
    id <MPDetailScrubControllerDelegate> _delegate;
    double _duration;
    double _scrubbingVerticalRange;
    long long _currentScrubSpeed;
}

@property(readonly, nonatomic) long long currentScrubSpeed; // @synthesize currentScrubSpeed=_currentScrubSpeed;
@property(readonly, nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(nonatomic) _Bool detailedScrubbingEnabled; // @synthesize detailedScrubbingEnabled=_detailedScrubbingEnabled;
@property(nonatomic) double scrubbingVerticalRange; // @synthesize scrubbingVerticalRange=_scrubbingVerticalRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <MPDetailScrubControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIControl<MPDetailedScrubbing> *scrubbingControl; // @synthesize scrubbingControl=_scrubbingControl;
- (void).cxx_destruct;
- (void)_commitValue:(float)arg1;
- (void)_endScrubbing;
- (void)_beginScrubbing;
- (float)_scaleForIdealValueForVerticalPosition:(double)arg1;
- (float)_minimumScale;
- (float)scaleForVerticalPosition:(double)arg1;
@property(readonly, nonatomic) _Bool durationAllowsForDetailedScrubbing;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithScrubbingControl:(id)arg1;

@end

