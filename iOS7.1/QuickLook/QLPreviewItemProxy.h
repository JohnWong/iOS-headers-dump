//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "QLPreviewItem.h"

@class NSString, NSURL, NSUUID;

@interface QLPreviewItemProxy : NSObject <NSSecureCoding, QLPreviewItem>
{
    NSUUID *_uuid;
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    long long _index;
    NSURL *_url;
    NSString *_title;
    NSURL *_urlForDisplay;
    NSString *_contentType;
    NSString *_password;
}

+ (id)proxyWithPreviewItem:(id)arg1;
+ (id)encodedClasses;
+ (_Bool)supportsSecureCoding;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property long long index; // @synthesize index=_index;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain) NSURL *urlForDisplay; // @synthesize urlForDisplay=_urlForDisplay;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)consumeFileExtension;
- (void)issueFileExtension;
- (id)previewItemURLForDisplay;
- (id)previewItemContentType;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPreviewItem:(id)arg1;

@end

