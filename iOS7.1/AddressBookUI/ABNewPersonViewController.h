//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ABContactViewController, ABContactsFilter, ABPersonTableViewDataSource, ABPersonViewControllerHelper, CNContact, _UIAccessDeniedView;

@interface ABNewPersonViewController : UIViewController
{
    id <ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
    id _parentGroup;
    id _helper;
    void *_recordForNewPerson;
    _Bool _isRealViewLoaded;
    ABPersonTableViewDataSource *_dataSource;
    _UIAccessDeniedView *_accessDeniedView;
    void *_parentSource;
    ABContactViewController *_contactViewController;
    id <ABPresenterDelegate> _presentingDelegate;
    CNContact *_mergeContact;
}

@property(retain, nonatomic) CNContact *mergeContact; // @synthesize mergeContact=_mergeContact;
@property(nonatomic) id <ABPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(readonly, nonatomic) ABContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(nonatomic) void *parentSource; // @synthesize parentSource=_parentSource;
@property(nonatomic) _Bool isRealViewLoaded; // @synthesize isRealViewLoaded=_isRealViewLoaded;
@property(readonly, nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) ABContactsFilter *parentContactsFilter; // @synthesize parentContactsFilter=_parentGroup;
- (void)accessChanged;
- (int)abViewControllerType;
- (void)applicationDidResume;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_getRotationContentSettings:(CDStruct_ebaa735e *)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)supportedInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)viewDidUnload;
- (void)loadView;
@property(readonly, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
- (void)updateNavigationButtons;
- (void *)recordForNewPerson;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (double)ab_heightToFitForViewInPopoverView;
- (void)save:(id)arg1;
- (void)attemptSaveAndTellDelegate:(_Bool)arg1;
- (void)cancel:(id)arg1;
- (void)saveAndTellDelegate:(_Bool)arg1;
- (void)savePerson:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(nonatomic) _Bool savesNewContactOnSuspend;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) void *parentGroup;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
@property(nonatomic) void *displayedPerson;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider;
@property(nonatomic) void *addressBook;
@property(nonatomic) id <ABNewPersonViewControllerDelegate> newPersonViewDelegate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
@property(readonly, nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;

@end

