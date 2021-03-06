//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIEvent : NSObject
{
    double _timestamp;
}

- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (id)allTouches;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
- (struct CGPoint)_digitizerLocation;
- (_Bool)_isKeyDown;
- (long long)_modifierFlags;
- (id)_unmodifiedInput;
- (id)_modifiedInput;
- (id)_triggeringPhysicalButton;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_physicalButtonsForWindow:(id)arg1;
- (id)_allPhysicalButtons;
- (unsigned long long)_focusHeading;
- (long long)_moveDirection;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (struct __IOHIDEvent *)_hidEvent;
- (struct __GSEvent *)_gsEvent;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (double)_wheelVelocity;
- (_Bool)isKeyDown;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (id)_screen;
- (void)_setTimestamp:(double)arg1;
- (id)_init;

@end

