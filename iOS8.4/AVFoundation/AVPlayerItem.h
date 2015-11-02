//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVPlayerItemInternal, NSArray, NSDate, NSError, NSString;

@interface AVPlayerItem : NSObject <NSCopying>
{
    AVPlayerItemInternal *_playerItem;
}

+ (_Bool)automaticallyNotifiesObserversOfTracks;
+ (_Bool)automaticallyNotifiesObserversOfPresentationSize;
+ (_Bool)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (_Bool)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (_Bool)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (_Bool)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (_Bool)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (_Bool)automaticallyNotifiesObserversOfAsset;
+ (_Bool)automaticallyNotifiesObserversOfStatus;
+ (_Bool)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (_Bool)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+ (_Bool)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (_Bool)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (_Bool)automaticallyNotifiesObserversOfVariantIndex;
+ (_Bool)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (struct OpaqueCMTimebase *)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
+ (id)playerItemWithAsset:(id)arg1;
+ (id)playerItemWithURL:(id)arg1;
+ (_Bool)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (_Bool)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (void)initialize;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
- (void)setRequiresAccessLog:(_Bool)arg1;
- (_Bool)requiresAccessLog;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (void)setMaximumBitRate:(float)arg1;
- (float)maximumBitRate;
- (void)setPreferredPeakBitRate:(double)arg1;
- (double)preferredPeakBitRate;
- (void)setAllowProgressiveSwitchUp:(_Bool)arg1;
- (_Bool)allowProgressiveSwitchUp;
- (void)setNetworkUsuallyExceedsMaxBitRate:(_Bool)arg1;
- (_Bool)networkUsuallyExceedsMaxBitRate;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (void)_setSuppressesVideoLayers:(_Bool)arg1;
- (_Bool)_suppressesVideoLayers;
- (_Bool)_suppressionForOutputs:(id)arg1;
- (_Bool)hasEnabledAudio;
- (_Bool)_hasEnabledAudio;
- (_Bool)hasEnabledVideo;
- (_Bool)_hasEnabledVideo;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary *)arg1;
- (void)_addSyncLayer:(id)arg1;
- (void)_removeSyncLayer:(id)arg1;
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;
- (void)_setTimedMetadata:(id)arg1;
- (id)timedMetadata;
- (struct OpaqueFigCPEProtector *)_figCPEProtector;
- (void)setNonForcedSubtitleDisplayEnabled:(_Bool)arg1;
- (_Bool)isNonForcedSubtitleDisplayEnabled;
- (_Bool)_isNonForcedSubtitleDisplayEnabled;
- (void)_quietlySetNonForcedSubtitleDisplayEnabled:(_Bool)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;
- (void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;
- (void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;
- (void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;
- (void)_clearCachedMediaSelectionGroup:(id)arg1;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (void)_applyMediaSelectionOptions;
- (float)volumeAdjustment;
- (void)setVolumeAdjustment:(float)arg1;
- (void)_quietlySetVolumeAdjustment:(float)arg1;
- (float)soundCheckVolumeNormalization;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)_quietlySetSoundCheckVolumeNormalization:(float)arg1;
- (void)setVariantIndex:(long long)arg1;
- (void)_quietlySetVariantIndex:(long long)arg1;
- (long long)variantIndex;
- (void)setGaplessInfo:(id)arg1;
- (void)_quietlySetPlaybackProperties:(id)arg1;
- (id)_playbackProperties;
- (id)gaplessInfo;
- (id)loadedTimeRanges;
- (id)_loadedTimeRanges;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;
- (id)seekableTimeRanges;
- (id)_seekableTimeRanges;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;
- (id)playabilityMetrics;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (_Bool)isPlaybackBufferEmpty;
- (_Bool)isPlaybackBufferFull;
- (_Bool)isPlaybackLikelyToKeepUp;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)_quietlySetFigTimePitchAlgorithm:(struct __CFString *)arg1;
- (id)audioTimePitchAlgorithm;
- (id)_audioTimePitchAlgorithm;
- (void)setTextStyleRules:(id)arg1;
- (void)_applyTextStyleRules;
- (id)textStyleRules;
- (void)setSeekingWaitsForVideoCompositionRendering:(_Bool)arg1;
- (void)_applySeekingWaitsForVideoCompositionRendering;
- (_Bool)seekingWaitsForVideoCompositionRendering;
- (id)customVideoCompositor;
- (void)_setVideoCompositor:(void *)arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize)arg1;
- (void)_setVideoCompositionFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (void)setAudioMix:(id)arg1;
- (void)_applyNewAudioMix:(id)arg1 oldAudioMix:(id)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1 forTrackID:(int)arg2;
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;
- (id)audioMix;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)_quietlySetSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (float)speedThresholdForIFrameOnlyPlayback;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(CDStruct_1b6d18a9)arg1;
- (void)_quietlySetMinimumIntervalForIFrameOnlyPlayback:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)minimumIntervalForIFrameOnlyPlayback;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(_Bool)arg1;
- (void)_quietlySetUsesIFrameOnlyPlaybackForHighRateScaledEdits:(_Bool)arg1;
- (_Bool)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (void)setContinuesPlayingDuringPrerollForRateChange:(_Bool)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(_Bool)arg1;
- (_Bool)continuesPlayingDuringPrerollForRateChange;
- (_Bool)_continuesPlayingDuringPrerollForRateChange;
- (void)setContinuesPlayingDuringPrerollForSeek:(_Bool)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(_Bool)arg1;
- (_Bool)continuesPlayingDuringPrerollForSeek;
- (_Bool)_continuesPlayingDuringPrerollForSeek;
- (void)setSavesDownloadedDataToDiskWhenDone:(_Bool)arg1;
- (_Bool)savesDownloadedDataToDiskWhenDone;
- (void)setWillNeverSeekBackwardsHint:(_Bool)arg1;
- (void)_quietlySetWillNeverSeekBackwardsHint:(_Bool)arg1;
- (_Bool)willNeverSeekBackwardsHint;
- (_Bool)_willNeverSeekBackwardsHint;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (long long)playbackLikelyToKeepUpTrigger;
- (long long)_playbackLikelyToKeepUpTrigger;
- (void)setAlwaysMonitorsPlayability:(_Bool)arg1;
- (void)_quietlySetAlwaysMonitorsPlayability:(_Bool)arg1;
- (_Bool)alwaysMonitorsPlayability;
- (_Bool)_alwaysMonitorsPlayability;
- (void)setMaximumTrailingBufferDuration:(CDStruct_1b6d18a9)arg1;
- (void)_quietlySetMaximumTrailingBufferDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)maximumTrailingBufferDuration;
- (void)setAllowsExtendedReadAhead:(_Bool)arg1;
- (void)_quietlySetAllowsExtendedReadAhead:(_Bool)arg1;
- (_Bool)allowsExtendedReadAhead;
- (void)setLimitReadAhead:(_Bool)arg1;
- (unsigned int)RTCReportingFlags;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (void)_quietlySetRTCReportingFlags:(unsigned int)arg1;
- (void)_quietlySetLimitReadAhead:(_Bool)arg1;
- (_Bool)limitReadAhead;
- (_Bool)_limitReadAhead;
- (void)_updateTimebase;
- (struct OpaqueCMTimebase *)timebase;
- (struct OpaqueCMTimebase *)_copyTimebase;
- (struct OpaqueCMTimebase *)_copyProxyTimebase;
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_quietlySetReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;
- (CDStruct_1b6d18a9)_reversePlaybackEndTime;
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_quietlySetForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;
- (CDStruct_1b6d18a9)_forwardPlaybackEndTime;
- (void)stepByCount:(long long)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (id)initialEstimatedDate;
- (id)currentEstimatedDate;
- (void)setInitialDate:(id)arg1;
- (id)initialDate;
- (_Bool)seekToDate:(id)arg1;
- (_Bool)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)currentDate;
- (void)cancelPendingSeeks;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(_Bool)arg2;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_CreateSeekID;
- (CDStruct_1b6d18a9)currentTime;
- (struct CGSize)presentationSize;
- (struct CGSize)_presentationSize;
- (_Bool)canStepBackward;
- (_Bool)_canStepBackward;
- (_Bool)canStepForward;
- (_Bool)_canStepForward;
- (_Bool)canPlaySlowReverse;
- (_Bool)_canPlaySlowReverse;
- (_Bool)canPlaySlowForward;
- (_Bool)_canPlaySlowForward;
- (_Bool)canPlayReverse;
- (_Bool)_canPlayReverse;
- (_Bool)_isAFileBasedItemThatsReadyToPlay;
- (_Bool)canPlayFastReverse;
- (_Bool)_canPlayFastReverse;
- (_Bool)canPlayFastForward;
- (_Bool)_canPlayFastForward;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_invokeReadyForEnqueueingHandlers;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(CDStruct_1b6d18a9)arg1;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_removeFAListeners;
- (void)_addFAListeners;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (id)_fpNotificationNames;
- (id)_trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)_tracks;
- (id)_tracksFromAssetTrackIDs;
- (id)_cachedTracks;
- (id)_tracksWithFPTrackIDArray:(id)arg1;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)_duration;
- (id)automaticallyLoadedAssetKeys;
- (id)asset;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)_informObserversAboutAvailabilityOfDuration:(CDStruct_1b6d18a9)arg1;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_kickAssetObserversIfAppropriate;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_makeNewAssetWithFigPlaybackItem;
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)arg1;
- (void)_setAssetWithFigPlaybackItem:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_setURL:(id)arg1;
- (id)_URL;
- (void)_removeFromItems;
- (void)_insertAfterItem:(id)arg1;
- (id)_previousItem;
- (id)_nextItem;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (void)_dequeueFromPlayer;
- (void)_enqueueWithPlayer:(id)arg1 shouldAppendItem:(_Bool)arg2;
- (void)_attachToFigPlayer;
- (void)_attachToPlayer:(id)arg1;
- (void)_createPlayerConnection:(id)arg1 shouldAppendItem:(_Bool)arg2;
- (void)_setPlayerConnection:(id)arg1;
- (id)_playerConnection;
- (void)_setIsCurrentPlayerItem:(_Bool)arg1;
- (_Bool)_isCurrentPlayerItem;
- (id)_player;
- (void)_configurePlaybackItem;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (id)_cachedValueForKey:(id)arg1;
- (id)_propertyStorage;
- (struct OpaqueFigPlaybackItem *)_copyFigPlaybackItem;
- (id)_stateDispatchQueue;
- (id)_weakReference;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)_createPlayerItemInternal;
@property(readonly, nonatomic, getter=isContentAuthorizedForPlayback) _Bool contentAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isApplicationAuthorizedForPlayback) _Bool applicationAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isAuthorizationRequiredForPlayback) _Bool authorizationRequiredForPlayback;
@property(readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property(readonly, nonatomic, getter=_isRentalPlaybackStarted) _Bool _rentalPlaybackStarted;
@property(readonly, nonatomic) NSDate *_rentalExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalStartDate;
@property(readonly, nonatomic, getter=_isRental) _Bool _rental;
@property(nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) _Bool _externalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (id)errorLog;
- (id)accessLog;
- (long long)_availableFileSize;
- (long long)_fileSize;
- (void)_setEQPreset:(int)arg1;
- (void)_quietlySetEQPreset:(int)arg1;
- (void)_setAudibleDRMInfo:(id)arg1;
- (void)_setRampInOutInfo:(id)arg1;
@property(copy, nonatomic) NSString *dataYouTubeID;
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeOutput:(id)arg1;
- (void)_removeMetadataOutput:(id)arg1;
- (void)_removeLegibleOutput:(id)arg1;
- (void)_removeVideoOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)_addMetadataOutput:(id)arg1;
- (void)_addLegibleOutput:(id)arg1;
- (void)_addVideoOutput:(id)arg1;
- (id)_preferredPixelBufferAttributes;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateVideoOutputs;
- (id)_metadataOutputsForKeys;
- (id)_legibleOutputsForKeys;
- (id)_videoOutputs;
@property(copy, nonatomic) NSString *mediaKind;
- (void)_quietlySetMediaKind:(id)arg1;
- (id)_mediaKind;
@property(nonatomic) unsigned long long restrictions;
- (void)_quietlySetRestrictions:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *serviceIdentifier;
- (void)_quietlySetServiceIdentifier:(id)arg1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(CDStruct_1b6d18a9)arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (id)_legibleOutputForKey:(id)arg1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;
- (id)_metadataOutputForKey:(id)arg1;

@end

