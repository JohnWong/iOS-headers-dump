//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "NSCopying.h"

@class CLLocation, NSString;

@interface EKStructuredLocation : EKObject <NSCopying>
{
}

+ (id)locationWithTitle:(id)arg1;
- (id)_asCalLocation;
- (void)updatePersistentObject;
@property(retain, nonatomic) NSString *routing;
- (id)description;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *addressBookEntityID;
@property(nonatomic) double radius;
@property(retain, nonatomic) CLLocation *geoLocation;
- (id)cacheKey;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool isStructured;
- (id)_persistentLocation;
- (id)init;

@end

