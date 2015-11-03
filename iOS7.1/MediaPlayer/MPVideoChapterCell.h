//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MPImageCache, MPTimeMarker, MPVideoChapterCellContentView;

@interface MPVideoChapterCell : UITableViewCell
{
    MPVideoChapterCellContentView *_chapterContentView;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) MPImageCache *artworkImageCache;
@property(retain, nonatomic) MPTimeMarker *timeMarker;
@property(nonatomic) double timeColumnWidth;
@property(nonatomic) _Bool showThumbnailColumn;
@property(nonatomic) unsigned long long index;
@property(nonatomic, getter=isCurrent) _Bool current;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

