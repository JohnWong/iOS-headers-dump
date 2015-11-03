//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)internetServicesRegion;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (id)commonISOCurrencyCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOCountryCodes;
+ (id)ISOLanguageCodes;
+ (id)availableLocaleIdentifiers;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)currentLocale;
+ (id)systemLocale;
+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)_prefs;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)identifier;
- (id)localeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_cfTypeID;
- (id)init;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)objectForKey:(id)arg1;

@end

