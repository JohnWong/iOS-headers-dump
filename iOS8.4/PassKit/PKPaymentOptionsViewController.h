//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABPostalAddressEditorDelegate.h"
#import "UITextFieldDelegate.h"

@class ABPostalAddressEditorNavigationController, NSString, PKPassSnapshotter, PKPaymentOptionsModel;

@interface PKPaymentOptionsViewController : UITableViewController <ABPeoplePickerNavigationControllerDelegate, ABPostalAddressEditorDelegate, UITextFieldDelegate>
{
    PKPaymentOptionsModel *_optionsModel;
    int _optionsStyle;
    ABPostalAddressEditorNavigationController *_addressEditorViewController;
    PKPassSnapshotter *_passSnapshotter;
    NSString *_title;
    _Bool _isEditable;
    _Bool _showDisclosureIndicators;
    id <PKPaymentOptionsViewControllerDelegate> _delegate;
    CDUnknownBlockType _pickedABPropertyHandler;
    CDUnknownBlockType _pickedABPersonHandler;
}

@property(copy, nonatomic) CDUnknownBlockType pickedABPersonHandler; // @synthesize pickedABPersonHandler=_pickedABPersonHandler;
@property(copy, nonatomic) CDUnknownBlockType pickedABPropertyHandler; // @synthesize pickedABPropertyHandler=_pickedABPropertyHandler;
@property(nonatomic) _Bool showDisclosureIndicators; // @synthesize showDisclosureIndicators=_showDisclosureIndicators;
@property(nonatomic) id <PKPaymentOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2;
- (void)postalAddressEditor:(id)arg1 finishedEditingProperty:(int)arg2 contact:(id)arg3;
- (void)postalAddressEditorDidCancel:(id)arg1;
- (void)_showEntryViewControllerForPropertyID:(int)arg1 optionsGroup:(id)arg2;
- (void)_showAddressEntryViewControllerForOptionsGroup:(id)arg1;
- (void)_showABPickerForPropertyID:(int)arg1 optionsGroup:(id)arg2;
- (void)_updateContactName;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setNameOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setPhoneOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setEmailOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setPaymentPassOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setBillingAddressOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setShippingAddressOptions:(id)arg1 selectedIndex:(long long)arg2 displayMode:(id)arg3 displayName:(id)arg4 optionsChangedHandler:(CDUnknownBlockType)arg5;
- (void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(long long)arg3 displayMode:(id)arg4 optionsChangedHandler:(CDUnknownBlockType)arg5;
- (id)_passSnapshotter;
- (void)_updateNavigationBar;
- (_Bool)_presentedModally;
- (id)title;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithTitle:(id)arg1 optionsStyle:(int)arg2 editable:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 optionsStyle:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

