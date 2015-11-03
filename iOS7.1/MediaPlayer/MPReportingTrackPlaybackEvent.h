//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPReportingEvent.h>

@class MPReportingRadioStationMetadata, MPReportingTrackMetadata, NSDate;

@interface MPReportingTrackPlaybackEvent : MPReportingEvent
{
    NSDate *_date;
    MPReportingRadioStationMetadata *_radioStationMetadata;
    MPReportingTrackMetadata *_trackMetadata;
    struct _MPReportingTimeRange _trackTimeRange;
}

@property(nonatomic) struct _MPReportingTimeRange trackTimeRange; // @synthesize trackTimeRange=_trackTimeRange;
@property(retain, nonatomic) MPReportingTrackMetadata *trackMetadata; // @synthesize trackMetadata=_trackMetadata;
@property(retain, nonatomic) MPReportingRadioStationMetadata *radioStationMetadata; // @synthesize radioStationMetadata=_radioStationMetadata;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (_Bool)isValid;

@end
