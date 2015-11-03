//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityLocation : NSObject <NSCopying>
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    _Bool _isDirectory;
    unsigned long long _hash;
    _Bool _isRootUbiquitous;
}

+ (void)setLocationSentinel:(id)arg1;
+ (id)localLocationSentinel;
+ (id)locationSentinel;
+ (id)createStringByAppendingSubpath:(id)arg1 toPath:(id)arg2;
+ (id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id *)arg2;
+ (id)createLocalBasePathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createLocalContainerRootLocationWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createLocalStoresPathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (_Bool)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2;
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1;
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3;
+ (id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1;
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createUbiquityExternalDataReferenceStoreLocationForStoreName:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5;
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1;
+ (id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 peerID:(id)arg3 andModelVersionHash:(id)arg4 forFileNamed:(id)arg5 withUbiquityRootLocation:(id)arg6;
+ (id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createMetadataStoreFileLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1;
+ (id)createVersionHashStringForModel:(id)arg1;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForRootURL:(id)arg1;
+ (id)createUbiquityLocationForRootPath:(id)arg1 checkIsUbiquitous:(_Bool)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(readonly, nonatomic) _Bool isRootUbiquitous; // @synthesize isRootUbiquitous=_isRootUbiquitous;
@property(readonly, nonatomic) NSArray *otherPathComponents; // @synthesize otherPathComponents=_otherPathComponents;
@property(readonly, nonatomic) unsigned long long hash; // @synthesize hash=_hash;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *exportingPeerID; // @synthesize exportingPeerID=_exportingPeerID;
@property(readonly, nonatomic) int ubiquityLocationType; // @synthesize ubiquityLocationType=_ubiquityLocationType;
- (_Bool)isEqualToURL:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *ubiquityRootLocationPath; // @synthesize ubiquityRootLocationPath=_ubiquityRootLocationPath;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
- (void)updateHash;
- (void)setIsRootUbiquitous:(_Bool)arg1;
- (void)setHash:(unsigned long long)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;
- (void)setOtherPathComponents:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setModelVersionHash:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setExportingPeerID:(id)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (id)createFullURL;
- (id)createFullPath;
- (id)createRelativePath;
- (_Bool)removeFileAtLocation:(id)arg1 error:(id *)arg2;
- (_Bool)fileAtLocationIsDownloaded:(id *)arg1;
- (_Bool)fileAtLocationIsUploaded:(id *)arg1;
- (_Bool)fileExistsAtLocationWithLocalPeerID:(id)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtLocation;
- (_Bool)__isDirectory;
@property(readonly, nonatomic, getter=isTransactionLogLocation) _Bool isTransactionLogLocation;
@property(readonly, nonatomic) _Bool usesNosyncDirectory;
@property(readonly, nonatomic) _Bool usesBaselineDirectory;
@property(readonly, nonatomic) _Bool usesBaselineStagingDirectory;
@property(readonly, nonatomic) _Bool usesCurrentBaselineDirectory;
@property(readonly, nonatomic) _Bool usesTemporaryLogDirectory;
@property(readonly, nonatomic) _Bool usesStagingLogDirectory;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUbiquityRootURL:(id)arg1;
- (id)initWithUbiquityRootPath:(id)arg1;
- (id)init;

@end

