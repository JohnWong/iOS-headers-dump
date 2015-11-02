//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface OneShotDisplayLinkHandler : NSObject
{
    struct RemoteLayerTreeDrawingAreaProxy *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)schedule;
- (void)invalidate;
- (void)displayLinkFired:(id)arg1;
- (void)dealloc;
- (id)initWithDrawingAreaProxy:(struct RemoteLayerTreeDrawingAreaProxy *)arg1;

@end

