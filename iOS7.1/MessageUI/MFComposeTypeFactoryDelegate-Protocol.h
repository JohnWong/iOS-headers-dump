//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFComposeBodyField, MFGenericAttachmentStore, MFMailAccountProxy, MFMailAccountProxyGenerator, MFMessageTextAttachment, MFMutableMessageHeaders, NSArray, NSString;

@protocol MFComposeTypeFactoryDelegate <NSObject>
- (_Bool)hasAnyHiddenTrailingEmptyQuote;
- (MFGenericAttachmentStore *)attachmentStore;
- (MFMessageTextAttachment *)addInlinedElementToStore:(MFMessageTextAttachment *)arg1 onlyIfNecessary:(_Bool)arg2;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setSendingEmailAddress:(NSString *)arg1 addIfNotPresent:(_Bool)arg2;
- (MFMutableMessageHeaders *)savedHeaders;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (NSString *)subject;
- (void)setSubject:(NSString *)arg1;
- (NSArray *)bccRecipients;
- (void)setBccRecipients:(NSArray *)arg1;
- (NSArray *)ccRecipients;
- (void)setCcRecipients:(NSArray *)arg1;
- (NSArray *)toRecipients;
- (void)setToRecipients:(NSArray *)arg1;
- (MFComposeBodyField *)bodyField;
- (MFMailAccountProxyGenerator *)accountProxyGenerator;

@optional
- (void)addSignature:(_Bool)arg1;
@end

