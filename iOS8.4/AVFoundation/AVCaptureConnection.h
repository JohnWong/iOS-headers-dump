//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureConnectionInternal, AVCaptureOutput, AVCaptureVideoPreviewLayer, NSArray;

@interface AVCaptureConnection : NSObject
{
    AVCaptureConnectionInternal *_internal;
}

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (id)alloc;
+ (void)initialize;
- (void)_updatePropertiesForFormat:(id)arg1;
- (long long)_resolveActiveVideoStabilizationMode:(long long)arg1 format:(id)arg2;
- (void)_updateActiveVideoStabilizationMode:(long long)arg1 bumpChangeSeed:(_Bool)arg2;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)sourcesFromFrontFacingCamera;
- (id)sourceDevice;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (int)videoRetainedBufferCountHint;
- (_Bool)isVideoRetainedBufferCountHintSupported;
@property(readonly, nonatomic) long long activeVideoStabilizationMode;
@property(nonatomic) long long preferredVideoStabilizationMode;
@property(nonatomic) _Bool enablesVideoStabilizationWhenAvailable;
@property(readonly, nonatomic, getter=isVideoStabilizationEnabled) _Bool videoStabilizationEnabled;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) _Bool supportsVideoStabilization;
- (void)_updateMaxScaleAndCropFactorForFormat:(id)arg1;
@property(nonatomic) double videoScaleAndCropFactor;
@property(readonly, nonatomic) double videoMaxScaleAndCropFactor;
@property(nonatomic) CDStruct_1b6d18a9 videoMaxFrameDuration;
- (CDStruct_1b6d18a9)_videoMaxFrameDuration;
- (_Bool)isVideoMaxFrameDurationSet;
@property(readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) _Bool supportsVideoMaxFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 videoMinFrameDuration;
- (void)_setVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_videoMinFrameDuration;
- (_Bool)isVideoMinFrameDurationSet;
@property(readonly, nonatomic, getter=isVideoMinFrameDurationSupported) _Bool supportsVideoMinFrameDuration;
@property(nonatomic) long long videoOrientation;
@property(readonly, nonatomic, getter=isVideoOrientationSupported) _Bool supportsVideoOrientation;
@property(nonatomic) _Bool automaticallyAdjustsVideoMirroring;
- (void)_setVideoMirrored:(_Bool)arg1;
@property(nonatomic, getter=isVideoMirrored) _Bool videoMirrored;
@property(readonly, nonatomic, getter=isVideoMirroringSupported) _Bool supportsVideoMirroring;
- (void)updateAudioChannelsArray;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (void)updateAudioLevelsArray;
@property(readonly, nonatomic) NSArray *audioChannels;
- (id)mediaType;
- (_Bool)isLive;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_setActive:(_Bool)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSArray *inputPorts;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property(readonly, nonatomic) AVCaptureOutput *output;
- (void)teardownObservers;
- (void)setupObservers;
- (id)session;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)setupInternalStorage;

@end

