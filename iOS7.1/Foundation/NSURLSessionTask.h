//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError, NSString, NSURLRequest, NSURLResponse;

@interface NSURLSessionTask : NSObject <NSCopying>
{
    unsigned long long _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSString *_taskDescription;
    long long _state;
    NSError *_error;
}

+ (void)initialize;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long state; // @synthesize state=_state;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(readonly) long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property(readonly) long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property(readonly) long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property(readonly) long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(readonly) NSURLResponse *response; // @synthesize response=_response;
@property(readonly) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;

@end
