//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABPersonEditDelegate.h"
#import "ABPersonTableViewDataSourceDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABPickerViewControllerDismissDelegate.h"
#import "ABPopoverRepresentDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIViewControllerRestoration.h"

@class ABDatePickerViewController, ABMultiCellContentView_RelatedName, ABPeoplePickerNavigationController, ABPersonTableView, ABPersonTableViewDataSource, ABPersonTableViewLinkingDelegate, ABUIPerson, NSArray, NSIndexPath, NSString, UIBarButtonItem, UIPopoverController, UITableView, UIView, UIViewController;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate, UIScrollViewDelegate, UIViewControllerRestoration>
{
    UIViewController *_viewController;
    id <ABPersonEditDelegate> _editDelegate;
    struct __CFArray *_displayedProperties;
    ABDatePickerViewController *_datePickerViewController;
    _Bool _isAnimatingDatePickerInputView;
    _Bool _willPresentDatePickerViewController;
    id _activeDialog;
    id _deletionDelegate;
    id _actionSheetDelegate;
    _Bool _allowsSettingAsPreferredCardForName;
    _Bool _animatedRight;
    _Bool _automaticallySetEditing;
    _Bool _allowsAddingToAddressBook;
    _Bool _showsPeoplePickerCancelButton;
    _Bool _savesNewContactOnSuspend;
    void *_addressBook;
    struct __CFDictionary *_valueByProperty;
    id <ABStyleProvider> _styleProvider;
    id <ABCardContentProvider> _cardContentProvider;
    _Bool _isOverridingCardContentProvider;
    UIView *_cardContentProviderHeaderView;
    long long _selectedCardContentIndex;
    _Bool _isLocation;
    NSString *_addToPersonButtonTitle;
    UIBarButtonItem *_reusableCancelButton;
    ABPersonTableView *_controllerTableView;
    unsigned long long _modelDatabaseLocalChangeCancellationCount;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIPopoverController *_presentationPopoverController;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    ABPeoplePickerNavigationController *_peoplePickerForAddToContacts;
    ABPeoplePickerNavigationController *_peoplePickerForRelatedNames;
    ABMultiCellContentView_RelatedName *_relatedPersonCell;
    _Bool _disablePopoverUpdates;
    long long _favoritesListChangeNotificationCount;
    _Bool _hasAddedUnknownPersonActions;
    ABUIPerson *_displayedPerson;
    NSArray *_displayedPeople;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) NSIndexPath *popoverViewInCellIndexPath; // @synthesize popoverViewInCellIndexPath=_popoverViewInCellIndexPath;
@property(retain, nonatomic) NSIndexPath *popoverCellIndexPath; // @synthesize popoverCellIndexPath=_popoverCellIndexPath;
@property(copy, nonatomic) NSString *addToPersonButtonTitle; // @synthesize addToPersonButtonTitle=_addToPersonButtonTitle;
@property(readonly, nonatomic) UITableView *controllerTableView; // @synthesize controllerTableView=_controllerTableView;
@property(nonatomic) ABPersonTableViewLinkingDelegate *linkingDelegate; // @synthesize linkingDelegate=_linkingDelegate;
@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool disablePopoverUpdates; // @synthesize disablePopoverUpdates=_disablePopoverUpdates;
@property(nonatomic) _Bool savesNewContactOnSuspend; // @synthesize savesNewContactOnSuspend=_savesNewContactOnSuspend;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) _Bool isLocation; // @synthesize isLocation=_isLocation;
@property(nonatomic) _Bool allowsAddingToAddressBook; // @synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook;
@property(nonatomic) _Bool allowsSettingAsPreferredCardForName; // @synthesize allowsSettingAsPreferredCardForName=_allowsSettingAsPreferredCardForName;
@property(nonatomic) _Bool showsPeoplePickerCancelButton; // @synthesize showsPeoplePickerCancelButton=_showsPeoplePickerCancelButton;
@property(readonly, nonatomic) NSArray *displayedPeople; // @synthesize displayedPeople=_displayedPeople;
@property(retain, nonatomic) ABUIPerson *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
@property(nonatomic) _Bool automaticallySetEditing; // @synthesize automaticallySetEditing=_automaticallySetEditing;
@property(nonatomic) id <ABPersonEditDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)viewToRepresentPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)shouldBeRemovedFromNavigationStack;
- (void)preferredPersonDidChangeToPerson:(void *)arg1;
- (void)imageUpdatedForPerson:(void *)arg1;
- (void)personWasDeleted;
- (void)dismissPickerViewController:(id)arg1;
- (_Bool)updateAllDataForExternalChange;
- (void)updateTableDataForExternalChange;
- (_Bool)updatePeopleDataForExternalChange;
- (_Bool)_updatePeopleDataForExternalChangeWithFullReload:(_Bool)arg1;
- (void)addressBookChangedLocally:(struct __CFDictionary *)arg1;
- (void)ignoreNextLocalChange;
- (void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(_Bool)arg2;
- (void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;
- (double)personTableViewDataSourceHeaderPadding:(id)arg1;
- (_Bool)personTableViewDataSourceShouldShowHeader:(id)arg1;
- (void)personTableViewDataSourceDidReloadData:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;
- (_Bool)personTableViewDataSourceIsInPopover:(id)arg1;
- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (_Bool)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
- (void)_attemptSave;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(long long)arg2;
- (_Bool)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (_Bool)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (_Bool)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (void)_dismissDatePickerInputViewAnimated:(_Bool)arg1;
- (void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2;
- (_Bool)shouldAnimateDatePickerInputView;
- (_Bool)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool hasPopoverController;
- (void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(_Bool)arg2;
- (void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(_Bool)arg3;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (_Bool)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(_Bool)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(_Bool)arg2;
- (void)performActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performInstantMessageActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (id)_chatURLWithPropertyValue:(id)arg1;
- (void)performSocialProfileActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2;
- (void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withContext:(void *)arg4;
- (void)weiboActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)twitterActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)performWeiboActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)performTwitterActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)openSocialProfile:(id)arg1;
- (void)showWeiboSheetForPropertyValue:(id)arg1;
- (void)showTweetSheetForPropertyValue:(id)arg1;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (_Bool)shouldShowAddToExistingContact;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)peoplePickerNavigationController:(id)arg1 setRelatedPerson:(id)arg2;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(_Bool)arg2 forPerson:(void *)arg3;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;
- (void)_mergeIntoDisplayedPerson:(void *)arg1;
- (_Bool)copyInsertValue:(id *)arg1 property:(int *)arg2 forPerson:(void *)arg3;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
- (void)_presentPeoplePickerNavigationController:(id)arg1 fromView:(id)arg2 inPopover:(_Bool)arg3;
- (id)_preparePeoplePicker;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2 informDelegate:(_Bool)arg3;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (id)_newContactViewControllerForAddToContacts;
- (void)_addProperties:(id)arg1 toPerson:(id)arg2;
- (id)viewControllerToPresentModal;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removeDisplayedPeople;
- (void)removeSelectedPerson;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)ab_updatePopoverSize;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)loadViewWithPerson:(id)arg1 allowDeletion:(_Bool)arg2 allowActions:(_Bool)arg3;
- (void)loadUnknownViewWithPerson:(id)arg1 allowActions:(_Bool)arg2;
- (void)addUnknownPersonActionsIfNeeded;
- (void)contentSwitchingTabsTapped:(id)arg1;
- (void)showSelectedContentView;
- (id)prepareViewWithPerson:(id)arg1;
- (void)updateContentSwitchingTabs;
- (void)didDismissModalViewController;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)notifyScrollViewDidLoad;
- (void)updateEditButton;
- (void)presentModalViewController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)viewForActionSheet;
- (_Bool)makeFirstFieldBecomeFirstResponder;
@property(readonly, nonatomic) id <ABPersonViewControllerPrivateDelegate> personViewDelegate;
- (id)newPersonViewDelegate;
@property(readonly, nonatomic) id <ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;
- (void)updateLinkBarButtonItem;
- (void)setDatePickerViewController:(id)arg1;
- (void)updateRecord;
- (void)reloadNameData;
- (void)reloadData;
- (void)updateDisplayedPeopleAndReloadData;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)updateAllowsSettingAsPreferredCardForName;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)_favoritesListChanged:(id)arg1;
- (void)setAllowsActions:(_Bool)arg1;
@property(readonly, getter=isReadonly) _Bool readonly;
@property(copy, nonatomic) NSArray *displayedProperties;
- (void)_updateDisplayedPeople;
- (void)_updateDisplayedPeopleForcingReloadData:(_Bool)arg1;
- (void)setDisplayedPeople:(id)arg1 forceReload:(_Bool)arg2;
@property(readonly, nonatomic) UIBarButtonItem *reusableCancelButton;
@property(readonly, nonatomic) void *existingAddressBook;
@property(nonatomic) void *addressBook;
- (id)_personToUseForAddressBook;
- (void)setCardContentProvider:(id)arg1;
- (void)_setCardContentProvider:(id)arg1;
- (_Bool)_shouldHideContentSwitchingTabsWhenEditing:(_Bool)arg1;
- (void)_updateCardContentProviderHeaderViewForEditing:(_Bool)arg1;
- (void)_updateBackgroundForCardContentProvider;
- (void)client:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)setActiveDialog:(id)arg1;
- (id)personContainerView;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 style:(int)arg2;

@end

