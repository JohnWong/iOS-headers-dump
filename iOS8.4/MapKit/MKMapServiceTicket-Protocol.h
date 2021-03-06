//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapRegion, GEOMapServiceTraits, GEORPCorrectedSearch, NSArray, NSError, NSObject<OS_dispatch_queue>;

@protocol MKMapServiceTicket <NSObject>
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *exactMapItems;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)cancel;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

