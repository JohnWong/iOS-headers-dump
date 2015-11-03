//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKCodeAcquisitionDelegate.h"
#import "PKGroupsControllerDelegate.h"
#import "PKPassGroupStackViewDatasource.h"
#import "PKPassGroupStackViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSTimer, PKGroupsController, PKPassGroupStackView, PKUsageNotificationServer;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKCodeAcquisitionDelegate>
{
    PKGroupsController *_groupsController;
    PKPassGroupStackView *_cardStackView;
    unsigned long long _modalCardIndex;
    _Bool _viewAppeared;
    _Bool _viewAppearedBefore;
    int _presentationState;
    NSTimer *_allowDimmingTimer;
    unsigned long long tick;
    unsigned long long tock;
    NSTimer *_passViewedNotificationTimer;
    _Bool _passesAreOutdated;
    _Bool _backgroundMode;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    PKUsageNotificationServer *_usageServer;
    id <PKPassGroupsViewControllerDelegate> _delegate;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) id <PKPassGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(retain, nonatomic) PKPassGroupStackView *groupStackView; // @synthesize groupStackView=_cardStackView;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)cardsChanged:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAcquirePass:(id)arg2;
- (void)_applyPresentationState;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)groupStackView:(id)arg1 didAnimateToState:(int)arg2;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleApplicationdidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (long long)suppressedContent;
- (_Bool)passesGrowWhenFlipped;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (unsigned long long)indexOfGroup:(id)arg1;
- (double)groupHeightAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)presentGroupWithIndex:(unsigned long long)arg1;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)presentGroupTable;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)wantsFullScreenLayout;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
