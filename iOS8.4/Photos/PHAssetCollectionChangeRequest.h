//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHInsertChangeRequest.h"
#import "PHUpdateChangeRequest.h"

@class NSManagedObjectID, NSString, PHAssetCollection, PHChangeRequestHelper, PHCollectionChangeRequestHelper, PHObjectPlaceholder;

@interface PHAssetCollectionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHAssetCollection *_originalAssetCollection;
    _Bool _entitled;
    NSString *_clientName;
    int _clientProcessID;
    PHChangeRequestHelper *_helper;
    PHCollectionChangeRequestHelper *_assetsHelper;
}

+ (void)deleteAssetCollections:(id)arg1;
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;
+ (id)changeRequestForAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHCollectionChangeRequestHelper *assetsHelper; // @synthesize assetsHelper=_assetsHelper;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) PHAssetCollection *originalAssetCollection; // @synthesize originalAssetCollection=_originalAssetCollection;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitled) _Bool entitled; // @synthesize entitled=_entitled;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)didMutate;
- (id)mutations;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, getter=isNew) _Bool new;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)canGenerateUUIDLocally;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)removeAssets:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1;
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalAssetCollection:(id)arg1;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 entitled:(_Bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

