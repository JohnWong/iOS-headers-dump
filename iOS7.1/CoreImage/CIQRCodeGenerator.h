//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CICodeGenerator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CIQRCodeGenerator : CICodeGenerator
{
    NSString *inputCorrectionLevel;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSString *inputCorrectionLevel; // @synthesize inputCorrectionLevel;
- (struct CGImage *)outputCGImage;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setDefaults;

@end

