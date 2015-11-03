//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface RTFNSColor : NSObject
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCalibratedWhite:(double)arg1 alpha:(double)arg2;
@property double alpha; // @synthesize alpha=_alpha;
@property double blue; // @synthesize blue=_blue;
@property double green; // @synthesize green=_green;
@property double red; // @synthesize red=_red;
- (id)description;
- (id)colorUsingColorSpaceName:(id)arg1;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCalibratedWhite:(double)arg1 alpha:(double)arg2;
- (id)init;

@end

