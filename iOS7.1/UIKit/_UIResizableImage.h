//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImage.h>

__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage
{
    _Bool _alwaysStretches;
    _Bool _isSubimage;
    struct UIEdgeInsets _subimageInsets;
    struct UIEdgeInsets _capInsets;
}

+ (_Bool)supportsSecureCoding;
- (id)_resizableImageWithCapMask:(int)arg1;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (void)_setAlwaysStretches:(_Bool)arg1;
- (_Bool)_isResizable;
- (_Bool)_isSubimage;
- (struct CGRect)_contentRectInPixels;
- (struct CGRect)_contentStretchInPixels;
- (struct CGRect)_contentInsetsInPixels:(struct UIEdgeInsets)arg1 emptySizeFallback:(CDUnknownBlockType)arg2;
- (long long)resizingMode;
- (void)_setSubimageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)capInsets;
- (void)_setCapInsets:(struct UIEdgeInsets)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets)arg2;
- (id)_initWithOtherImage:(id)arg1;
- (void)_configureFromImage:(id)arg1;
- (_Bool)_suppressesAccessibilityHairlineThickening;

@end
