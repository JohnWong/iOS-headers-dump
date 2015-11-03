//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetPrivate;

@interface ALAsset : NSObject
{
    id _internal;
}

+ (struct CGSize)largePreviewImageSizeForSize:(struct CGSize)arg1;
@property(retain, nonatomic) ALAssetPrivate *internal; // @synthesize internal=_internal;
- (void)requestDefaultRepresentation;
- (void)setLargePreviewImageWithImageData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setVideoAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isDeletable;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic) ALAsset *originalAsset;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGImage *)aspectRatioThumbnail;
- (struct CGImage *)thumbnail;
- (id)representationForUTI:(id)arg1;
- (id)defaultRepresentation;
- (void)setExternalUsageIntent:(unsigned long long)arg1;
- (id)valueForProperty:(id)arg1;
- (_Bool)isValid;
- (id)description;
- (id)_uuid;
- (id)_typeAsString;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;

@end

