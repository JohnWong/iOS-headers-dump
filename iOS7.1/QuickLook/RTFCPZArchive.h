//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RTFCPZArchive : NSObject
{
    NSMutableDictionary *mEntries;
    id <RTFCPZArchiveInputStream> mInput;
    NSString *mRootName;
}

- (id)rootName;
- (id)entryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (const char *)searchForEndOfCentralDirectory;
- (struct RTFCPZEndOfCentralDirectory)readEndOfCentralDirectory;
- (void)readEntries;

@end

