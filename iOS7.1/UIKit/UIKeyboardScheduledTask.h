//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, UIKeyboardTaskQueue, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardScheduledTask : NSObject
{
    CDUnknownBlockType _task;
    UIKeyboardTaskQueue *_taskQueue;
    NSTimer *_timer;
    _UIActionWhenIdle *_deferredAction;
    CDUnknownBlockType _enqueuedTask;
}

@property(copy, nonatomic) CDUnknownBlockType enqueuedTask; // @synthesize enqueuedTask=_enqueuedTask;
@property(retain, nonatomic) _UIActionWhenIdle *deferredAction; // @synthesize deferredAction=_deferredAction;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
- (void)invalidate;
- (_Bool)isValid;
- (void)handleDeferredTimerFiredEvent;
- (void)timerFired:(id)arg1;
@property(readonly, nonatomic) _Bool repeats;
@property(readonly, nonatomic) double timeInterval;
- (id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3 task:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end

