//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKGroup, PKGroupsController;

@protocol PKGroupsControllerDelegate <NSObject>
- (void)groupsController:(PKGroupsController *)arg1 didMoveGroup:(PKGroup *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(PKGroupsController *)arg1 didRemoveGroup:(PKGroup *)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(PKGroupsController *)arg1 didInsertGroup:(PKGroup *)arg2 atIndex:(unsigned long long)arg3;
@end

