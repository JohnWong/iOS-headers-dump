//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface CAWindowServerDisplay : NSObject
{
    void *_impl;
}

- (id)description;
@property(copy) NSString *TVSignalType;
@property(copy) NSString *TVMode;
@property long long tag;
@property(getter=isMirroringEnabled) _Bool mirroringEnabled;
@property _Bool allowsVirtualModes;
@property(copy, nonatomic) NSString *colorMode;
@property _Bool usesPreferredModeRefreshRate;
@property float idealRefreshRate;
@property float maximumRefreshRate;
@property float minimumRefreshRate;
@property float maximumBrightness;
@property float contrast;
@property _Bool invertsColors;
@property double overscanAmount;
@property(copy) NSString *orientation;
- (void)willUnblank;
@property(getter=isBlanked) _Bool blanked;
@property(readonly) CAWindowServerDisplay *cloneMaster;
- (void)removeAllClones;
- (void)removeClone:(id)arg1;
- (void)addClone:(id)arg1;
- (void)addClone:(id)arg1 options:(id)arg2;
@property(readonly) NSSet *clones;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortAtPosition:(struct CGPoint)arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint)arg1;
@property(readonly) unsigned int rendererFlags;
@property(readonly) NSString *uniqueId;
@property(readonly) unsigned int displayId;
@property(readonly) NSString *deviceName;
@property(readonly) NSString *name;
@property double scale;
@property(readonly) struct CGRect bounds;
- (void)dealloc;
- (void)update;
- (void)invalidate;
- (id)_initWithCADisplayServer:(struct Server *)arg1;

@end

