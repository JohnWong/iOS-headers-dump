//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUEditPluginSessionDataSource.h"

@class PUEditPluginSession;

@protocol PUImageEditPluginSessionDataSource <PUEditPluginSessionDataSource>
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadFullSizeImageWithHandler:(void (^)(NSURL *, long long, NSString *))arg2;
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadDisplaySizeImageWithHandler:(void (^)(UIImage *))arg2;
@end

