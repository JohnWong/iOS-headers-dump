//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarStyleRequest.h>

@class NSNumber, UIColor;

__attribute__((visibility("hidden")))
@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) UIColor *foregroundColor;
@property(nonatomic, getter=isLegacy) _Bool legacy;
@property(nonatomic) long long legibilityStyle;
@property(retain, nonatomic) NSNumber *overrideHeight;
@property(nonatomic) long long style;

@end

