//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSSceneTransitionContext.h"

@class NSDictionary;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext
{
}

- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(nonatomic, getter=_lifecycleActionType, setter=_setLifecycleActionType:) unsigned long long lifecycleActionType;
@property(nonatomic) double execTime;
@property(nonatomic) double userLaunchEventTime;
@property(nonatomic) _Bool safeMode;
@property(nonatomic) _Bool forTesting;
@property(retain, nonatomic) NSDictionary *payload;

@end

