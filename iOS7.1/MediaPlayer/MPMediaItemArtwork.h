//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface MPMediaItemArtwork : NSObject
{
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect imageCropRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)albumImageDataWithSize:(struct CGSize)arg1;
- (id)albumImageWithSize:(struct CGSize)arg1;
- (id)imageDataWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize)arg1;
- (_Bool)hasArtworkAvailable;
- (id)initWithImage:(id)arg1;

@end

