//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject
{
    AVWeakReference *_weakReferenceToListener;
    CDUnknownFunctionPointerType _callback;
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) id listener;
- (void)dealloc;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (id)init;

@end

