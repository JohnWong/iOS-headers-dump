//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface ADRemoteView : UIView
{
    struct CGAffineTransform _userTransform;
}

+ (Class)layerClass;
@property(nonatomic) struct CGAffineTransform userTransform; // @synthesize userTransform=_userTransform;
@property(nonatomic) unsigned int remoteWindowContextId;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transform;
- (void)didMoveToWindow;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

