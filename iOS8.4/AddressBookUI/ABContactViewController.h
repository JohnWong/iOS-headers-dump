//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABContactAddLinkedCardActionDelegate.h"
#import "ABContactGroupPickerDelegate.h"
#import "ABContactHeaderViewDelegate.h"
#import "ABContactViewControllerDelegate.h"
#import "ABContactViewDataSource.h"
#import "ABContactViewDelegate.h"
#import "ABPresenterDelegate.h"
#import "ABPropertyActionDelegate.h"
#import "ABPropertyCellDelegate.h"
#import "UIAdaptivePresentationControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIViewControllerRestoration.h"

@class ABCardFaceTimeGroup, ABCardGroup, ABCardLinkedCardsGroup, ABContactAction, ABContactAddFavoriteAction, ABContactAddLinkedCardAction, ABContactAddNewFieldAction, ABContactAddToExistingContactAction, ABContactCreateNewContactAction, ABContactHeaderDisplayView, ABContactHeaderEditView, ABContactHeaderView, ABContactToggleBlockCallerAction, ABContactView, ABMedicalIDAction, ABPropertyAction, ABPropertyFaceTimeAction, ABPropertyIDSRequest, ABPropertyLinkedCardsAction, ABSiriContactContextProvider, CNContact, CNContactStyle, HKHealthStore, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, UIView;

@interface ABContactViewController : UITableViewController <ABPropertyActionDelegate, ABPropertyCellDelegate, ABContactGroupPickerDelegate, ABPresenterDelegate, UIPopoverControllerDelegate, ABContactAddLinkedCardActionDelegate, ABContactHeaderViewDelegate, ABContactViewControllerDelegate, UIAdaptivePresentationControllerDelegate, ABContactViewDataSource, ABContactViewDelegate, UIViewControllerRestoration>
{
    NSArray *_displayedProperties;
    _Bool _needsReload;
    _Bool _disablingRotation;
    int _animating;
    _Bool _isMailVIP;
    _Bool _allowsEditing;
    _Bool _alwaysEditing;
    _Bool _allowsActions;
    _Bool _allowsPropertyActions;
    _Bool _allowsCardActions;
    _Bool _allowsConferencing;
    _Bool _allowsSharing;
    _Bool _allowsAddToFavorites;
    _Bool _allowsSendMessage;
    _Bool _allowsContactBlocking;
    _Bool _allowsAddingToAddressBook;
    _Bool _shouldShowLinkedContacts;
    _Bool _allowsOnlyPhoneActions;
    _Bool _allowsOnlyFaceTimeActions;
    _Bool _allowsDeletion;
    _Bool _hideCardActions;
    CNContact *_contact;
    NSString *_alternateName;
    NSString *_message;
    NSString *_primaryProperty;
    UIView *_personHeaderView;
    ABCardGroup *_cardTopGroup;
    ABCardGroup *_cardBottomGroup;
    ABCardGroup *_cardFooterGroup;
    id <ABContactViewControllerDelegate> _contactDelegate;
    id <ABPresenterDelegate> _presentingDelegate;
    ABContactView *_displayContactView;
    ABContactView *_editingContactView;
    ABContactHeaderDisplayView *_displayHeaderView;
    ABContactHeaderEditView *_editingHeaderView;
    NSMutableArray *_mutableContacts;
    NSDictionary *_propertyGroups;
    NSMutableArray *_displayGroups;
    NSMutableArray *_editingGroups;
    NSArray *_nameEditingGroups;
    NSMutableDictionary *_groupsAfterGroup;
    NSMapTable *_cachedLabelWidths;
    NSArray *_extraBarButtonItems;
    ABCardGroup *_cardPrimaryPropertyActionsGroup;
    ABCardGroup *_cardActionsGroup;
    ABCardGroup *_cardMedicalIDGroup;
    ABCardGroup *_cardBlockContactGroup;
    ABCardFaceTimeGroup *_cardFaceTimeGroup;
    ABCardLinkedCardsGroup *_cardLinkedCardsGroup;
    ABPropertyAction *_sendMessageAction;
    ABPropertyFaceTimeAction *_faceTimeAction;
    ABPropertyFaceTimeAction *_faceTimeAudioAction;
    ABPropertyLinkedCardsAction *_linkedCardsAction;
    ABContactAddLinkedCardAction *_addLinkedCardAction;
    ABContactAction *_shareContactAction;
    ABContactAddFavoriteAction *_addFavoriteAction;
    ABContactToggleBlockCallerAction *_blockAction;
    ABContactAddNewFieldAction *_addNewFieldAction;
    ABContactCreateNewContactAction *_createNewContactAction;
    ABContactAddToExistingContactAction *_addToExistingContactAction;
    ABMedicalIDAction *_medicalIDAction;
    ABCardGroup *_cardEditingActionsGroup;
    ABCardGroup *_cardEditingDeleteContactGroup;
    ABContactAction *_deleteContactAction;
    ABSiriContactContextProvider *_siriContextProvider;
    NSMutableArray *_linkedContactsEdits;
    ABPropertyIDSRequest *_iMessageIDSRequest;
    ABPropertyIDSRequest *_faceTimeIDSRequest;
    NSDictionary *_userActivityUserInfo;
    HKHealthStore *_healthStore;
    CNContactStyle *_contactStyle;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)boolStateRestorationProperties;
@property(retain, nonatomic) CNContactStyle *contactStyle; // @synthesize contactStyle=_contactStyle;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) NSDictionary *userActivityUserInfo; // @synthesize userActivityUserInfo=_userActivityUserInfo;
@property(retain, nonatomic) ABPropertyIDSRequest *faceTimeIDSRequest; // @synthesize faceTimeIDSRequest=_faceTimeIDSRequest;
@property(retain, nonatomic) ABPropertyIDSRequest *iMessageIDSRequest; // @synthesize iMessageIDSRequest=_iMessageIDSRequest;
@property(retain, nonatomic) NSMutableArray *linkedContactsEdits; // @synthesize linkedContactsEdits=_linkedContactsEdits;
@property(retain, nonatomic) ABSiriContactContextProvider *siriContextProvider; // @synthesize siriContextProvider=_siriContextProvider;
@property(retain, nonatomic) ABContactAction *deleteContactAction; // @synthesize deleteContactAction=_deleteContactAction;
@property(retain, nonatomic) ABCardGroup *cardEditingDeleteContactGroup; // @synthesize cardEditingDeleteContactGroup=_cardEditingDeleteContactGroup;
@property(retain, nonatomic) ABCardGroup *cardEditingActionsGroup; // @synthesize cardEditingActionsGroup=_cardEditingActionsGroup;
@property(retain, nonatomic) ABMedicalIDAction *medicalIDAction; // @synthesize medicalIDAction=_medicalIDAction;
@property(retain, nonatomic) ABContactAddToExistingContactAction *addToExistingContactAction; // @synthesize addToExistingContactAction=_addToExistingContactAction;
@property(retain, nonatomic) ABContactCreateNewContactAction *createNewContactAction; // @synthesize createNewContactAction=_createNewContactAction;
@property(retain, nonatomic) ABContactAddNewFieldAction *addNewFieldAction; // @synthesize addNewFieldAction=_addNewFieldAction;
@property(retain, nonatomic) ABContactToggleBlockCallerAction *blockAction; // @synthesize blockAction=_blockAction;
@property(retain, nonatomic) ABContactAddFavoriteAction *addFavoriteAction; // @synthesize addFavoriteAction=_addFavoriteAction;
@property(retain, nonatomic) ABContactAction *shareContactAction; // @synthesize shareContactAction=_shareContactAction;
@property(retain, nonatomic) ABContactAddLinkedCardAction *addLinkedCardAction; // @synthesize addLinkedCardAction=_addLinkedCardAction;
@property(retain, nonatomic) ABPropertyLinkedCardsAction *linkedCardsAction; // @synthesize linkedCardsAction=_linkedCardsAction;
@property(retain, nonatomic) ABPropertyFaceTimeAction *faceTimeAudioAction; // @synthesize faceTimeAudioAction=_faceTimeAudioAction;
@property(retain, nonatomic) ABPropertyFaceTimeAction *faceTimeAction; // @synthesize faceTimeAction=_faceTimeAction;
@property(retain, nonatomic) ABPropertyAction *sendMessageAction; // @synthesize sendMessageAction=_sendMessageAction;
@property(retain, nonatomic) ABCardLinkedCardsGroup *cardLinkedCardsGroup; // @synthesize cardLinkedCardsGroup=_cardLinkedCardsGroup;
@property(retain, nonatomic) ABCardFaceTimeGroup *cardFaceTimeGroup; // @synthesize cardFaceTimeGroup=_cardFaceTimeGroup;
@property(retain, nonatomic) ABCardGroup *cardBlockContactGroup; // @synthesize cardBlockContactGroup=_cardBlockContactGroup;
@property(retain, nonatomic) ABCardGroup *cardMedicalIDGroup; // @synthesize cardMedicalIDGroup=_cardMedicalIDGroup;
@property(retain, nonatomic) ABCardGroup *cardActionsGroup; // @synthesize cardActionsGroup=_cardActionsGroup;
@property(retain, nonatomic) ABCardGroup *cardPrimaryPropertyActionsGroup; // @synthesize cardPrimaryPropertyActionsGroup=_cardPrimaryPropertyActionsGroup;
@property(retain, nonatomic) NSArray *extraBarButtonItems; // @synthesize extraBarButtonItems=_extraBarButtonItems;
@property(retain, nonatomic) NSMapTable *cachedLabelWidths; // @synthesize cachedLabelWidths=_cachedLabelWidths;
@property(retain, nonatomic) NSMutableDictionary *groupsAfterGroup; // @synthesize groupsAfterGroup=_groupsAfterGroup;
@property(retain, nonatomic) NSArray *nameEditingGroups; // @synthesize nameEditingGroups=_nameEditingGroups;
@property(retain, nonatomic) NSMutableArray *editingGroups; // @synthesize editingGroups=_editingGroups;
@property(retain, nonatomic) NSMutableArray *displayGroups; // @synthesize displayGroups=_displayGroups;
@property(retain, nonatomic) NSDictionary *propertyGroups; // @synthesize propertyGroups=_propertyGroups;
@property(retain, nonatomic) NSMutableArray *mutableContacts; // @synthesize mutableContacts=_mutableContacts;
@property(retain, nonatomic) ABContactHeaderEditView *editingHeaderView; // @synthesize editingHeaderView=_editingHeaderView;
@property(retain, nonatomic) ABContactHeaderDisplayView *displayHeaderView; // @synthesize displayHeaderView=_displayHeaderView;
@property(retain, nonatomic) ABContactView *editingContactView; // @synthesize editingContactView=_editingContactView;
@property(retain, nonatomic) ABContactView *displayContactView; // @synthesize displayContactView=_displayContactView;
@property(nonatomic) id <ABPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(nonatomic) id <ABContactViewControllerDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
@property(readonly, nonatomic) ABCardGroup *cardFooterGroup; // @synthesize cardFooterGroup=_cardFooterGroup;
@property(retain, nonatomic) ABCardGroup *cardBottomGroup; // @synthesize cardBottomGroup=_cardBottomGroup;
@property(retain, nonatomic) ABCardGroup *cardTopGroup; // @synthesize cardTopGroup=_cardTopGroup;
@property(retain, nonatomic) UIView *personHeaderView; // @synthesize personHeaderView=_personHeaderView;
@property(retain, nonatomic) NSString *primaryProperty; // @synthesize primaryProperty=_primaryProperty;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(nonatomic) _Bool hideCardActions; // @synthesize hideCardActions=_hideCardActions;
@property(nonatomic) _Bool allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
@property(nonatomic) _Bool allowsOnlyFaceTimeActions; // @synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions;
@property(nonatomic) _Bool allowsOnlyPhoneActions; // @synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions;
@property(nonatomic) _Bool shouldShowLinkedContacts; // @synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts;
@property(nonatomic) _Bool allowsAddingToAddressBook; // @synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook;
@property(nonatomic) _Bool allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
@property(nonatomic) _Bool allowsSendMessage; // @synthesize allowsSendMessage=_allowsSendMessage;
@property(nonatomic) _Bool allowsAddToFavorites; // @synthesize allowsAddToFavorites=_allowsAddToFavorites;
@property(nonatomic) _Bool allowsSharing; // @synthesize allowsSharing=_allowsSharing;
@property(nonatomic) _Bool allowsConferencing; // @synthesize allowsConferencing=_allowsConferencing;
@property(nonatomic) _Bool allowsCardActions; // @synthesize allowsCardActions=_allowsCardActions;
@property(nonatomic) _Bool allowsPropertyActions; // @synthesize allowsPropertyActions=_allowsPropertyActions;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
@property(nonatomic) _Bool alwaysEditing; // @synthesize alwaysEditing=_alwaysEditing;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)updateUserActivityState:(id)arg1;
- (void)_updateUserActivity;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_addedGroupWithName:(id)arg1;
- (_Bool)_indexPathIsActionItem:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_cardGroupAtIndex:(long long)arg1;
- (id)_currentGroups;
- (void)saveLinkedContactChanges;
- (void)_saveChangesForGroups:(id)arg1;
- (void)_validateGroup:(id)arg1;
- (void)_linkEditableContactForEditedReadOnlyContact;
- (_Bool)_modelIsEmpty;
- (_Bool)_modelHasChanges;
- (id)_loadNameEditingGroups;
- (id)_loadEditingGroups;
- (id)_loadDisplayGroups;
- (id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2;
- (void)_reloadLinkedCardsGroup;
- (void)_reloadMedicalIDGroup;
- (void)_addFaceTimeGroupAnimated:(_Bool)arg1;
- (void)_reloadFaceTimeGroup;
- (void)_reloadPropertyGroupsPreservingChanges:(_Bool)arg1;
- (id)_loadPropertyGroups;
- (id)_loadMutableLinkedContactsForUnifiedContact:(id)arg1;
- (void)_updateEmailTransportButtonsForItems:(id)arg1;
- (void)_updatePhoneTransportButtonsForItems:(id)arg1;
- (void)_updateIMessageTransportButtonsForItems:(id)arg1;
- (void)_updateAvailableTransportsForItems:(id)arg1;
- (void)_updateAvailableTransports;
- (id)_allDisplayPropertyItemsFromGroups:(id)arg1;
- (id)_addToExistingContactAction;
- (id)_addCreateNewContactAction;
- (id)_addNewFieldAction;
- (id)_addFavoriteActionWithConferencing:(_Bool)arg1 telephony:(_Bool)arg2;
- (id)_shareContactAction;
- (id)_addLinkedCardAction;
- (id)_linkedCardsAction;
- (id)_faceTimeAudioAction;
- (id)_faceTimeAction;
- (id)_sendMessageActionAllowingEmailIDs:(_Bool)arg1;
- (void)_setupPrimaryPropertyActions;
- (void)_setupEditingCardActions;
- (void)_setupAddToAddressBookActions;
- (void)_setupContactBlockingActionsWithUpdate:(_Bool)arg1;
- (void)_setupCardActions;
- (void)setupActions;
- (void)blockListDidChange:(id)arg1;
- (void)updateContactsViewWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (double)desiredHeightForWidth:(double)arg1;
- (void)removeLinkedContact:(id)arg1;
- (void)addLinkedContact:(id)arg1;
- (void)addToExistingContact:(id)arg1;
- (void)createNewContact:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (void)_updateItemsInGroup:(id)arg1;
- (void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)addEditingItemAtIndexPath:(id)arg1;
- (long long)_numberOfItemsInCustomGroup:(id)arg1;
- (void)_updateLabelWidthForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateLabelWidths;
- (void)_updateLabelWidthsForItem:(id)arg1;
- (void)_updateLabelWidthsForGroup:(id)arg1;
- (id)_cellForIndexPath:(id)arg1;
- (void)_scrollContactView:(id)arg1 toVisibleGroup:(id)arg2;
- (id)_currentTopVisibleGroupInContactView:(id)arg1;
- (_Bool)needsReload;
- (void)reloadDataIfNeeded;
- (void)setNeedsReloadLazy;
- (void)setNeedsReload;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)headerHeightDidChange;
- (void)headerPhotoDidUpdate;
- (_Bool)shouldAllowSelectingContact:(id)arg1;
- (void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2;
- (void)contactGroupPickerDidCancel:(id)arg1;
- (id)alreadyPickedGroups;
- (id)defaultValueForPropertyCell:(id)arg1;
- (id)_dateForProperty:(id)arg1;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)actionWasCanceled:(id)arg1;
- (void)actionDidFinish:(id)arg1;
- (void)actionDidUpdate:(id)arg1;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (long long)_modalPresentationStyleForViewController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)viewForHeaderInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contactView:(id)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (double)contactView:(id)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2;
- (long long)numberOfGroupsInContactView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleEditing:(id)arg1;
- (void)saveModelChangesToContact;
- (void)saveChanges;
- (void)editCancel:(id)arg1;
- (CDStruct_89ddc8e1)transitionToEditing:(_Bool)arg1;
- (CDStruct_89ddc8e1)editingTransition;
- (void)updateDoneButton;
- (void)updateEditNavigationItemsAnimated:(_Bool)arg1;
- (id)navigationItemController;
- (id)contentScrollView;
- (id)tableView;
- (id)indexPathOfDisplayedPropertyItem:(id)arg1;
- (void)reloadCardGroup:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(_Bool)arg5;
- (void)addCardGroup:(id)arg1 afterGroup:(id)arg2;
- (long long)indexOfGroup:(id)arg1;
- (id)cardGroupForProperty:(id)arg1;
- (void)setMergeContact:(id)arg1;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (void)prepareCell:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)cardActions;
@property(nonatomic) _Bool isMailVIP; // @synthesize isMailVIP=_isMailVIP;
@property(readonly, nonatomic) ABContactHeaderView *contactHeaderView;
@property(readonly, nonatomic) ABContactView *contactView;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (void)applyStyleProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

