//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKAuthenticator : NSObject
{
    _Bool _fingerPresent;
    id <PKAuthenticatorDelegate> _delegate;
}

+ (id)viewServiceBundleID;
+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (void)preheatAuthenticator;
@property(nonatomic) _Bool fingerPresent; // @synthesize fingerPresent=_fingerPresent;
@property(nonatomic) id <PKAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_delegateSupportsPassphraseDismissal;
- (_Bool)_delegateSupportsPassphrasePresentation;
- (_Bool)_delegateSupportsPasscodeDismissal;
- (_Bool)_delegateSupportsPasscodePresentation;
- (void)cancelEvaluation;
- (void)fallbackToSystemPasscodeUI;
- (void)evaluateRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)evaluatePolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

