//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPPlaceholderArtwork : NSObject
{
}

+ (struct CGSize)unscaledArtworkSizeForFormatID:(unsigned int)arg1;
+ (unsigned int)currentScreenFormatIDFrom1XFormatID:(unsigned int)arg1;
+ (id)scaleImage:(id)arg1 withFormat:(unsigned int)arg2;
+ (id)padNoArtPlaceholderImageForMediaType:(unsigned long long)arg1 size:(struct CGSize)arg2;
+ (id)padNoArtPlaceholderVideoImageForSize:(struct CGSize)arg1;
+ (id)padNoArtPlaceholderAudioBookImageForSize:(struct CGSize)arg1;
+ (id)padNoArtPlaceholderPodcastImageForSize:(struct CGSize)arg1;
+ (id)padNoArtPlaceholderMusicImageForSize:(struct CGSize)arg1;
+ (id)noArtPlaceholderImageForMediaType:(unsigned long long)arg1 size:(struct CGSize)arg2;
+ (id)noArtPlaceholderImageForMediaType:(unsigned long long)arg1;
+ (id)noArtPlaceholderVideoImage;
+ (id)noArtPlaceholderAudioBookImage;
+ (id)noArtPlaceholderPodcastImage;
+ (id)noArtMusicPlaceholderMusicImageForSize:(struct CGSize)arg1;
+ (id)noArtPlaceholderMusicImageForSize:(struct CGSize)arg1;
+ (id)noArtPlaceholderMusicImage;
- (_Bool)isPlaceholder:(id)arg1;

@end

