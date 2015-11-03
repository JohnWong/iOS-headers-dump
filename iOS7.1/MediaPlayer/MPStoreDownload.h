//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, SSDownload, SSPurchase, SSPurchaseResponse;

@interface MPStoreDownload : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_attributes;
    _Bool _canceled;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    long long _type;
}

+ (id)_storeDownloadForMediaItem:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)_storeDownloadForCompletionOffer:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)_SSPurchaseForType:(long long)arg1 attributes:(id)arg2 buyParameters:(id)arg3 purchaseValuesForDownloadProperties:(id)arg4 URLBagKeyOverride:(id)arg5;
+ (id)storeDownloadForCompletionOffering:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadsForRadioTracks:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2;
+ (id)storeDownloadsForMediaQuery:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadsForMediaItems:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)_valueForDownloadProperty:(id)arg1;
- (id)_SSPurchaseResponse;
- (id)_SSPurchase;
- (id)_SSDownload;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (void)_setSSDownload:(id)arg1;
- (void)_setCanceled:(_Bool)arg1;
- (_Bool)_isCanceled;
@property(readonly, nonatomic) long long storeItemIdentifier;
@property(readonly, nonatomic) NSError *purchaseError;
@property(readonly, nonatomic) NSString *phaseIdentifier;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) unsigned long long libraryItemIdentifier;
@property(readonly, nonatomic, getter=isRestore) _Bool restore;
@property(readonly, nonatomic, getter=isPurchasing) _Bool purchasing;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
@property(readonly, nonatomic) NSError *failureError;
@property(readonly, nonatomic) long long downloadIdentifier;
@property(readonly, nonatomic) long long bytesTotal;
@property(readonly, nonatomic) long long bytesDownloaded;
- (id)description;
- (id)initWithType:(long long)arg1 attributes:(id)arg2;

@end

