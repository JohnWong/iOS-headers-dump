//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABTabletStyleProvider.h>

#import "TKTonePickerStyleProvider.h"
#import "TKVibrationPickerStyleProvider.h"

@class NSString, UIColor, UIFont;

@interface ABFaceTimeStyleProvider : ABTabletStyleProvider <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>
{
}

- (id)groupAccountNameShadowColor;
- (id)groupAccountNameColor;
- (long long)groupCellSelectionStyle;
- (id)groupCellShadowColor;
- (id)groupCellHighlightedTextColor;
- (id)groupCellTextColor;
- (id)groupHeaderBackgroudColor;
- (id)groupCellBackgroundColor;
- (id)groupsTableBackgroundColor;
- (_Bool)groupsTableShouldRemoveBackgroundView;
- (_Bool)presentModalViewInPopover;
- (_Bool)presentNewContactsControllersInPopover;
- (_Bool)presentDatePickerInPopover;
- (_Bool)peoplePickerBarStyleIsTranslucent;
- (long long)peoplePickerBarStyle;
- (_Bool)shouldUsePeoplePickerBarStyle;
- (int)dialogStyleForDeleteConfirmation;
- (_Bool)shouldDefinePickerTransitionStyle;
- (long long)pickerTransitionStyle;
- (_Bool)labelPickerUsesOpaqueBackground;
- (_Bool)shouldPropagateStylesToPickers;
- (_Bool)datePickerHasNavigationTitle;
- (id)cardClippingImageLabelBevelColor;
- (id)cardClippingImageLabelColor;
- (id)cardPhotoEditPlaceholderImage;
- (_Bool)cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)cardPlaceholderCompanyImage;
- (id)cardPlaceholderPersonImage;
- (struct CGSize)cardPhotoShadowOffset;
- (id)cardPhotoShadowImage;
- (_Bool)cardPhotoShouldApplyOverlayImageWhenLabelPresent;
- (id)cardPhotoEditOverlayImage;
- (id)cardPhotoFacebookAttributionImage;
- (id)cardPhotoOverlayImage;
- (id)cardPhotoMaskImage;
- (struct CGSize)cardPhotoOffset;
- (double)cardPhotoFrameBorderSize;
- (id)cardPhotoBackgroundImage;
- (id)personViewGetFavoritesBadgeHighlighted;
- (id)personViewGetFavoritesBadge;
- (_Bool)cardSectionDrawsDefaultTopShadow;
- (_Bool)cardSectionAlwaysWantsHeader;
- (_Bool)cardShouldUseSeparateSectionsForUnknownCardActions;
- (_Bool)cardTableViewUsesDistinctSectionHeaderFooterHeights;
- (_Bool)cardTableUsesRowFadeAnimation;
- (id)cardDeleteButtonImagePressed;
- (id)cardDeleteButtonImage;
- (long long)cardCellSelectionStyle;
- (id)newCardDividerViewVertical:(_Bool)arg1;
- (id)cardCellDividerShadowColorVertical:(_Bool)arg1;
- (id)cardCellDividerColorVertical:(_Bool)arg1;
- (id)cardCellBackgroundColor;
- (_Bool)cardCellLooksDifferentWhenEditing;
- (void)setIndicatesFaceTimeHistory:(_Bool)arg1 onActionButton:(id)arg2;
- (_Bool)cardActionsAllowFaceTimeFavorites;
- (_Bool)cardActionsAllowVoiceFavorites;
- (id)cardActionConferenceIconPressed;
- (id)cardActionConferenceIcon;
- (id)cardActionButtonBackgroundHighlighted;
- (id)cardActionButtonBackgroundNormal;
- (long long)cardActionButtonType;
- (id)personHeaderPasteboardColor;
- (struct CGSize)personHeaderShadowOffset;
- (struct CGSize)personActionShadowOffset;
- (id)personActionShadowColor;
- (id)personActionHighlightedColor;
- (id)personActionColor;
- (id)personActionFont;
- (id)personLabelShadowColor;
- (id)personLabelHighlightedColor;
- (id)personLabelColor;
- (id)personValueImportantHighlightColor;
- (id)personValueImportantColor;
- (id)personValueEmphasizedHighlightColor;
- (id)personValueEmphasizedColor;
- (id)cardLabelEmphasizedHighlightedTextColor;
- (id)cardLabelHighlightedTextColor;
- (id)editorViewColor;
- (id)cardLabelSelectedBackgroundColor;
- (id)cardLabelTextColor;
- (_Bool)cardValueHighlightsWhenTouched;
- (id)cardValueClearButtonImage;
- (id)cardValueHighlightedTextColor;
- (id)cardValueTextColor;
- (id)cardHeaderDefaultLabelTextColor;
- (long long)headerViewBorderStyle;
- (id)cardTableCellBorderColor;
- (id)personHeaderShadowColor;
- (id)cardTaglineTextColor;
- (id)cardHeadlineTextColor;
- (_Bool)cardTableShouldRemoveBackgroundView;
- (id)memberPlaceholderCompanyImage;
- (id)memberPlaceholderPersonImage;
- (id)memberPhotoOverlayImage;
- (id)memberPhotoMaskImage;
- (_Bool)membersSearchBarIsInTableHeader;
- (id)memberSectionListHeaderImage;
- (id)membersIndexTrackingBackgroundColor;
- (id)membersIndexTextColor;
- (double)membersIndexMaximumHeight;
- (long long)membersSelectionStyle;
- (id)memberSearchFieldBackgroundColor;
- (id)memberNameMeCardTextColor;
- (id)memberNameSelectedShadowColor;
- (id)memberNameShadowColor;
- (id)memberNameSelectedColor;
- (id)memberNameTextColor;
- (id)cardSectionBackgroundColor;
- (id)membersSearchCellBackgroundColor;
- (id)membersSearchBackgroundColor;
- (id)membersBackgroundColor;
- (id)memberHeaderBackgroundView;
- (id)membersHeaderBackgroundColor;
- (id)membersHeaderContentViewBackgroundColor;
- (id)newBackgroundViewForCellStyle:(int)arg1 selected:(_Bool)arg2;
- (id)newTableFooterViewForCellStyle:(int)arg1;
- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (id)_accessoryDisclosureIndicatorHighlightedImageShadowed;
- (id)_accessoryDisclosureIndicatorImageShadowed;
- (id)_accessoryDisclosureIndicatorHighlightedImage;
- (id)_accessoryDisclosureIndicatorImage;
- (id)separatorColorForCellStyle:(int)arg1;
- (long long)separatorStyleForCellStyle:(int)arg1;
- (id)shadowColorForCellStyle:(int)arg1;
- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForCardTableWhenEditing:(_Bool)arg1;
- (int)abCellStyleForMembersTable;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForGroupsTableGrouped;
- (double)personViewHeaderImageHeight;
- (double)personViewHeaderImageWidth;
- (_Bool)shouldUseCardContentProviderWhenAvailable;
@property(readonly, nonatomic) _Bool vibrationPickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomVibrationPickerHeaderView;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;
@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
- (id)vibrationPickerCellSelectedTextColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool vibrationPickerUsesOpaqueBackground;
@property(readonly, nonatomic) _Bool tonePickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset tonePickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomTonePickerHeaderView;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(_Bool)arg1;
@property(readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
- (id)tonePickerCellSelectedTextColor;
@property(readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property(readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property(readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool tonePickerUsesOpaqueBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@property(readonly, nonatomic) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;

@end

