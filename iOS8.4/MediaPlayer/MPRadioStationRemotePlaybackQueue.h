//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class RURadioStationPlaybackMetadata;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue
{
    RURadioStationPlaybackMetadata *_stationMetadata;
}

@property(readonly, nonatomic) RURadioStationPlaybackMetadata *stationMetadata; // @synthesize stationMetadata=_stationMetadata;
- (void).cxx_destruct;
- (_Bool)verifyWithError:(id *)arg1;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

