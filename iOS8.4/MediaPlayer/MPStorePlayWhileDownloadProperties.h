//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject
{
    unsigned long long _downloadToken;
    NSString *_localFilePath;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
@property(copy, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(nonatomic) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
- (void).cxx_destruct;

@end

