//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOStep, MKPolyline, MKRouteStepPolyline, NSString;

@interface MKRouteStep : NSObject
{
    GEOStep *_geoStep;
    NSString *_instructions;
    unsigned long long _transportType;
    MKRouteStepPolyline *_polyline;
}

@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) MKPolyline *polyline; // @synthesize polyline=_polyline;
- (void).cxx_destruct;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSString *notice;
- (id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4;

@end

