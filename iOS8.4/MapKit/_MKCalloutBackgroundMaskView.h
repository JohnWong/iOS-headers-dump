//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface _MKCalloutBackgroundMaskView : UIView
{
    UIView *_baseView;
    UIImageView *_topArrow;
    UIImageView *_bottomArrow;
    UIImageView *_leftArrow;
    UIImageView *_rightArrow;
    UIView *_currentArrowContainer;
}

@property(readonly, nonatomic) UIView *currentArrowContainer; // @synthesize currentArrowContainer=_currentArrowContainer;
@property(readonly, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(readonly, nonatomic) UIImageView *leftArrow; // @synthesize leftArrow=_leftArrow;
@property(readonly, nonatomic) UIImageView *bottomArrow; // @synthesize bottomArrow=_bottomArrow;
@property(readonly, nonatomic) UIImageView *topArrow; // @synthesize topArrow=_topArrow;
@property(readonly, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)_removeArrows;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupViews;

@end

