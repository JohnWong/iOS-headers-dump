//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLHeading.h"

@class NSString;

@interface CLHeading (MapKitAdditions)
@property(readonly, nonatomic) NSString *compactDescription;
@property(readonly, nonatomic) _Bool hasGeomagneticVector;
@property(readonly, nonatomic) double heading;
- (id)initWithHeading:(double)arg1 accuracy:(double)arg2;
@end

