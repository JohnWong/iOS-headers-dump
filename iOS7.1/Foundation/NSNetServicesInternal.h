//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_tcp_listener>;

__attribute__((visibility("hidden")))
@interface NSNetServicesInternal : NSObject
{
    NSMutableArray *_monitors;
    NSObject<OS_tcp_listener> *_listener;
}

@property(retain) NSMutableArray *monitors; // @synthesize monitors=_monitors;
- (void)setListener:(id)arg1;
- (id)listener;
- (void)finalize;
- (void)dealloc;

@end

