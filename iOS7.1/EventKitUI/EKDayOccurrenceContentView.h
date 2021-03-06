//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSIndexSet, NSMutableAttributedString, NSString, UIColor;

@interface EKDayOccurrenceContentView : UIView
{
    NSString *_title;
    NSString *_location;
    UIColor *_color;
    UIColor *_titleTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_textBackgroundColor;
    UIColor *_statusTextColor;
    NSIndexSet *_titleMetrics;
    struct CGPoint _titleEndPoint;
    double _textEndY;
    struct CGRect _titleRect;
    struct CGRect _fullTextRect;
    NSMutableAttributedString *_attributedContentString;
    _Bool _allDay;
    _Bool _birthday;
    _Bool _facebook;
    _Bool _cancelled;
    _Bool _tentative;
    _Bool _declined;
    _Bool _needsReply;
    _Bool _selected;
    _Bool _allDayDrawingStyle;
    _Bool _usesSmallText;
    _Bool _hideText;
    int _occurrenceBackgroundStyle;
}

+ (Class)layerClass;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property(nonatomic) _Bool hideText; // @synthesize hideText=_hideText;
@property(nonatomic) _Bool usesSmallText; // @synthesize usesSmallText=_usesSmallText;
@property(nonatomic, getter=isAllDayDrawingStyle) _Bool allDayDrawingStyle; // @synthesize allDayDrawingStyle=_allDayDrawingStyle;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool needsReply; // @synthesize needsReply=_needsReply;
@property(nonatomic, getter=isDeclined) _Bool declined; // @synthesize declined=_declined;
@property(nonatomic, getter=isTentative) _Bool tentative; // @synthesize tentative=_tentative;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isFacebook) _Bool facebook; // @synthesize facebook=_facebook;
@property(nonatomic, getter=isBirthday) _Bool birthday; // @synthesize birthday=_birthday;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)hasIcon;
- (id)_statusTextFont;
- (id)_secondaryTextFont;
@property(retain, nonatomic) UIColor *textBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *titleTextColor;
- (id)statusTextColor;
- (id)_secondaryText;
- (id)_statusText;
- (id)strikethroughColor;
- (double)minimumNaturalHeightAllText;
- (double)minimumNaturalHeightForPrimaryText;
- (double)textNaturalWidth;
- (id)attributedContentString;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)_primaryTextFont;
- (id)stringDrawingContext;
- (void)_invalidateMetrics;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;

@end

