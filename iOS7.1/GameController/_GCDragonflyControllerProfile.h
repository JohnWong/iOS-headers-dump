//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/_GCGamepad.h>

#import "_GCACHomeButtonDelegate.h"

@class NSObject<OS_dispatch_source>, _GCACHomeButton, _GCUserHIDDevice;

__attribute__((visibility("hidden")))
@interface _GCDragonflyControllerProfile : _GCGamepad <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
    NSObject<OS_dispatch_source> *_inputSource;
    _GCUserHIDDevice *_emulatedHIDDevice;
}

- (void).cxx_destruct;
- (void)toggleSuspendResume;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (id)name;
- (id)initWithController:(id)arg1;

@end

