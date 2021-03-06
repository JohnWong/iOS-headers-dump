//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "UITextInputTraits.h"
#import "UITextInputTraits_Private.h"

@class NSString, UIColor, UIImage;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying>
{
    long long autocapitalizationType;
    long long autocorrectionType;
    long long spellCheckingType;
    unsigned int keyboardType:8;
    unsigned int keyboardAppearance:8;
    long long returnKeyType;
    _Bool enablesReturnKeyAutomatically;
    _Bool secureTextEntry;
    struct __CFCharacterSet *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    unsigned long long insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    _Bool isSingleLineDocument;
    _Bool contentsIsSingleValue;
    _Bool acceptsEmoji;
    _Bool forceEnableDictation;
    _Bool returnKeyGoesToNextResponder;
    _Bool acceptsFloatingKeyboard;
    _Bool acceptsSplitKeyboard;
    _Bool displaySecureTextUsingPlainText;
    _Bool learnsCorrections;
    int emptyContentReturnKeyType;
    int shortcutConversionType;
    _Bool suppressReturnKeyStyling;
    _Bool useInterfaceLanguageForLocalization;
    _Bool deferBecomingResponder;
    _Bool enablesReturnKeyOnNonWhiteSpaceContent;
    NSString *autocorrectionContext;
    NSString *responseContext;
    _Bool disablePrediction;
}

+ (_Bool)keyboardTypeRequiresASCIICapable:(long long)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;
+ (id)defaultTextInputTraits;
+ (long long)accessibleAppearanceForAppearance:(long long)arg1;
@property(nonatomic) _Bool disablePrediction; // @synthesize disablePrediction;
@property(copy, nonatomic) NSString *responseContext; // @synthesize responseContext;
@property(copy, nonatomic) NSString *autocorrectionContext; // @synthesize autocorrectionContext;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent; // @synthesize enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool deferBecomingResponder; // @synthesize deferBecomingResponder;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization; // @synthesize useInterfaceLanguageForLocalization;
@property(nonatomic) _Bool suppressReturnKeyStyling; // @synthesize suppressReturnKeyStyling;
@property(nonatomic) int shortcutConversionType; // @synthesize shortcutConversionType;
@property(nonatomic) _Bool learnsCorrections; // @synthesize learnsCorrections;
@property(nonatomic) _Bool displaySecureTextUsingPlainText; // @synthesize displaySecureTextUsingPlainText;
@property(nonatomic) _Bool acceptsSplitKeyboard; // @synthesize acceptsSplitKeyboard;
@property(nonatomic) _Bool acceptsFloatingKeyboard; // @synthesize acceptsFloatingKeyboard;
@property(nonatomic) _Bool returnKeyGoesToNextResponder; // @synthesize returnKeyGoesToNextResponder;
@property(nonatomic) int emptyContentReturnKeyType; // @synthesize emptyContentReturnKeyType;
@property(nonatomic) _Bool forceEnableDictation; // @synthesize forceEnableDictation;
@property(nonatomic) _Bool acceptsEmoji; // @synthesize acceptsEmoji;
@property(nonatomic) _Bool contentsIsSingleValue; // @synthesize contentsIsSingleValue;
@property(nonatomic) _Bool isSingleLineDocument; // @synthesize isSingleLineDocument;
@property(nonatomic) int textSelectionBehavior; // @synthesize textSelectionBehavior;
@property(nonatomic) int textLoupeVisibility; // @synthesize textLoupeVisibility;
@property(nonatomic) unsigned long long insertionPointWidth; // @synthesize insertionPointWidth;
@property(retain, nonatomic) UIImage *selectionDragDotImage; // @synthesize selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor;
@property(retain, nonatomic) UIColor *selectionBarColor; // @synthesize selectionBarColor;
@property(retain, nonatomic) UIColor *insertionPointColor; // @synthesize insertionPointColor;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType;
- (_Bool)isEqual:(id)arg1;
- (long long)updateResultComparedToTraits:(id)arg1;
- (_Bool)publicTraitsMatchTraits:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (void)setToDefaultValues;
- (void)dealloc;
- (id)init;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
- (id)dictionaryRepresentation;
- (void)setToSecureValues;
- (void)_setColorsToMatchTintColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

