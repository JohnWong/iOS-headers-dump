//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSNumber, UIColor;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying>
{
    long long _style;
    _Bool _legacy;
    long long _legibilityStyle;
    UIColor *_foregroundColor;
    NSNumber *_overrideHeight;
}

@property(readonly, retain, nonatomic) NSNumber *overrideHeight; // @synthesize overrideHeight=_overrideHeight;
@property(readonly, retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(readonly, nonatomic, getter=isLegacy) _Bool legacy; // @synthesize legacy=_legacy;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (_Bool)isTranslucent;
- (_Bool)isDoubleHeight;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 overrideHeight:(id)arg5;

@end

