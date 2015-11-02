//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPersonLinkingUIDelegate.h"

@class ABPersonTableViewDataSource, ABPersonViewControllerHelper, NSArray, NSMutableArray;

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate>
{
    NSMutableArray *_linkedInfos;
    long long _currentIndexInLinkedInfos;
    _Bool _ignoresReloadLinkedInfos;
    _Bool _shouldAllowLinkingAnotherContact;
    _Bool _hasLinkChanges;
    _Bool _shouldShowLinkingUIOnCard;
    _Bool _showsLinkedPeople;
    _Bool _appearsInLinkingPeoplePicker;
    _Bool _updateShouldAllowLinkingAnotherContact;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonViewControllerHelper *_helper;
}

@property(nonatomic) _Bool updateShouldAllowLinkingAnotherContact; // @synthesize updateShouldAllowLinkingAnotherContact=_updateShouldAllowLinkingAnotherContact;
@property(nonatomic) _Bool appearsInLinkingPeoplePicker; // @synthesize appearsInLinkingPeoplePicker=_appearsInLinkingPeoplePicker;
@property(nonatomic) _Bool shouldShowLinkedPeople; // @synthesize shouldShowLinkedPeople=_showsLinkedPeople;
@property(nonatomic) _Bool shouldShowLinkingUIOnCard; // @synthesize shouldShowLinkingUIOnCard=_shouldShowLinkingUIOnCard;
@property(readonly, nonatomic) NSArray *linkedInfos; // @synthesize linkedInfos=_linkedInfos;
@property(readonly, nonatomic) _Bool hasLinkChanges; // @synthesize hasLinkChanges=_hasLinkChanges;
@property(readonly, nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;
@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)newPeoplePickerForLinking;
- (id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;
- (_Bool)shouldAllowLinkingPersonWithRecordID:(int)arg1;
- (_Bool)shouldAllowLinkingAnotherContact;
- (id)sourceNameForCardAtRow:(long long)arg1;
- (id)personNameForCardAtRow:(long long)arg1;
- (_Bool)canUnlinkCardAtRow:(long long)arg1;
- (long long)numberOfLinkedCardRows;
- (_Bool)manuallyUnlinkCardAtRow:(long long)arg1;
- (void)_finalizeLinkChanges;
- (_Bool)manuallyLinkPerson:(id)arg1;
- (id)allNonUnifiedPeople;
- (void)reloadLinkingUI;
- (_Bool)reloadLinkedInfos;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(long long)arg2;
- (id)newLinkedInfoForPerson:(id)arg1;
- (id)linkedInfoAtRow:(long long)arg1;
- (long long)indexOfLinkedInfoAtRow:(long long)arg1;
- (id)sourceNameForCurrentCard;
- (_Bool)isLinkedCard;
- (_Bool)shouldIncludeLinkingUISectionWhenEditing:(_Bool)arg1;
- (void)dealloc;
- (id)initWithHelper:(id)arg1;

@end

