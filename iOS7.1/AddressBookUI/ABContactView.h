//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABCachingTableView.h>

@class ABContactHeaderView, CNContact, NSDictionary, UIColor, UIView;

@interface ABContactView : ABCachingTableView
{
    UIView *_customHeaderView;
    CNContact *_contact;
    UIColor *_backgroundColor;
    UIColor *_selectedCellBackgroundColor;
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    NSDictionary *_actionTextAttributes;
    struct UIEdgeInsets _contentMargins;
}

+ (_Bool)isFixedValueProperty:(id)arg1;
+ (_Bool)isMultiValueProperty:(id)arg1;
+ (id)optionalCardProperties;
+ (id)defaultCardProperties;
+ (id)allCardProperties;
+ (id)requiredNameProperties;
+ (id)nameProperties;
+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForProperty:(id)arg1;
+ (id)headerFooterIdentifierForGroupHeaderFooter;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForGroupSpacer;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForSplitActions;
+ (id)cellIdentifierForActions;
+ (void)preCacheEditCells;
+ (void)preCacheDisplayCells;
+ (void)preCacheContent;
@property(nonatomic) struct UIEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
@property(copy, nonatomic) NSDictionary *actionTextAttributes; // @synthesize actionTextAttributes=_actionTextAttributes;
@property(copy, nonatomic) NSDictionary *valueTextAttributes; // @synthesize valueTextAttributes=_valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(retain, nonatomic) UIColor *selectedCellBackgroundColor; // @synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
- (void)applyCellAppearance:(id)arg1;
- (void)updateFontSizes;
- (void)tintColorDidChange;
- (void)setAttributesFromContactView:(id)arg1;
- (void)registerPropertyCellClass:(Class)arg1;
- (void)setTableHeaderView:(id)arg1;
@property(readonly, nonatomic) ABContactHeaderView *defaultHeaderView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 contact:(id)arg3;

// Remaining properties
@property(nonatomic) id <ABContactViewDataSource> dataSource;
@property(nonatomic) id <ABContactViewDelegate> delegate;
@property(retain, nonatomic) UIColor *separatorColor;

@end

