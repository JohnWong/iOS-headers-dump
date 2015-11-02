//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEProfilePayloadBase.h>

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase
{
    _Bool _userNameRequired;
    _Bool _passwordRequired;
    _Bool _proxyUserNameRequired;
    _Bool _proxyPasswordRequired;
    _Bool _sharedSecretRequired;
    _Bool _pinRequired;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(copy, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(copy, nonatomic) NSString *proxyUserName; // @synthesize proxyUserName=_proxyUserName;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool pinRequired; // @synthesize pinRequired=_pinRequired;
@property(nonatomic) _Bool sharedSecretRequired; // @synthesize sharedSecretRequired=_sharedSecretRequired;
@property(nonatomic) _Bool proxyPasswordRequired; // @synthesize proxyPasswordRequired=_proxyPasswordRequired;
@property(nonatomic) _Bool proxyUserNameRequired; // @synthesize proxyUserNameRequired=_proxyUserNameRequired;
@property(nonatomic) _Bool passwordRequired; // @synthesize passwordRequired=_passwordRequired;
@property(nonatomic) _Bool userNameRequired; // @synthesize userNameRequired=_userNameRequired;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)setPostprocessedPayloadContents:(id)arg1;
- (id)getPreprocessedPayloadContents;
- (id)validatePayload;
- (id)initWithPayload:(id)arg1;
- (void)extractPayloadContents:(id)arg1;
- (void)extractPayloadContentsPIN:(id)arg1;
- (void)extractPayloadContentsSharedSecret:(id)arg1;
- (void)extractPayloadContentsUserNamePassword:(id)arg1;
- (void)extractPayloadContentsHTTPProxy:(id)arg1;

@end

