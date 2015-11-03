//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItemArtwork.h>

#import "NSCoding.h"

@class MPMediaLibrary;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork <NSCoding>
{
    unsigned long long _itemPersistentID;
    MPMediaLibrary *_library;
    struct CGRect _bounds;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_cacheIDAtPlaybackTime:(double)arg1;
- (id)_imageDataForSize:(struct CGSize)arg1 playbackTime:(double)arg2;
- (id)_imageForSize:(struct CGSize)arg1 artworkCacheID:(id)arg2 playbackTime:(double)arg3 scaleToSize:(_Bool)arg4;
- (id)_imageWithFormat:(long long)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(_Bool)arg3 scaleToSize:(struct CGSize)arg4;
- (_Bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(struct CGSize)arg2 artworkCacheID:(id)arg3;
- (_Bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(long long)arg2 artworkCacheID:(id)arg3;
- (struct CGRect)imageCropRect;
- (struct CGRect)bounds;
- (id)albumImageDataWithSize:(struct CGSize)arg1;
- (id)albumImageWithSize:(struct CGSize)arg1;
- (id)imageDataWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize)arg1 artworkCacheID:(id)arg2;
- (id)imageWithFormat:(long long)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(_Bool)arg3;
- (_Bool)hasArtworkAvailable;
- (id)_initWithItem:(id)arg1;

@end
