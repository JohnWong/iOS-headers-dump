//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _HKAnchoredObjectQueryServerDataObject : _HKQueryServerDataObject
{
    NSNumber *_anchor;
    unsigned long long _limit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

