//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIColor;

@interface _MPGlowLabel : UILabel
{
    UIColor *_glowColor;
    double _glowRadius;
}

@property(nonatomic) double glowRadius; // @synthesize glowRadius=_glowRadius;
@property(retain, nonatomic) UIColor *glowColor; // @synthesize glowColor=_glowColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

