//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSObject<CAStateControllerDelegate>;

@interface CAStateController : NSObject
{
    struct _CAStateControllerData *_data;
}

- (void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4;
- (void)_removeTransition:(id)arg1 layer:(id)arg2;
- (void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4;
- (void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4;
- (void)_nextStateTimer:(id)arg1;
- (void)cancelTimers;
- (void)restoreStateChanges:(id)arg1;
- (id)removeAllStateChanges;
- (void)setInitialStatesOfLayer:(id)arg1;
- (void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2;
- (void)setState:(id)arg1 ofLayer:(id)arg2;
- (void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3;
- (id)stateOfLayer:(id)arg1;
@property NSObject<CAStateControllerDelegate> *delegate;
@property(readonly) CALayer *layer;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end

