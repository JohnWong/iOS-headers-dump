//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMipmapBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputLevel;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputLevel; // @synthesize inputLevel;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;
- (void)setDefaults;

@end

