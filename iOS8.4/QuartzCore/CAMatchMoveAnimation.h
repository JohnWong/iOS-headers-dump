//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class CALayer, NSArray, NSString;

@interface CAMatchMoveAnimation : CAAnimation
{
}

+ (id)defaultValueForKey:(id)arg1;
@property(getter=isAdditive) _Bool additive;
@property _Bool appliesRotation;
@property _Bool appliesScale;
@property _Bool appliesY;
@property _Bool appliesX;
@property _Bool targetsSuperlayer;
@property(copy) NSString *keyPath;
@property(copy) NSArray *sourcePoints;
@property __weak CALayer *sourceLayer;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;

@end

