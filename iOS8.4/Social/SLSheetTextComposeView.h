//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface SLSheetTextComposeView : UIView
{
    UITextView *_textView;
    UILabel *_placeholderLabel;
    double _textRightInset;
}

@property(nonatomic) double textRightInset; // @synthesize textRightInset=_textRightInset;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)restoreKeyboard;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)_assembleView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

