//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIContext, EAGLContext, NSObject<OS_dispatch_queue>, UIImage;

@interface PUPhotoFilterThumbnailRenderer : NSObject
{
    UIImage *_inputImage;
    NSObject<OS_dispatch_queue> *__renderQueue;
    CIContext *__ciContext;
    EAGLContext *__eaglContext;
    UIImage *__thumbnailImage;
}

@property(retain, nonatomic, setter=_setThumbnailImage:) UIImage *_thumbnailImage; // @synthesize _thumbnailImage=__thumbnailImage;
@property(retain, nonatomic, setter=_setEaglContext:) EAGLContext *_eaglContext; // @synthesize _eaglContext=__eaglContext;
@property(retain, nonatomic, setter=_setCiContext:) CIContext *_ciContext; // @synthesize _ciContext=__ciContext;
@property(retain, nonatomic, setter=_setRenderQueue:) NSObject<OS_dispatch_queue> *_renderQueue; // @synthesize _renderQueue=__renderQueue;
@property(readonly, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)_renderThumbnailWithFilter:(id)arg1;
- (void)_renderBaseThumbnailIfNeededOfSize:(struct CGSize)arg1;
- (void)_requestThumbnailsWithFilters:(id)arg1 size:(struct CGSize)arg2 singleCompletion:(CDUnknownBlockType)arg3 fullCompletion:(CDUnknownBlockType)arg4;
- (void)requestThumbnailsWithFilters:(id)arg1 size:(struct CGSize)arg2 singleCompletion:(CDUnknownBlockType)arg3;
- (void)requestThumbnailsWithFilters:(id)arg1 size:(struct CGSize)arg2 fullCompletion:(CDUnknownBlockType)arg3;
- (id)initWithInputImage:(id)arg1;
- (id)init;

@end

