//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPReportingController.h>

@class NSMutableArray, NSObject<OS_dispatch_queue>, RTCReporting;

@interface MPRTCReportingController : MPReportingController
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _recordingEnabled;
    unsigned int _reportingFlag;
    NSMutableArray *_reportingFlagLoadCompletionHandlers;
    RTCReporting *_rtcReporting;
    _Bool _shouldDeferEventFlushing;
}

- (void).cxx_destruct;
- (_Bool)_getMethod:(unsigned short *)arg1 respCode:(unsigned short *)arg2 infoDictionary:(id *)arg3 fromReportingEvent:(id)arg4;
- (void)loadRTCReportingFlagWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool shouldDeferEventFlushing;
- (void)_recordReportingEvents:(id)arg1;
- (void)flushImmediately;
- (id)init;

@end

