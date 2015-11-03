//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray;

@interface ABMembersFilteredDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_records;
    void *_addressBook;
    id <ABMembersDataSourceDelegate> _delegate;
    id <ABStyleProvider> _styleProvider;
    _Bool _isInPopover;
}

@property(nonatomic) _Bool isInPopover; // @synthesize isInPopover=_isInPopover;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(nonatomic) id <ABMembersDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)removeAllRecords;
- (void)addRecords:(id)arg1;
- (unsigned long long)count;
@property(readonly, nonatomic) NSArray *records;
- (void)dealloc;

@end

