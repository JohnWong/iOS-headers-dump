//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSTimer.h>

__attribute__((visibility("hidden")))
@interface __NSCFTimer : NSTimer
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)init;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;
- (unsigned long long)_cfTypeID;
- (void)fire;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (id)fireDate;
- (void)invalidate;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (double)timeInterval;
- (_Bool)isValid;
- (void)finalize;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

