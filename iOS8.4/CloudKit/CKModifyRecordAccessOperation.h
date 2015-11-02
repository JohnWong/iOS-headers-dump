//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordAccessOperation : CKDatabaseOperation
{
    CDUnknownBlockType _recordAccessGrantedBlock;
    CDUnknownBlockType _recordAccessRevokedBlock;
    CDUnknownBlockType _recordAccessCompletionBlock;
    NSArray *_recordIDsToGrant;
    NSArray *_recordIDsToRevoke;
    NSMutableDictionary *_recordErrors;
    NSMutableArray *_grantedRecordIDs;
    NSMutableArray *_revokedRecordIDs;
}

@property(retain, nonatomic) NSMutableArray *revokedRecordIDs; // @synthesize revokedRecordIDs=_revokedRecordIDs;
@property(retain, nonatomic) NSMutableArray *grantedRecordIDs; // @synthesize grantedRecordIDs=_grantedRecordIDs;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(retain, nonatomic) NSArray *recordIDsToRevoke; // @synthesize recordIDsToRevoke=_recordIDsToRevoke;
@property(retain, nonatomic) NSArray *recordIDsToGrant; // @synthesize recordIDsToGrant=_recordIDsToGrant;
@property(copy, nonatomic) CDUnknownBlockType recordAccessCompletionBlock; // @synthesize recordAccessCompletionBlock=_recordAccessCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordAccessRevokedBlock; // @synthesize recordAccessRevokedBlock=_recordAccessRevokedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordAccessGrantedBlock; // @synthesize recordAccessGrantedBlock=_recordAccessGrantedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordIDsToGrantAccess:(id)arg1 recordIDsToRevokeAccess:(id)arg2;

@end

