//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKWelcomeView.h>

@class UIButton;

@interface PKPassWelcomeView : PKWelcomeView
{
    UIButton *_appStoreButton;
}

+ (id)messageAttributedString:(_Bool)arg1;
+ (struct UIEdgeInsets)textInsets;
+ (double)headerImageRegionHeight;
+ (struct UIEdgeInsets)margins;
- (void)_appStorePressed;
- (void)_scanCodePressed;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

