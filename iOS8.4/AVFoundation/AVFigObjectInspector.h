//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVFigObjectInspector : NSObject
{
}

+ (void)initialize;
- (id)_dataForProperty:(struct __CFString *)arg1;
- (id)_nonNilDictionaryForProperty:(struct __CFString *)arg1;
- (id)_dictionaryForProperty:(struct __CFString *)arg1;
- (id)_nonNilArrayForProperty:(struct __CFString *)arg1;
- (id)_arrayForProperty:(struct __CFString *)arg1;
- (id)_stringForProperty:(struct __CFString *)arg1;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString *)arg1;
- (struct CGAffineTransform)_affineTransformForProperty:(struct __CFString *)arg1;
- (struct CGSize)_sizeForProperty:(struct __CFString *)arg1;
- (struct CGSize)_sizeForProperty:(struct __CFString *)arg1 defaultValue:(struct CGSize)arg2;
- (unsigned char)_booleanForProperty:(struct __CFString *)arg1;
- (long long)_longLongForProperty:(struct __CFString *)arg1;
- (int)_SInt32ForProperty:(struct __CFString *)arg1;
- (short)_SInt16ForProperty:(struct __CFString *)arg1;
- (float)_floatForProperty:(struct __CFString *)arg1;
- (float)_floatForProperty:(struct __CFString *)arg1 defaultValue:(float)arg2;
- (CDStruct_e83c9415)_timeRangeForProperty:(struct __CFString *)arg1;
- (CDStruct_1b6d18a9)_timeForProperty:(struct __CFString *)arg1;
- (CDStruct_1b6d18a9)_timeForProperty:(struct __CFString *)arg1 defaultValue:(CDStruct_1b6d18a9)arg2;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;

@end

