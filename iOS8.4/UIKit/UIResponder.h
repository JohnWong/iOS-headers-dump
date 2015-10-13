//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextInputAdditions.h"
#import "UITextInput_Internal.h"
#import "_UIStateRestorationContinuation.h"

@class NSArray, NSString, NSUndoManager, NSUserActivity, UIInputViewController, UIResponder<UITextInput>, UITextInputMode, UIView, UIView<UITextInputPrivate>;

@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions, _UIStateRestorationContinuation>
{
}

+ (void)clearTextInputContextIdentifier:(id)arg1;
+ (void)_finishStateRestoration;
+ (void)_cleanupAllStateRestorationTables;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;
+ (void)_updateStateRestorationIdentifierMap;
+ (void)_stopDeferredTrackingObjectsWithIdentifiers;
+ (void)_startDeferredTrackingObjectsWithIdentifiers;
+ (id)objectWithRestorationIdentifierPath:(id)arg1;
- (void)_tagAsRestorableResponder;
- (void)_clearRestorableResponderStatus;
- (id)_nextResponderOverride;
- (void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1;
- (void)_overrideInputViewNextResponderWithResponder:(id)arg1;
- (void)_clearOverrideNextResponder;
@property(readonly, nonatomic) NSUndoManager *undoManager;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)_targetForAction:(SEL)arg1 withSender:(id)arg2 canPerformActionBlock:(CDUnknownBlockType)arg3;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_clearBecomeFirstResponderWhenCapable;
- (id)firstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_finishResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)_containsResponder:(id)arg1;
- (_Bool)_containedInAbsoluteResponderChain;
@property(readonly, nonatomic) UIResponder *_responderForEditing;
@property(readonly, nonatomic) UIResponder *_editingDelegate;
- (_Bool)_isRootForKeyResponderCycle;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (id)nextResponder;
- (void)gestureChanged:(struct __GSEvent *)arg1;
- (void)gestureEnded:(struct __GSEvent *)arg1;
- (void)gestureStarted:(struct __GSEvent *)arg1;
- (void)scrollWheel:(struct __GSEvent *)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)reloadInputViewsWithoutReset;
- (void)reloadInputViews;
@property(readonly, retain, nonatomic) NSString *textInputContextIdentifier;
@property(readonly, retain, nonatomic) UITextInputMode *textInputMode;
@property(readonly, retain, nonatomic) UIInputViewController *inputAccessoryViewController;
@property(readonly, retain, nonatomic) UIInputViewController *inputViewController;
@property(readonly, retain, nonatomic) UIView *inputAccessoryView;
@property(readonly, retain, nonatomic) UIView *inputView;
@property(readonly, nonatomic) NSArray *keyCommands;
- (void)_didChangeToFirstResponder:(id)arg1;
- (_Bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (id)_responderSelectionImage;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (id)_primaryContentResponder;
- (id)_deepestUnambiguousResponder;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_moveWithEvent:(id)arg1;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (_Bool)_canShowTextServices;
- (id)_nextViewControllerInResponderChain;
- (_Bool)_isViewController;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4;
- (_Bool)_isTransitioningFromView:(id)arg1;
- (void)_windowResignedKey;
- (void)_windowBecameKey;
- (id)nextFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (_Bool)_isPinningInputViews;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (void)_becomeFirstResponderAndMakeVisible;
- (_Bool)_canBecomeFirstResponder;
- (void)_resignFirstResponder;
- (void)_becomeFirstResponder;
- (_Bool)_resignIfContainsFirstResponder;
- (id)_responderWindow;
- (id)_keyboardResponder;
- (_Bool)_requiresKeyboardResetOnReload;
- (_Bool)_requiresKeyboardWindowWhenFirstResponder;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (_Bool)_disableAutomaticKeyboardUI;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (id)_keyCommandForEvent:(id)arg1;
- (id)_keyCommands;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (id)_window;
- (_Bool)_supportsBecomeFirstResponderWhenPossible;
- (_Bool)_canBecomeFirstResponderWhenPossible;
- (_Bool)_becomeFirstResponderWhenPossible;
- (id)_responderForBecomeFirstResponder;
- (id)_firstResponder;
- (void)_setFirstResponder:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
@property(retain, nonatomic) NSUserActivity *userActivity;
- (id)_userActivity;
- (id)_selectableText;
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (long long)selectionAffinity;
- (_Bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(_Bool)arg3;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_newPhraseBoundaryGestureRecognizer;
- (void)_unmarkText;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (_Bool)_hasMarkedText;
- (_Bool)_usesAsynchronousProtocol;
- (void)_setGestureRecognizers;
- (long long)_selectionAffinity;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_setHistory:(id)arg1 withExtending:(_Bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(_Bool)arg4;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;
- (id)_fontForCaretSelection;
- (id)_textColorForCaretSelection;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fullRange;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_deleteForwardAndNotify:(_Bool)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (void)_setCaretSelectionAtEndOfSelection;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_moveCurrentSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (_Bool)_hasMarkedTextOrRangedSelection;
- (_Bool)_isEmptySelection;
- (struct CGRect)_selectionClipRect;
- (_Bool)_selectionAtDocumentEnd;
- (_Bool)_selectionAtDocumentStart;
- (_Bool)_selectionAtWordStart;
- (id)_fullText;
- (id)_wordContainingCaretSelection;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterAfterCaretSelection;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (int)_indexForTextPosition:(id)arg1;
- (void)_selectAll;
- (struct _NSRange)_selectedNSRange;
- (id)_keyInput;
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
- (void)endSelectionChange;
- (void)beginSelectionChange;
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
- (id)_asTextSelection;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
- (id)interactionAssistant;
- (id)textInputView;
- (_Bool)_usesDeemphasizedTextAppearance;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_restorationIdentifierPath;
@property(copy, nonatomic) NSString *restorationIdentifier;
- (void)_rebuildStateRestorationIdentifierPath;

@end
