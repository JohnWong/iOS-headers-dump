//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSetHostView : UIView
{
}

+ (_Bool)_notifyOnExplicitLayout;
+ (_Bool)_shouldHitTestInputViewFirst;
+ (_Bool)_retroactivelyRequiresConstraintBasedLayout;
- (void)layoutIfNeeded;
- (int)_clipCornersOfView:(id)arg1;
- (void)_resizeForKeyplaneSize:(struct CGSize)arg1 splitWidthsChanged:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

