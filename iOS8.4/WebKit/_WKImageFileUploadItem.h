//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebKit/_WKFileUploadItem.h>

__attribute__((visibility("hidden")))
@interface _WKImageFileUploadItem : _WKFileUploadItem
{
    struct RetainPtr<NSString> _filePath;
    struct RetainPtr<UIImage> _originalImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)displayImage;
- (id)fileURL;
- (_Bool)isVideo;
- (id)initWithFilePath:(id)arg1 originalImage:(id)arg2;

@end

