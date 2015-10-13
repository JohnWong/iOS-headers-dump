//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInternalEvent.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWheelEvent : UIInternalEvent
{
    long long _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    long long lastSubtype;
}

- (double)_wheelVelocity;
- (_Bool)_canHaveVelocity;
- (void)_sendEventToResponder:(id)arg1;
- (long long)subtype;
- (long long)type;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)dealloc;

@end

