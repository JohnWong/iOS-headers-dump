//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLIntersiloProxyDelegateProtocol.h"

@class CLSilo, NSMutableArray;

@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
+ (void)becameFatallyBlocked:(NSMutableArray *)arg1;
+ (CLSilo *)getSilo;
+ (_Bool)isSupported;

@optional
- (void)registerDelegate:(id <CLIntersiloProxyDelegateProtocol>)arg1 inSilo:(CLSilo *)arg2;
- (void)endService;
- (void)beginService;
@end

