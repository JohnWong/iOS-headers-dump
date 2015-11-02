//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CNPhoneNumber : NSObject <NSCopying>
{
    NSString *_cachedFormattedNormalizedStringValue;
    NSString *_cachedNormalizedStringValue;
    NSString *_stringValue;
}

+ (id)phoneNumberWithStringValue:(id)arg1;
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy) NSString *normalizedStringValue;
@property(readonly, copy) NSString *formattedStringValue;
@property(readonly, copy) NSString *countryCode;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStringValue:(id)arg1;

@end

