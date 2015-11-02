//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CMSedentaryTimer_Internal : NSObject
{
    NSObject<OS_dispatch_queue> *fClientQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    NSObject<OS_dispatch_queue> *fDaemonQueue;
    struct CLConnectionClient *fLocationdConnection;
    _Bool _timerArmed;
}

@property(nonatomic, getter=isTimerArmed) _Bool timerArmed; // @synthesize timerArmed=_timerArmed;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_registerForAlarmsWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleAlarmDataResponse:(struct CLConnectionMessage *)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_handleStartStopTimerResponse:(struct CLConnectionMessage *)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isActive;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
