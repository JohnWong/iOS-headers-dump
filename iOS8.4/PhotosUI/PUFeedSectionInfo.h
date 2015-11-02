//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetContainer.h"

@class NSArray, NSDate, NSIndexSet, NSOrderedSet, NSString, PLCloudFeedEntry, PLCloudSharedAlbumInvitationRecord, PLManagedAsset;

@interface PUFeedSectionInfo : NSObject <PLAssetContainer>
{
    _Bool _loaded;
    _Bool _shouldBeVisibleWhenEmpty;
    NSString *_transientIdentifier;
    PLManagedAsset *_keyAsset;
    PLManagedAsset *_secondaryKeyAsset;
    PLManagedAsset *_tertiaryKeyAsset;
    PLCloudFeedEntry *_cloudFeedEntry;
    long long _sectionType;
    NSDate *_date;
    id <PLCloudSharedAlbumProtocol> _sharedAlbum;
    NSString *_albumTitle;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    long long _numberOfItems;
    NSIndexSet *_excludedAssetIndexes;
}

+ (void)endCachingSharedAlbumsByGUIDs;
+ (void)beginCachingSharedAlbumsByGUIDs;
+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;
@property(copy, nonatomic) NSIndexSet *excludedAssetIndexes; // @synthesize excludedAssetIndexes=_excludedAssetIndexes;
@property(nonatomic) _Bool shouldBeVisibleWhenEmpty; // @synthesize shouldBeVisibleWhenEmpty=_shouldBeVisibleWhenEmpty;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord; // @synthesize invitationRecord=_invitationRecord;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) id <PLCloudSharedAlbumProtocol> sharedAlbum; // @synthesize sharedAlbum=_sharedAlbum;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic) PLCloudFeedEntry *cloudFeedEntry; // @synthesize cloudFeedEntry=_cloudFeedEntry;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @synthesize tertiaryKeyAsset=_tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // @synthesize secondaryKeyAsset=_secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
- (id)sharedAlbumWithGUID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
- (long long)indexOfItemWithComment:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (_Bool)containsAsset:(id)arg1;
- (_Bool)areAllAssetsLiked;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (_Bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (void)reload;
- (id)initWithCloudFeedEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

