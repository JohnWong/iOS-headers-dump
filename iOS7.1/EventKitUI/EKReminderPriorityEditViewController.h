//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView;

@interface EKReminderPriorityEditViewController : EKEditItemViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    unsigned long long _priority;
}

@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end

