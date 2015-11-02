//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHAsset, PHContentEditingOutput, PLPhotoEditModel;

@interface PUPhotoEditSaveRequest : NSObject
{
    CDUnknownBlockType _completionHandler;
    double _beginTimestamp;
    PHAsset *_photo;
    PLPhotoEditModel *_editModel;
    PHContentEditingOutput *_contentEditingOutput;
    long long _workImageVersion;
    long long _currentState;
}

@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
@property(readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(readonly, copy, nonatomic) PLPhotoEditModel *editModel; // @synthesize editModel=_editModel;
@property(readonly, nonatomic) PHAsset *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)_transitionToState:(long long)arg1;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)cancelSaveOperation;
- (void)_renderAndSaveBaseImage:(id)arg1 withOrientation:(long long)arg2 orientationForModelData:(long long)arg3 baseImageURL:(id)arg4;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (id)init;

@end

