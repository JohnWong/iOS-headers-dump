//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface FigVideoLayerInternal : NSObject
{
    _Bool isPresentationLayer;
    _Bool visible;
    struct OpaqueFigSimpleMutex *serializationMutex;
    NSObject<OS_dispatch_queue> *notificationSerialQueue;
}

@end

