//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardCandidateView.h>

#import "UIKeyboardCandidateViewInline.h"

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline>
{
    struct CGRect _collapsedRect;
    struct CGSize presentationSize;
}

+ (double)defaultExtendedControlHeight;
@property struct CGSize presentationSize; // @synthesize presentationSize;
- (void)candidatesDidChange;
- (id)activeCandidateList;
- (void)setCandidateViewExtended:(_Bool)arg1;
- (unsigned long long)_numberOfColumns:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

