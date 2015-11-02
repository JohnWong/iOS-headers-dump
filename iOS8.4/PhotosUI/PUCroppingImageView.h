//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView;

@interface PUCroppingImageView : UIView
{
    UIImageView *_imageView;
    UIImage *_image;
    unsigned long long _imageFillMode;
    UIView *_accessoryView;
    struct UIEdgeInsets _accessoryViewInsets;
}

@property(nonatomic) struct UIEdgeInsets accessoryViewInsets; // @synthesize accessoryViewInsets=_accessoryViewInsets;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) unsigned long long imageFillMode; // @synthesize imageFillMode=_imageFillMode;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateLayout;
@property(nonatomic) _Bool antialiasEdges;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_configure;

@end

