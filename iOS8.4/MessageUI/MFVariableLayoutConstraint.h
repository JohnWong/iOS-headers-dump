//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFVariableLayoutConstraint : NSObject
{
    _Bool _cachedInterpolatedValueIsValid;
    double _cachedInterpolatedValue;
    double _medianValue;
    CDUnknownBlockType _interpolationFormula;
}

+ (long long)_medianContentSizeIndex;
+ (id)medianContentSizeCategory;
@property(nonatomic) CDUnknownBlockType interpolationFormula; // @synthesize interpolationFormula=_interpolationFormula;
@property(nonatomic) double medianValue; // @synthesize medianValue=_medianValue;
- (void)_didReceiveContentSizeCategoryNameDidChageNotification:(id)arg1;
- (double)interpolatedValue;
- (id)initWithMedianConstraintValue:(double)arg1 interpolationFormula:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

