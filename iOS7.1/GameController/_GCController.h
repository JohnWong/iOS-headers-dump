//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/GCController.h>

#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCController : GCController <NSSecureCoding>
{
    CDUnknownBlockType _controllerPausedHandler;
    NSString *_vendorName;
    long long _playerIndex;
    id <GCNamedProfile> _profile;
    struct __IOHIDDevice *_deviceRef;
    unsigned int _service;
}

+ (_Bool)supportsSecureCoding;
- (unsigned int)service;
- (struct __IOHIDDevice *)deviceRef;
- (void)setProfile:(id)arg1;
- (id)profile;
- (void)setControllerPausedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)controllerPausedHandler;
- (void).cxx_destruct;
- (id)extendedGamepad;
- (id)gamepad;
- (void)setPlayerIndex:(long long)arg1;
- (long long)playerIndex;
- (_Bool)isAttachedToDevice;
- (id)vendorName;
- (void)clearDeviceRef;
- (id)initWithDeviceRef:(struct __IOHIDDevice *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)deviceHash;

@end

