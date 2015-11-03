//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RTFNSParagraphStyle : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _alignment;
    float _headIndent;
    float _tailIndent;
    float _firstLineHeadIndent;
    NSArray *_textBocks;
    long long _baseWritingDirection;
}

- (long long)baseWritingDirection;
- (float)firstLineHeadIndent;
- (float)tailIndent;
- (float)headIndent;
- (unsigned int)alignment;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithParagraphStyle:(id)arg1;
- (id)init;

@end
