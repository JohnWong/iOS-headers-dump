//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebFormDelegate.h"

@class NSString, UIWebBrowserView, _UIWebFormDelegateEditedFormsMap;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate>
{
    UIWebBrowserView *_webBrowserView;
    _UIWebFormDelegateEditedFormsMap *_editedForms;
}

- (void)acceptedAutoFillWord:(id)arg1;
- (_Bool)hasCurrentSuggestions;
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (_Bool)formWasEdited;
- (void)dataSourceHasChangedForFrame:(id)arg1;
- (id)initWithWebBrowserView:(id)arg1;
- (void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
- (_Bool)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
- (void)dealloc;
- (void)_clearEditedFormsInFrame:(id)arg1;
- (_Bool)_shouldIgnoreFormTextChangesInFrame:(id)arg1;
- (void)_didEditFormElement:(id)arg1 inFrame:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

