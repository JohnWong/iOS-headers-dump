//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIScreen;

@interface UIKBScreenTraits : NSObject
{
    _Bool _knobInput;
    UIScreen *_screen;
    long long _orientation;
    NSString *_orientationKey;
}

+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;
@property(readonly, nonatomic) _Bool knobInput; // @synthesize knobInput=_knobInput;
@property(retain, nonatomic) NSString *orientationKey; // @synthesize orientationKey=_orientationKey;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) long long idiom;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2;

@end

