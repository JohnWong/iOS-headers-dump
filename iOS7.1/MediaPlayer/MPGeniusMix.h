//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPStoreDownloadManagerObserver.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MPMediaPlaylist, MPMediaQuery, NSArray, NSString;

@interface MPGeniusMix : NSObject <MPStoreDownloadManagerObserver, NSSecureCoding, NSCopying>
{
    MPMediaPlaylist *_playlist;
    MPMediaQuery *_seedTracksQuery;
    NSArray *_representativeArtists;
    NSArray *_representativeImageItems;
}

+ (id)artworkImageForMediaItem:(id)arg1 scaleMode:(int)arg2;
+ (id)artworkImageForMediaItem:(id)arg1;
+ (id)artworkCacheDirectoryPath;
+ (_Bool)supportsSecureCoding;
+ (id)mixQueue;
@property(readonly, nonatomic) MPMediaPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (id)_representativeImageItemsWithMaxCount:(unsigned long long)arg1;
- (unsigned long long)_entityArtworkCacheHashForRepresentativeItems:(id)arg1 ensureItemArtworkFilesExist:(_Bool)arg2;
- (id)_cachedRepresentativeImagePathWithTileLength:(double)arg1;
- (id)_cacheDirectoryPath;
@property(readonly, nonatomic) MPMediaQuery *seedTracksQuery;
- (id)loadRepresentativeImageWithTileLength:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)preloadRepresentativeImageWithTileLength:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_alreadyLoadedRepresentativeImageWithTileLength:(double)arg1 loadCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_generateMixImageWithTileLength:(double)arg1 imageDidLoadBlock:(CDUnknownBlockType)arg2;
- (_Bool)_observeMixImageLoadingWithImageDidLoadBlock:(CDUnknownBlockType)arg1;
- (void)_onQueueLoadRepresentativeImageWithTileLength:(double)arg1;
- (id)_placeholderMixImageWithTileLength:(double)arg1;
- (id)_placeholderImageWithTileLength:(double)arg1;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
@property(readonly, nonatomic) NSArray *representativeArtists;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isDownloading;
@property(readonly, nonatomic) _Bool isCloudMix;
@property(readonly, nonatomic) float downloadProgress;
- (void)downloadMixWithPermissionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canPlayUsingNetworkType:(long long)arg1;
- (void)cancelDownload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithMPMediaPlaylist:(id)arg1;

@end

