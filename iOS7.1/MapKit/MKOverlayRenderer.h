//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MKOverlayRenderer : NSObject
{
    id <MKOverlay> _overlay;
    CDStruct_02837cd9 _boundingMapRect;
    id _renderer;
    double _contentScaleFactor;
    double _alpha;
}

@property(readonly, nonatomic) id <MKOverlay> overlay; // @synthesize overlay=_overlay;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (void)overlay:(id)arg1 drawKey:(const CDStruct_32a7f38a *)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)overlay:(id)arg1 canDrawKey:(const CDStruct_32a7f38a *)arg2;
- (void)set_renderer:(id)arg1;
- (id)_renderer;
- (CDStruct_90e2a262)_boundingMapRect;
- (void)set_boundingMapRect:(CDStruct_90e2a262)arg1;
- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1;
- (void)setNeedsDisplay;
- (CDStruct_90e2a262)mapRectForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMapRect:(CDStruct_90e2a262)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (id)_mk_overlayLayer;
- (id)_mk_overlayView;
- (CDStruct_c3b9c2ee)_originMapPoint;
@property(readonly) double contentScaleFactor;
- (void)setContentScaleFactor:(double)arg1;
@property double alpha; // @synthesize alpha=_alpha;
- (id)initWithOverlay:(id)arg1;
- (void)dealloc;

@end

