//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIModalItemBackgroundView.h>

@class UIImageView, _UIBackdropView;

@interface _UIModalItemAlertBackgroundView : _UIModalItemBackgroundView
{
    _UIBackdropView *_effectView;
    UIImageView *_fillingView;
}

- (id)_gradientImageForBoundsSize:(struct CGSize)arg1 withInnerColor:(id)arg2 outerColor:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

