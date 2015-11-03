//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABAbstractViewController.h>

#import "UITableViewDelegate.h"

@class ABAccountsAndGroupDataSource, ABPeoplePickerNavigationController, UIRefreshControl;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate>
{
    UIRefreshControl *_refreshControl;
    ABAccountsAndGroupDataSource *_dataSource;
    _Bool _needsReload;
    _Bool _tableViewNeedsReloadAfterResume;
    _Bool _showsRefreshButton;
    ABPeoplePickerNavigationController *_peoplePickerNavigationController;
}

@property(nonatomic) ABPeoplePickerNavigationController *peoplePickerNavigationController; // @synthesize peoplePickerNavigationController=_peoplePickerNavigationController;
@property(readonly, nonatomic) ABAccountsAndGroupDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)modelDatabaseChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateDisplayedContactsFilterFromSelection;
- (void)done:(id)arg1;
- (int)abViewControllerType;
- (void)applicationDidResume;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)hidesGlobalGroupWrapper;
- (void)setHidesGlobalGroupWrapper:(_Bool)arg1;
- (_Bool)hidesSearchableSources;
- (void)setHidesSearchableSources:(_Bool)arg1;
- (void)updateRefreshButton;
- (void)refreshEverythingNow;
- (void)reloadData;
- (void)setModel:(id)arg1;
- (id)model;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (id)allGroupWrapperIndexPaths;

@end

