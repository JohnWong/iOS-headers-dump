//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTravelEngineThrottledAdvice : NSObject
{
    NSString *_eventExternalURL;
    id <EKTravelAdvice> _advice;
}

@property(retain, nonatomic) id <EKTravelAdvice> advice; // @synthesize advice=_advice;
@property(readonly, retain, nonatomic) NSString *eventExternalURL; // @synthesize eventExternalURL=_eventExternalURL;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithEventExternalURL:(id)arg1;

@end

