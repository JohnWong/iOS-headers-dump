//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol NSProgressPublisher <NSObject>
- (oneway void)appWithBundleID:(NSString *)arg1 didAcknowledgeWithSuccess:(_Bool)arg2;
- (oneway void)prioritize;
- (oneway void)pause;
- (oneway void)cancel;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(void (^)(NSProgressValues *))arg1;
@end

