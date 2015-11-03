//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSURLRequest.h>

@interface NSMutableURLRequest : NSURLRequest
{
}

- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setAllowsCellularAccess:(_Bool)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)setHTTPShouldUsePipelining:(_Bool)arg1;
- (unsigned long long)requestPriority;
- (void)setRequestPriority:(unsigned long long)arg1;
- (void)setHTTPShouldHandleCookies:(_Bool)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setHTTPMethod:(id)arg1;

@end

