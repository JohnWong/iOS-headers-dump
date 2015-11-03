//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIBurstYUVImage, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBurstThumbnailCluster : NSObject
{
    NSMutableArray *burstImages;
    NSMutableDictionary *imageProps;
    CIBurstYUVImage *image;
    CDUnknownBlockType completionBlock;
}

@property CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property CIBurstYUVImage *image; // @synthesize image;
@property NSMutableDictionary *imageProps; // @synthesize imageProps;
@property NSMutableArray *burstImages; // @synthesize burstImages;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;
- (void)addItemsFromCluster:(id)arg1;
- (void)releaseImage;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

