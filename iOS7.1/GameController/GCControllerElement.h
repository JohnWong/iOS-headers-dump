//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GCControllerElement : NSObject
{
}

- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
- (_Bool)_setValue:(float)arg1;
@property(readonly, getter=isAnalog) _Bool analog;
@property(readonly) GCControllerElement *collection;
- (float)value;

@end

