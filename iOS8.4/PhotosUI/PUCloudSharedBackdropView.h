//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PUCloudSharedBackdropView : UIView
{
    UIView *_backdropView;
    _Bool _isMask;
    _Bool _hasRoundedCorners;
}

@property(nonatomic) _Bool hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 asMask:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

