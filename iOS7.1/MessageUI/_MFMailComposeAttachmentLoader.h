//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject
{
    MFMailMessage *_message;
    id _content;
    _Bool _isDraft;
}

- (void)loadAttachments;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(_Bool)arg3;

@end

