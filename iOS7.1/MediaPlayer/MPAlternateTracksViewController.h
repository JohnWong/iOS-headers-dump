//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAbstractAlternateTracksViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UINavigationBar, UIProgressIndicator, UITableView, UITextLabel, UIView;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_table;
    UIProgressIndicator *_progressIndicator;
    UITextLabel *_loadingLabel;
}

- (void).cxx_destruct;
- (void)_setCell:(id)arg1 isChecked:(_Bool)arg2;
- (void)_exitAnimated:(_Bool)arg1;
- (void)removeLoadingUI;
- (void)addLoadingUI;
- (void)reloadData;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willChangeToInterfaceOrientation:(long long)arg1;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (void)dealloc;

@end

