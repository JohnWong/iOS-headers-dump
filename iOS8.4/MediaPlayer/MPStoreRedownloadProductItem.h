//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPStoreRedownloadProductItemAsset, NSArray, NSDictionary, NSString;

@interface MPStoreRedownloadProductItem : NSObject
{
    NSDictionary *_responseDictionary;
}

- (void).cxx_destruct;
- (void)_enumerateAssetDictionariesWithBlock:(CDUnknownBlockType)arg1;
- (id)assetForFlavor:(id)arg1;
@property(readonly, nonatomic) MPStoreRedownloadProductItemAsset *firstAsset;
@property(readonly, copy, nonatomic) NSString *fileExtension;
@property(readonly, nonatomic) MPStoreRedownloadProductItemAsset *asset;
@property(readonly, copy, nonatomic) NSArray *allFlavors;
- (id)_initWithResponseDictionary:(id)arg1;

@end

