//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UILabel
{
    unsigned long long _mapType;
    _Bool _useDarkText;
}

@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void)drawRect:(struct CGRect)arg1;
- (void)_prepareLabel;
- (id)_attributesWithStroke:(_Bool)arg1;
- (id)init;

@end

