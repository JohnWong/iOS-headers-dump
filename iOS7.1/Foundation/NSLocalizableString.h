//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSLocalizableString : NSString
{
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}

+ (id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;
- (void)setDevelopmentLanguageString:(id)arg1;
@property(readonly) NSString *developmentLanguageString;
- (void)setStringsFileKey:(id)arg1;
@property(readonly) NSString *stringsFileKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)awakeAfterUsingCoder:(id)arg1;

@end

