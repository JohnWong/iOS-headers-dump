//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface NSUnarchiver : NSCoder
{
    void *datax;
    unsigned long long cursor;
    struct _NSZone *objectZone;
    unsigned long long systemVersion;
    BOOL streamerVersion;
    BOOL swap;
    BOOL unused1;
    BOOL unused2;
    void *pointerTable;
    void *stringTable;
    id classVersions;
    long long lastLabel;
    void *map;
    void *allUnarchivedObjects;
    id reserved;
}

+ (id)classNameDecodedForArchiveClassName:(id)arg1;
+ (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (void)initialize;
- (id)classNameDecodedForArchiveClassName:(id)arg1;
- (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
- (id)decodeDataObject;
- (id)decodeObject;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)data;
- (long long)versionForClassName:(id)arg1;
- (unsigned int)systemVersion;
- (_Bool)isAtEnd;
- (struct _NSZone *)objectZone;
- (void)setObjectZone:(struct _NSZone *)arg1;
- (void)_setAllowedClasses:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initForReadingWithData:(id)arg1;

@end

