//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterConfigurationState, AVMediaFileType, AVWeakReference, NSArray, NSError, NSURL;

@interface AVAssetWriterHelper : NSObject
{
    AVAssetWriterConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriter;
}

@property(retain) AVWeakReference *weakReferenceToAssetWriter; // @synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter;
@property(readonly, nonatomic) AVAssetWriterConfigurationState *configurationState; // @synthesize configurationState=_configurationState;
- (void)transitionToFailedStatusWithError:(id)arg1;
- (_Bool)_transitionToClientInitiatedTerminalStatus:(long long)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startWriting;
- (void)addInputGroup:(id)arg1;
- (_Bool)canAddInputGroup:(id)arg1;
- (void)addInput:(id)arg1;
- (_Bool)canAddInput:(id)arg1;
- (_Bool)_canApplyTrackReferences:(id)arg1 exceptionReason:(id *)arg2;
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (_Bool)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription *)arg3 exceptionReason:(id *)arg4;
@property(readonly, nonatomic) NSArray *inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
@property(nonatomic) float preferredRate;
@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSArray *metadata;
@property(nonatomic) int movieTimeScale;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, nonatomic) AVMediaFileType *mediaFileType;
@property(readonly, nonatomic) NSURL *outputURL;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1;
- (id)init;

@end

