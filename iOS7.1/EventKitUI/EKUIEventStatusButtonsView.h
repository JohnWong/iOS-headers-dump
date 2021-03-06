//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton;

@interface EKUIEventStatusButtonsView : UIView
{
    NSArray *_buttons;
    double _cachedFittingFontSize;
    id <EKUIEventStatusButtonsViewDelegate> _delegate;
    NSArray *_buttonTitleStrings;
    long long _selectedButtonIndex;
    double _buttonsCharge;
    long long _textSizeMode;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) long long textSizeMode; // @synthesize textSizeMode=_textSizeMode;
@property(nonatomic) double buttonsCharge; // @synthesize buttonsCharge=_buttonsCharge;
@property(nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
@property(retain, nonatomic) NSArray *buttonTitleStrings; // @synthesize buttonTitleStrings=_buttonTitleStrings;
@property(nonatomic) __weak id <EKUIEventStatusButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateForMiniBarState:(_Bool)arg1;
- (void)layoutSubviews;
- (double)_minimumFontSize;
- (id)_fontForButton:(id)arg1 withSize:(double)arg2;
- (double)_defaultFontSizeForButtons;
- (void)_updateButtonFontsWithSize:(double)arg1;
@property(readonly, nonatomic) UIButton *centerButton;
- (void)_updateSelectionToButton:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)_setupButtons;
- (id)_toolbarButtonWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonTitleStrings:(id)arg2 delegate:(id)arg3;

@end

