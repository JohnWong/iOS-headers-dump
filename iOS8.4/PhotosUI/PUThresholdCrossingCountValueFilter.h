//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUValueFilter.h>

@interface PUThresholdCrossingCountValueFilter : PUValueFilter
{
    long long _crossingCount;
    double _thresholdValue;
    long long _maximumCrossingCount;
}

@property(nonatomic) long long maximumCrossingCount; // @synthesize maximumCrossingCount=_maximumCrossingCount;
@property(nonatomic) double thresholdValue; // @synthesize thresholdValue=_thresholdValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end

