//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABMultiCellContentView.h>

#import "UITextFieldDelegate.h"

@class ABHighlightingTextField, NSString;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate>
{
    ABHighlightingTextField *_textField;
    NSString *_previousValue;
}

+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6;
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)isValidValue:(id)arg1;
- (_Bool)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (void)setAbCellStyle:(int)arg1;
- (id)viewForFirstResponder;
- (_Bool)tabToNextResponder:(_Bool)arg1 fromView:(id)arg2;
- (_Bool)wantsLabelDivider;
- (void)updateSubviewsForNewStateAnimated:(_Bool)arg1;
- (void)reloadFromModel;
- (void)reload;
- (id)pickerView;
@property(readonly, nonatomic) NSString *text;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (_Bool)canHandleProperty:(int)arg1;
- (void)dealloc;

@end

