//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFContactsSearchOperation.h>

@class NSSet, NSString;

@interface MFCorecipientSearchOperation : MFContactsSearchOperation
{
    NSString *_bundleIdentifier;
    NSSet *_otherRecipients;
    unsigned long long _implicitGroupThreshold;
}

+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 otherRecipients:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7;
- (void)main;
- (void)dealloc;

@end

