//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class CLHeading, CLLocation, MKUserLocationInternal, NSString;

@interface MKUserLocation : NSObject <MKAnnotation>
{
    MKUserLocationInternal *_internal;
    double _expectedCoordinateUpdateInterval;
    double _expectedHeadingUpdateInterval;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)_setAnnotationClass:(Class)arg1;
+ (id)title;
@property(nonatomic) double expectedHeadingUpdateInterval; // @synthesize expectedHeadingUpdateInterval=_expectedHeadingUpdateInterval;
@property(nonatomic) double expectedCoordinateUpdateInterval; // @synthesize expectedCoordinateUpdateInterval=_expectedCoordinateUpdateInterval;
- (void).cxx_destruct;
- (void)reset;
@property(readonly, nonatomic) NSString *shortDescription;
- (void)_updateCoordinate;
- (id)annotation;
@property(readonly, nonatomic) double headingDegrees;
@property(nonatomic) CDStruct_c3b9c2ee coordinate;
- (_Bool)isEqualToLocation:(id)arg1;
@property(readonly, nonatomic) double accuracy;
@property(retain, nonatomic) CLLocation *location;
@property(copy, nonatomic) NSString *subtitle;
- (void)setCourse:(double)arg1;
- (double)course;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) double timestamp;
@property(nonatomic) int source;
@property(retain, nonatomic) CLHeading *heading;
@property(retain, nonatomic) CLLocation *predictedLocation;
@property(retain, nonatomic) CLLocation *fixedLocation;
@property(nonatomic, getter=isUpdating) _Bool updating;
- (void)dealloc;
- (id)init;

@end

