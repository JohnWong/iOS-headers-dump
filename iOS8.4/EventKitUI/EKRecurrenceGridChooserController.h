//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKRecurrenceChooserController.h>

#import "EKUIDividedGridViewControllerDelegate.h"

@class EKUIDividedGridViewTableViewCell, NSString;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate>
{
    EKUIDividedGridViewTableViewCell *_tableViewCell;
}

- (void).cxx_destruct;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)refreshCells;
- (void)prepareForDisplay;
- (long long)gridViewType;
- (id)cellLabels;
- (_Bool)drawBackgroundForRow:(long long)arg1;
- (void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3;
- (void)dividedGridViewControllerDidLayout:(id)arg1;
- (double)heightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (id)allCells;
- (id)tableViewCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

