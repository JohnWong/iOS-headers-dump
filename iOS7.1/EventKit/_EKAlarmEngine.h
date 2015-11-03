//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSDate, NSDateFormatter, NSObject<OS_dispatch_queue>, NSTimer, PCPersistentTimer;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate>
{
    int _lastDBSequence;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    double _lastCheckpoint;
    PCPersistentTimer *_timer;
    _Bool _populating;
    double _populateStart;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    _Bool _shouldUpdateWithForceForAlarmTable;
    _Bool _shouldUpdateWithForceForFences;
    _Bool _abortedLastAttemptToAdjustFences;
    NSDateFormatter *_dateFormatter;
    CLLocationManager *_locationManager;
    double _defaultRadius;
    NSDate *_tomorrow;
}

+ (double)defaultRadius;
+ (id)sharedInstance;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)_proximityAlertTriggered:(id)arg1 entered:(_Bool)arg2;
- (void)_adjustFences:(id)arg1;
- (_Bool)_shouldAdjustFencesWithStatus:(int)arg1;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (void)_removeAllFences;
- (void)_locationDaemonDidLaunch;
- (void)_calendarNotificationSettingChanged;
- (void)_timeDidChangeSignificantly;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_killSyncTimer;
- (void)_resetSyncTimer;
- (void)_timerFired:(id)arg1;
- (void)_notifyAlarmsFired:(id)arg1;
- (void)_rescheduleTimer;
- (id)_dateFormatter;
- (void)_killTimer;
- (void)_populateFinished;
- (_Bool)_populateAlarmTable:(id)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(double)arg2 eventStore:(id)arg3;
- (void)_timeZoneChanged:(id)arg1;
- (_Bool)_haveAlarmsChanged:(id)arg1;
- (void)_databaseChanged;
- (void)_updateWithForce:(_Bool)arg1;
- (void)_updateWithForceForAlarmTable:(_Bool)arg1 forFences:(_Bool)arg2;
- (_Bool)_isDataProtected;
- (void)_protectedDataDidBecomeAvailable;
- (void)_protectedDataWillBecomeUnavailable;
- (void)reschedule;
- (void)stop;
- (void)start;
- (void)dealloc;

@end

