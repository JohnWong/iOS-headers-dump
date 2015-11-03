//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CATransaction : NSObject
{
}

+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)valueForKey:(id)arg1;
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)completionBlock;
+ (void)setDisableActions:(_Bool)arg1;
+ (_Bool)disableActions;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (id)animationTimingFunction;
+ (void)setAnimationDuration:(double)arg1;
+ (double)animationDuration;
+ (void)unlock;
+ (void)lock;
+ (void)flush;
+ (void)commit;
+ (_Bool)beginWithoutBlocking;
+ (void)begin;
+ (void)setInputTime:(double)arg1;
+ (double)inputTime;
+ (void)setCommitTime:(double)arg1;
+ (double)commitTime;
+ (void)setAnimatesFromModelValues:(_Bool)arg1;
+ (_Bool)animatesFromModelValues;
+ (unsigned int)currentState;
+ (void)synchronize;
+ (void)activateBackground:(_Bool)arg1;
+ (void)activate;
+ (CDUnknownBlockType)animator;
+ (void)popAnimator;
+ (void)pushAnimator:(CDUnknownBlockType)arg1;
+ (id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2;

@end
