//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/CFPDDataBuffer.h>

__attribute__((visibility("hidden")))
@interface CFPDPurgeableBuffer : CFPDDataBuffer
{
    struct __CFData *handle;
    unsigned long long allocSize;
    _Bool safe;
    _Bool usedMalloc;
}

- (void)dealloc;
- (void)endAccessing;
- (_Bool)beginAccessing;
- (unsigned long long)length;
- (void *)bytes;
- (id)initWithPropertyList:(void *)arg1;

@end

