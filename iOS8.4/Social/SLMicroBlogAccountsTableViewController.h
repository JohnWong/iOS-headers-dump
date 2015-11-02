//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, SLMicroBlogUserRecord, UIImage;

__attribute__((visibility("hidden")))
@interface SLMicroBlogAccountsTableViewController : UITableViewController
{
    NSArray *_accountUserRecords;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    id <SLMicroBlogAccountsTableViewControllerDelegate> _selectionDelegate;
    UIImage *_blankImage;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_accountUserRecordForIndexPath:(id)arg1;
- (void)didUpdateAccountUserRecord:(id)arg1;
- (void)setCurrentAccountUserRecord:(id)arg1;
- (void)setAccountUserRecords:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (id)_blankImage;
- (id)initWithStyle:(long long)arg1;

@end

