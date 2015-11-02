//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject
{
    NSArray *_validSizes;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    ML3Artwork *_artwork;
}

+ (void)cancelFetchingArtworkForRequest:(id)arg1;
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)availableArtworkWithRequest:(id)arg1;
+ (_Bool)needsToFetchArtworkForRequest:(id)arg1;
+ (_Bool)artworkExistsForRequest:(id)arg1;
@property(retain, nonatomic) ML3Artwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) __weak MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *effectsMetadata;
@property(readonly, nonatomic) NSArray *validSizes; // @synthesize validSizes=_validSizes;
- (id)imageFileURLForSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSURL *originalFileURL;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
