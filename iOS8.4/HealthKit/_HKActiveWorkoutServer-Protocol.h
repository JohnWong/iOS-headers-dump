//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol _HKActiveWorkoutServer <NSObject>
- (void)deactivateServer;
- (void)endWorkoutWithEndDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)resumeWorkoutWithDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)pauseWorkoutWithDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)activateWorkoutWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

