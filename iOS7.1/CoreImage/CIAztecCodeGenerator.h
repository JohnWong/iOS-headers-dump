//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CICodeGenerator.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CIAztecCodeGenerator : CICodeGenerator
{
    NSDictionary *inputOptions;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSDictionary *inputOptions; // @synthesize inputOptions;
- (struct CGImage *)outputCGImage;
- (void)setDefaults;

@end

