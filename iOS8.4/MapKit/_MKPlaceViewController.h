//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKStackingViewController.h>

#import "ABContactViewControllerDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "MKActivityViewControllerDelegate.h"
#import "MKPlaceActionsViewControllerDelegate.h"
#import "MKPlaceCardPhotosControllerDelegate.h"
#import "MKPlaceCardReviewsControllerDelegate.h"
#import "MKPlaceHeaderViewDelegate.h"
#import "MKPlaceInfoViewControllerDelegate.h"
#import "MKPlaceNearbyAppsViewControllerDelegate.h"
#import "MKPlaceSharedAttributionDelegate.h"
#import "MKStackingViewControllerDelegate.h"
#import "SKProductPageViewControllerDelegate.h"

@class ABPeoplePickerNavigationController<ABContactViewControllerDelegate>, CNContact, MKDistanceDetailProvider, MKMapItem, MKPlaceActionsViewController, MKPlaceHeaderView, MKPlaceInfoViewController, MKPlaceNearbyAppsMetricsCoordinator, MKSegmentedControlTabBarView, NSArray, NSMapTable, NSMutableArray, NSString, SKProductPageViewController, UITapGestureRecognizer;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, MKPlaceSharedAttributionDelegate, MKPlaceNearbyAppsViewControllerDelegate, SKProductPageViewControllerDelegate, MKPlaceHeaderViewDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceActionsViewControllerDelegate>
{
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceActionsViewController *_actionsViewController;
    UITapGestureRecognizer *_flyoverTourTapRecognizer;
    _Bool _isSearchingForNearbyApps;
    SKProductPageViewController *_storePageViewController;
    NSArray *_storeItems;
    void *_addressBook;
    void *_originalContactRecordCopy;
    NSMapTable *_additionalViewControllers;
    _Bool _overrideDefaultShowRAP;
    _Bool _hasContactOnlyMapItem;
    _Bool _hasCheckedDistanceAvailability;
    _Bool _showContactActions;
    NSString *_headerTitle;
    MKPlaceHeaderView *_placeHeaderView;
    MKSegmentedControlTabBarView *_tabBar;
    MKDistanceDetailProvider *_distanceMonitor;
    MKMapItem *_mapItem;
    CNContact *_contact;
    CNContact *_originalContact;
    id <_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
    id <_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
    unsigned long long _options;
    double _headerHeight;
    MKPlaceNearbyAppsMetricsCoordinator *_metricsCoordinator;
    ABPeoplePickerNavigationController<ABContactViewControllerDelegate> *_contactsNavigationController;
    NSMutableArray *_viewDidAppearBlocks;
}

@property(retain, nonatomic) NSMutableArray *viewDidAppearBlocks; // @synthesize viewDidAppearBlocks=_viewDidAppearBlocks;
@property(nonatomic) __weak ABPeoplePickerNavigationController<ABContactViewControllerDelegate> *contactsNavigationController; // @synthesize contactsNavigationController=_contactsNavigationController;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) _Bool showContactActions; // @synthesize showContactActions=_showContactActions;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate; // @synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate;
@property(nonatomic) __weak id <_MKPlaceViewControllerDelegate> placeViewControllerDelegate; // @synthesize placeViewControllerDelegate=_placeViewControllerDelegate;
@property(retain, nonatomic) CNContact *originalContact; // @synthesize originalContact=_originalContact;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) _Bool hasCheckedDistanceAvailability; // @synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability;
@property(retain, nonatomic) MKDistanceDetailProvider *distanceMonitor; // @synthesize distanceMonitor=_distanceMonitor;
@property(retain, nonatomic) MKSegmentedControlTabBarView *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) MKPlaceHeaderView *placeHeaderView; // @synthesize placeHeaderView=_placeHeaderView;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)_openAppWithBundleID:(id)arg1;
- (void)_displayAppWithMetadata:(id)arg1;
- (void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
@property(readonly, nonatomic) MKPlaceNearbyAppsMetricsCoordinator *metricsCoordinator; // @synthesize metricsCoordinator=_metricsCoordinator;
- (void)_findNearbyAppsAtCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_searchForNearbyApps;
- (void)_searchForNearbyAppsIfNecessary;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)_removeMapsDataFromContactWithRecordID:(int)arg1;
- (void)actionsViewControllerSimulateLocation:(id)arg1;
- (void)actionsViewControllerOpenInSkyline:(id)arg1;
- (void)actionsViewControllerCreateReminder:(id)arg1;
- (void)actionsViewControllerShare:(id)arg1;
- (void)actionsViewControllerRemovePin:(id)arg1;
- (void)actionsViewControllerReportAProblem:(id)arg1;
- (void)actionsViewControllerAddContactToExistingContact:(id)arg1;
- (void)actionsViewControllerCreateNewContact:(id)arg1;
- (void)updateActionVisibility;
- (_Bool)shouldShowFlyoverTourForInfoViewController:(id)arg1;
- (_Bool)shouldShowDirectionsForInfoViewController:(id)arg1;
- (_Bool)shouldShowInlineMapForInfoViewController:(id)arg1;
- (void)_showShareSheet:(id)arg1;
- (void)_showEditSheet:(id)arg1;
- (id)_contactForEditOperations;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;
- (void)_openInfoAttribution;
- (void)openInfoAttribution;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithID:(id)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1;
- (void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1;
- (void)infoViewController:(id)arg1 didSelectDeal:(id)arg2;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (_Bool)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (void)restartHeaderViewAnimations;
- (void)resetHeaderViewAnimations;
- (void)resetHeaderView;
- (void)presentHeaderView;
- (void)stackingViewControllerDidEndScroll:(id)arg1;
- (void)stackingViewControllerWillBeginScroll:(id)arg1;
- (void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(struct CATransform3D)arg2;
- (double)stackingViewControllerHeightForHeaderView:(id)arg1;
- (void)_switchToTabAtIndex:(long long)arg1;
- (_Bool)headerViewshouldShowTitleSubtitleAndStarRatings:(id)arg1;
- (void)headerView:(id)arg1 didFinishLoadingBackgroundViewOfType:(long long)arg2;
- (void)_setupHeaderView;
- (void)_tappedForFlyoverTour;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)removeAdditionalViewController:(id)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;
- (long long)_sectionPositionForMapTableKey:(id)arg1;
- (id)_mapTableKeyForSectionPosition:(long long)arg1;
- (id)additionalViewControllersAtPosition:(long long)arg1;
- (void)setContact:(id)arg1;
- (void)_didResolveAttribution:(id)arg1;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(_Bool)arg3;
- (void)_updateViewControllers;
- (void)_setViewControllersWithInformationViewControllers:(id)arg1;
- (_Bool)_showReportAProblem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 numberOfReviews:(unsigned long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithMapItem:(id)arg1;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2;
- (id)init;
@property(nonatomic) _Bool showShareActionsButton;
@property(nonatomic) _Bool showOpenInSkyline;
@property(nonatomic) _Bool showSimulateLocation;
@property(nonatomic) _Bool showCreateReminder;
@property(nonatomic) _Bool disableReportAProblem;
@property(nonatomic) _Bool showReportAProblem;
@property(nonatomic) _Bool showFlyoverTour;
@property(nonatomic) _Bool showNearbyApps;
@property(nonatomic) _Bool showRemovePin;
@property(nonatomic) _Bool showInlineMapInHeader;
@property(nonatomic) _Bool hideInlineMap;
@property(nonatomic) _Bool showEditButton;
@property(nonatomic) _Bool hideDirectionsButtons;
@property(nonatomic) _Bool showTitleBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

