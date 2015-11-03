//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSMutableArray, NSMutableDictionary;

@interface ABCachingTableView : UITableView
{
    _Bool _cellsLayoutCachingEnabled;
    NSMutableArray *_cellsToBeReusedOnDealloc;
    NSMutableDictionary *_cellsReusedByIndex;
}

+ (void)cacheCell:(id)arg1 editing:(_Bool)arg2;
@property(retain, nonatomic) NSMutableDictionary *cellsReusedByIndex; // @synthesize cellsReusedByIndex=_cellsReusedByIndex;
@property(retain, nonatomic) NSMutableArray *cellsToBeReusedOnDealloc; // @synthesize cellsToBeReusedOnDealloc=_cellsToBeReusedOnDealloc;
@property(nonatomic, getter=isCellsLayoutCachingEnabled) _Bool cellsLayoutCachingEnabled; // @synthesize cellsLayoutCachingEnabled=_cellsLayoutCachingEnabled;
- (Class)_cellClassForIdentifier:(id)arg1;
- (void)_invalidateCellsByIndex;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1;
- (void)beginUpdates;
- (void)reloadData;
- (void)cacheCellsForReuse;
- (id)cachedCellForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(nonatomic, getter=isEditing) _Bool editing;

@end

