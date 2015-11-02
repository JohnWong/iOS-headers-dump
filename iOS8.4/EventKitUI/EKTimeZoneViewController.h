//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UISearchControllerDelegate.h"

@class NSArray, NSString, NSTimeZone, UISearchController;

@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate>
{
    UISearchController *_searchController;
    int _style;
    int _chooserStyle;
    id <EKTimeZoneViewControllerDelegate> _delegate;
    NSTimeZone *_timeZone;
    NSArray *_cities;
}

@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(readonly, nonatomic) int chooserStyle; // @synthesize chooserStyle=_chooserStyle;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) __weak id <EKTimeZoneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willDismissSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithChooserStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

