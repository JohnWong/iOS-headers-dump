//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKGroupsControllerDelegate.h"
#import "PKPassGroupStackViewDatasource.h"
#import "PKPassGroupStackViewDelegate.h"
#import "PKServiceAddPassesViewControllerProtocol.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableData, NSString, NSURLConnection, PKGroupsController, PKPassGroupStackView, UINavigationBar, UIProgressView;

@interface PKServiceAddPassesViewController : UIViewController <PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKGroupsControllerDelegate, UIScrollViewDelegate, PKServiceAddPassesViewControllerProtocol>
{
    NSURLConnection *_downloadPassURLConnection;
    long long _downloadPassExpectedBytes;
    NSMutableData *_downloadPassData;
    _Bool _allowsPassIngestion;
    _Bool _alreadyAdding;
    long long _groupLoadState;
    CDUnknownBlockType _loadedGroupsCallback;
    _Bool _haveStartedCardAnimation;
    _Bool _viewAppeared;
    NSMutableArray *_localPasses;
    NSArray *_localPassDatas;
    UINavigationBar *_navigationBar;
    PKPassGroupStackView *_cardStackView;
    PKGroupsController *_groupsController;
    NSMutableArray *_minimumCardHeightFromHereToTop;
    long long _presentationState;
    UIProgressView *_progressView;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (_Bool)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(retain, nonatomic) NSMutableArray *minimumCardHeightFromHereToTop; // @synthesize minimumCardHeightFromHereToTop=_minimumCardHeightFromHereToTop;
@property(retain, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property(retain, nonatomic) PKPassGroupStackView *cardStackView; // @synthesize cardStackView=_cardStackView;
@property(retain) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool haveStartedCardAnimation; // @synthesize haveStartedCardAnimation=_haveStartedCardAnimation;
@property(retain, nonatomic) NSArray *localPassDatas; // @synthesize localPassDatas=_localPassDatas;
@property(retain, nonatomic) NSMutableArray *localPasses; // @synthesize localPasses=_localPasses;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;
- (unsigned long long)suppressedContent;
- (_Bool)passesGrowWhenFlipped;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)loadGroups;
- (void)cancelCard:(id)arg1;
- (void)_acceptCard:(id)arg1;
- (void)acceptCard:(id)arg1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)ingestPasses:(id)arg1;
- (void)ingestCardAtURL:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)tearDownDownloadConnection;
- (void)showDownloadingPassUI;
- (void)updateAddButtonAndSettings;
- (void)updateAddButton;
- (void)updateCancelButton;
- (id)genericTitleWithCount:(unsigned long long)arg1;
- (id)styleTitleUsingPass:(id)arg1 count:(unsigned long long)arg2;
- (void)updateNavTitle;
- (void)setAllowsPassIngestion:(_Bool)arg1;
- (void)animateInCardIfNeeded;
- (void)dealloc;
- (void)tearDown;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

