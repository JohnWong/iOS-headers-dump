//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface UILexicon : NSObject <NSCopying>
{
    NSArray *_entries;
}

+ (id)_lexiconWithTILexicon:(id)arg1;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

