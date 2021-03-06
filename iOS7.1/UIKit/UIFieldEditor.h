//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "NSLayoutManagerDelegate.h"
#import "NSUITextViewCommonMethods.h"
#import "UIAutoscrollContainer.h"
#import "UIKeyboardInput.h"
#import "UITextAutoscrolling.h"
#import "UITextInput.h"
#import "UITextInputControllerDelegate.h"

@class NSDictionary, NSTextContainer, NSTimer, UIAutoscroll, UITextField, UITextInputController, UITextPosition, UITextRange, UIView, _UICascadingTextStorage, _UIFieldEditorContentView, _UIFieldEditorLayoutManager;

@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextAutoscrolling, UIKeyboardInput>
{
    UITextInputController *_inputController;
    UITextField *_proxiedView;
    UIAutoscroll *_autoscroll;
    NSTextContainer *_textContainer;
    _UIFieldEditorLayoutManager *_layoutManager;
    _UICascadingTextStorage *_textStorage;
    struct {
        unsigned int delegateRespondsToFieldEditorDidChange:1;
        unsigned int delegateRespondsToShouldInsertText:1;
        unsigned int delegateRespondsToShouldReplaceWithText:1;
        unsigned int suppressScrollToSelection:1;
        unsigned int clearOnNextEdit:1;
    } _feFlags;
    struct UIEdgeInsets _padding;
    _UIFieldEditorContentView *_contentView;
    struct _NSRange _unobscuredSecureRange;
    NSTimer *_obscureLastCharacterTimer;
    struct CGPoint _textContainerOrigin;
    double _contentWidth;
    _UIFieldEditorContentView *_passcodeStyleCutoutView;
    struct CGPoint _autoscrollContentOffset;
}

+ (id)excludedElementsForHTML;
+ (void)releaseSharedInstance;
+ (id)sharedFieldEditor;
+ (id)activeFieldEditor;
@property(nonatomic) struct CGPoint autoscrollContentOffset; // @synthesize autoscrollContentOffset=_autoscrollContentOffset;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (_Bool)_hasDictationPlaceholder;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_textInputTraits;
- (_Bool)_shouldObscureInput;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) struct _NSRange markedRange;
- (id)linkTextAttributes;
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (_Bool)isHorizontallyResizable;
- (struct CGSize)minSize;
- (void)invalidateTextContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)textContainerInset;
- (struct CGPoint)textContainerOrigin;
- (struct CGRect)visibleRect;
@property(nonatomic) long long layoutOrientation;
@property(nonatomic) NSTextContainer *textContainer;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)_inputController;
- (id)interactionAssistant;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (_Bool)isEditing;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) UIView *textInputView;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)clearText;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (void)deleteBackward;
- (void)_obscureLastCharacter;
- (void)_cancelObscureLastCharacterTimer;
- (void)insertText:(id)arg1;
- (_Bool)hasText;
- (void)drawTextInRect:(struct CGRect)arg1 forContentView:(id)arg2;
- (_Bool)_clearOnEditIfNeeded;
- (id)_textContainer;
- (id)_layoutManager;
- (struct CGPoint)_textContainerOrigin;
- (id)undoManager;
- (int)atomStyle;
- (_Bool)drawsAsAtom;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2;
- (_Bool)notificationsDisabled;
- (void)setNotificationsDisabled:(_Bool)arg1;
- (_Bool)hasMarkedText;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint)arg1;
- (void)revealSelection;
- (void)setSelection:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(_Bool)arg3;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (int)scrollYOffset;
- (int)scrollXOffset;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(_Bool)arg2;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(_Bool)arg2;
@property(copy, nonatomic) NSDictionary *typingAttributes;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (struct _NSRange)_unobscuredSecureRange;
- (_Bool)_isPasscodeStyle;
- (void)_setValue:(id)arg1 forTextAttribute:(id)arg2;
- (void)becomeFieldEditorForView:(id)arg1;
- (struct CGRect)contentFrameForView:(id)arg1;
- (void)cancelAutoscroll;
- (void)updateAutoscroll:(id)arg1;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (struct CGRect)_selectionClipRect;
- (id)proxiedView;
- (id)textColorForCaretSelection;
- (id)textInputTraits;
- (id)_textSelectingContainer;
- (_Bool)isFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (void)selectAll;
- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
- (_Bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (struct _NSRange)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)textInputDidChangeSelection:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)_textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;

@end

