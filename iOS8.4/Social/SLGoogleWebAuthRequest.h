//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SLGoogleWebAuthRequest : NSObject
{
}

+ (id)authCodeFromWebPageTitle:(id)arg1;
+ (_Bool)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4;
+ (id)requestForURL:(id)arg1;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4;
+ (void)clearCookiesFromStorage:(id)arg1;

@end
