//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, AVAudioMix, NSArray, NSDictionary, NSString;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput
{
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_asset;
- (id)mediaType;
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(copy, nonatomic) AVAudioMix *audioMix;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1 forTrack:(id)arg2;
- (struct opaqueMTAudioProcessingTap *)_audioTapProcessorForTrack:(id)arg1;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2;
- (id)_audioTimePitchAlgorithmForTrack:(id)arg1;
- (void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2;
- (id)_audioVolumeCurveForTrack:(id)arg1;
@property(readonly, nonatomic) NSDictionary *audioSettings;
@property(readonly, nonatomic) NSArray *audioTracks;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (id)init;

@end

