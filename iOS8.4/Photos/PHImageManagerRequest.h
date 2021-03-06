//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSString, PLCPLDownloadContext, PLPreheatItem;

@interface PHImageManagerRequest : NSObject
{
    _Bool _cancelled;
    long long _originalImageOrientation;
    _Bool _CPLDownloadDegraded;
    _Bool _isCloudSharedAsset;
    _Bool _isPartOfBurst;
    int _requestID;
    int _registrationRefCount;
    NSString *_pathForAdjustmentFile;
    id <_PLImageLoadingAsset> _asset;
    id _domain;
    CDUnknownBlockType _cancellationHandler;
    PLCPLDownloadContext *_CPLDownloadContext;
    NSObject<OS_dispatch_group> *_CPLDownloadWaitGroup;
    PHImageManagerRequest *_nextRequest;
    PLPreheatItem *_transientPreheatlItem;
    NSString *_assetUUID;
    long long _cloudSharedAssetPlaceholderKind;
    NSString *_debugFilename;
}

@property(readonly, nonatomic) NSString *debugFilename; // @synthesize debugFilename=_debugFilename;
@property(readonly, nonatomic) _Bool isPartOfBurst; // @synthesize isPartOfBurst=_isPartOfBurst;
@property(readonly, nonatomic) long long cloudSharedAssetPlaceholderKind; // @synthesize cloudSharedAssetPlaceholderKind=_cloudSharedAssetPlaceholderKind;
@property(readonly, nonatomic) _Bool isCloudSharedAsset; // @synthesize isCloudSharedAsset=_isCloudSharedAsset;
@property(readonly, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property(retain) PLPreheatItem *transientPreheatlItem; // @synthesize transientPreheatlItem=_transientPreheatlItem;
@property(retain) PHImageManagerRequest *nextRequest; // @synthesize nextRequest=_nextRequest;
@property(readonly, nonatomic) int registrationRefCount; // @synthesize registrationRefCount=_registrationRefCount;
@property(retain) NSObject<OS_dispatch_group> *CPLDownloadWaitGroup; // @synthesize CPLDownloadWaitGroup=_CPLDownloadWaitGroup;
@property(retain) PLCPLDownloadContext *CPLDownloadContext; // @synthesize CPLDownloadContext=_CPLDownloadContext;
@property _Bool CPLDownloadDegraded; // @synthesize CPLDownloadDegraded=_CPLDownloadDegraded;
@property(copy) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(readonly, nonatomic) id domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) id <_PLImageLoadingAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)clearResultHandler;
@property(readonly, nonatomic) NSString *pathForAdjustmentFile; // @synthesize pathForAdjustmentFile=_pathForAdjustmentFile;
- (int)decrementRegistrationRefCount;
- (int)incrementRegistrationRefCount;
- (_Bool)atomicDecrementRegistrationRefCountIfOne;
- (_Bool)atomicIncrementRegistrationRefCountIfZero;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (void)setCancelled:(_Bool)arg1;
- (_Bool)isCancelled;
@property(readonly, nonatomic) _Bool isVideo;
- (long long)originalImageOrientation;
- (id)initRequestWithAsset:(id)arg1 domain:(id)arg2;
- (id)init;

@end

