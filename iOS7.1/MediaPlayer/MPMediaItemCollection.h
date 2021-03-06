//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaEntity.h>

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity
{
    unsigned long long _containedMediaTypes;
    NSArray *_items;
    unsigned long long _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

+ (id)representativePersistentIDPropertyForGroupingType:(long long)arg1;
+ (id)sortTitlePropertyForGroupingType:(long long)arg1;
+ (id)titlePropertyForGroupingType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)collectionWithItems:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mediaTypes;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) MPMediaItem *representativeItem;
@property(readonly, nonatomic) NSArray *items;
- (id)itemsQuery;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)initWithItemsQuery:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;
- (id)SAMPMediaEntityRepresentation;
- (id)SAMPCollectionRepresentationWithItems;
- (id)SAMPCollectionRepresentation;
- (long long)groupingType;
- (_Bool)MPSD_hasDownloadingItem;
- (_Bool)MPSD_hasDownloadableItem;

@end

