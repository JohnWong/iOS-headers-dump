//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSJoin : NSObject <NSCoding, NSCopying>
{
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}

+ (id)joinWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destinationAttributeName;
- (id)sourceAttributeName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;

@end

