//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface PKPassColorProfile : NSObject
{
    double _backgroundLightness;
    double _foregroundLightness;
    double _labelLightness;
    PKPassColorProfile *_stripProfile;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_labelColor;
    UIColor *_highlightColor;
    double _overlayDarkeningAlpha;
    double _regularDarkeningAlpha;
    double _overlayLighteningAlpha;
    double _regularLighteningAlpha;
}

+ (id)profileForDisplayProfile:(id)arg1;
@property(readonly, nonatomic) double regularLighteningAlpha; // @synthesize regularLighteningAlpha=_regularLighteningAlpha;
@property(readonly, nonatomic) double overlayLighteningAlpha; // @synthesize overlayLighteningAlpha=_overlayLighteningAlpha;
@property(readonly, nonatomic) double regularDarkeningAlpha; // @synthesize regularDarkeningAlpha=_regularDarkeningAlpha;
@property(readonly, nonatomic) double overlayDarkeningAlpha; // @synthesize overlayDarkeningAlpha=_overlayDarkeningAlpha;
@property(readonly, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(readonly, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)_imageForGlyph:(id)arg1 color:(id)arg2;
- (long long)_sizeForGlyph:(id)arg1;
- (long long)_sizeForFont:(id)arg1;
- (void)dealloc;
- (id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)foregroundImageForGlyph:(id)arg1;
- (id)labelImageForGlyph:(id)arg1;
- (id)foregroundAttributesForFont:(id)arg1;
- (id)labelAttributesForFont:(id)arg1;
- (id)foregroundColorOverStrip:(_Bool)arg1;
- (id)labelColorOverStrip:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isLight;

@end

