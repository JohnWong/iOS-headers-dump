//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSHTTPURLRequestParameters : NSObject
{
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    unsigned long long pageNotFoundCacheLifetime;
    _Bool shouldHandleCookies;
    _Bool _pad1;
    _Bool _pad2;
    _Bool _pad3;
}

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

