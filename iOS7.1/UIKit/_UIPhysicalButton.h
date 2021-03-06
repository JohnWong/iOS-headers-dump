//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIResponderForwardable.h"

@class NSArray, NSMutableArray, UIResponder, UIWindow;

@interface _UIPhysicalButton : NSObject <_UIResponderForwardable>
{
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    _Bool _abandonForwardingRecord;
    double _timestamp;
    long long _phase;
    long long _type;
    UIWindow *_window;
    UIResponder *_responder;
}

@property(retain, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
@property(retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (id)_forwardingRecord;
- (void)_abandonForwardingRecord;
- (_Bool)_isAbandoningForwardingRecord;
- (id)_mutableForwardingRecord;
- (_Bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (void)_removeGestureRecognizer:(id)arg1;
@property(copy, nonatomic) NSArray *gestureRecognizers;
- (void)dealloc;

@end

