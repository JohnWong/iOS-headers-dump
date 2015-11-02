//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HKQuantity;

@interface _HKHeartRateReading : NSObject <NSSecureCoding>
{
    HKQuantity *_heartRate;
    long long _confidence;
}

+ (_Bool)supportsSecureCoding;
+ (id)readingWithHeartRate:(id)arg1 confidence:(long long)arg2;
@property(nonatomic) long long confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) HKQuantity *heartRate; // @synthesize heartRate=_heartRate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

