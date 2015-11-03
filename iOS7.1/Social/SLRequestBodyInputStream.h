//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@class NSArray, SLRequestMultiPartInputStream;

@interface SLRequestBodyInputStream : NSInputStream
{
    NSArray *_inputStreams;
    SLRequestMultiPartInputStream *_currentStream;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    _Bool _openEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoopSource *_rls;
    CDUnknownFunctionPointerType _clientCallback;
    CDStruct_4210025a _clientContext;
    id <NSStreamDelegate> _delegate;
}

@property(nonatomic) __weak id <NSStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (unsigned long long)bytesRead;
@property(readonly) unsigned long long totalBytes;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void)close;
- (void)open;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (id)nextStream;
- (void)dealloc;
- (id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2;

@end

