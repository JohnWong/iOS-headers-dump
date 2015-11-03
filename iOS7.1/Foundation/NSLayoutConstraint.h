//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSISConstraint.h"

@class NSString;

@interface NSLayoutConstraint : NSObject <NSISConstraint>
{
    id _container;
    id _firstItem;
    id _secondItem;
    double _constant;
    double _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    unsigned long long _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
- (void)_setSecondItem:(id)arg1;
@property id secondItem; // @synthesize secondItem=_secondItem;
- (void)_setFirstItem:(id)arg1;
@property id firstItem; // @synthesize firstItem=_firstItem;
- (_Bool)_nsib_isRedundant;
- (_Bool)_nsib_isRedundantInEngine:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (id)_loweredExpression;
- (_Bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(_Bool *)arg2;
- (struct CGSize)_engineToContainerScalingCoefficients;
- (void)_makeExtraVars;
- (void)_removeFromEngine:(id)arg1;
- (void)_addToEngine:(id)arg1;
- (_Bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id *)arg3;
- (_Bool)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(_Bool)arg4 mutuallyExclusiveConstraints:(id *)arg5;
- (double)priorityForVariable:(id)arg1;
- (_Bool)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)equationDescription;
- (id)descriptionAccessory;
- (id)_priorityDescription;
- (id)asciiArtDescription;
- (int)_constraintType;
- (void)dealloc;
- (id)init;
@property(copy) NSString *symbolicConstant;
- (void)_setSymbolicConstant:(id)arg1;
- (id)_symbolicConstant;
@property double constant;
- (id)_constantDescriptionForDTrace;
- (id)_descriptionforSymbolicConstant;
- (void)_setSymbolicConstant:(id)arg1 constant:(double)arg2;
- (_Bool)_effectiveConstant:(double *)arg1 error:(id *)arg2;
- (void)_containerGeometryDidChange;
- (_Bool)_tryToChangeContainerGeometryWithUndoHandler:(CDUnknownBlockType)arg1;
- (void)_clearWeakContainerReference;
@property id container;
- (_Bool)_loweredConstantIsRounded;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (int)_primitiveConstraintType;
- (void)_setDeferDTraceLogging:(_Bool)arg1;
- (_Bool)_deferDTraceLogging;
- (void)_setNegativeExtraVar:(id)arg1;
- (id)_negativeExtraVar;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (id)_markerAndPositiveExtraVar;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (_Bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double *)arg1;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (double)_fudgeIncrement;
- (_Bool)_isFudgeable;
- (void)setAnimations:(id)arg1;
- (id)animations;
@property(copy) NSString *identifier;
- (void)_setIdentifier:(id)arg1;
- (id)_identifier;
- (void)setHasBeenLowered:(_Bool)arg1;
@property(readonly) _Bool hasBeenLowered;
@property float priority;
- (_Bool)_isIBPrototypingLayoutConstraint;
@property _Bool shouldBeArchived;
- (void)_setSecondAttribute:(long long)arg1;
@property long long secondAttribute;
- (void)_setMultiplier:(double)arg1;
@property double multiplier;
- (void)_setRelation:(long long)arg1;
@property long long relation;
- (void)_setFirstAttribute:(long long)arg1;
@property long long firstAttribute;

@end
