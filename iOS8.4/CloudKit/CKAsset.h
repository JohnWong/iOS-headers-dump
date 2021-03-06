//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKRecordValue.h"
#import "NSSecureCoding.h"

@class CKRecord, CKRecordID, NSData, NSDate, NSNumber, NSString, NSURL;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding>
{
    _Bool _wasCached;
    _Bool _hasSize;
    _Bool _uploaded;
    _Bool _downloaded;
    NSURL *_fileURL;
    NSData *_signature;
    unsigned long long _size;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationCountToSave;
    NSString *_assetHandleUUID;
    NSURL *_downloadURL;
    NSDate *_downloadURLExpiration;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_referenceSignature;
    NSString *_uploadReceipt;
    long long _arrayIndex;
    CKRecordID *_recordID;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    NSData *_authRequest;
    NSData *_inlineData;
    NSString *_downloadBaseURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)assetWithFileURL:(id)arg1;
@property(retain, nonatomic) NSString *downloadBaseURL; // @synthesize downloadBaseURL=_downloadBaseURL;
@property(copy, nonatomic) NSData *inlineData; // @synthesize inlineData=_inlineData;
@property(copy, nonatomic) NSData *authRequest; // @synthesize authRequest=_authRequest;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(copy, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) long long arrayIndex; // @synthesize arrayIndex=_arrayIndex;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) _Bool uploaded; // @synthesize uploaded=_uploaded;
@property(nonatomic) _Bool hasSize; // @synthesize hasSize=_hasSize;
@property(nonatomic) _Bool wasCached; // @synthesize wasCached=_wasCached;
@property(copy, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;
@property(retain, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(retain, nonatomic) NSDate *downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) NSString *assetHandleUUID; // @synthesize assetHandleUUID=_assetHandleUUID;
@property(retain, nonatomic) NSNumber *generationCountToSave; // @synthesize generationCountToSave=_generationCountToSave;
@property(readonly, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3;
- (id)_initBare;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

