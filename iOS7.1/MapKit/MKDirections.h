//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODirectionsRouteRequest, GEOQuickETARequest, GEOQuickETARequester, MKDirectionsRequest;

@interface MKDirections : NSObject
{
    MKDirectionsRequest *_request;
    GEODirectionsRouteRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    id <MKLocationManagerOperation> _locationOperation;
}

- (void).cxx_destruct;
- (void)calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)calculateDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_establishCurrentLocationAndThen:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCalculating) _Bool calculating;
- (void)cancel;
- (void)dealloc;
- (void)_cleanupLocationOperation;
- (id)initWithRequest:(id)arg1;

@end

