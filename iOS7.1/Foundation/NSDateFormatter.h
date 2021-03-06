//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>;

@interface NSDateFormatter : NSFormatter
{
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter *_formatter;
    unsigned long long _counter;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
+ (unsigned long long)defaultFormatterBehavior;
- (void)_setUsesCharacterDirection:(_Bool)arg1;
- (_Bool)_usesCharacterDirection;
- (void)setDoesRelativeDateFormatting:(_Bool)arg1;
- (_Bool)doesRelativeDateFormatting;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (id)shortStandaloneQuarterSymbols;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (id)standaloneQuarterSymbols;
- (void)setShortQuarterSymbols:(id)arg1;
- (id)shortQuarterSymbols;
- (void)setQuarterSymbols:(id)arg1;
- (id)quarterSymbols;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (id)veryShortStandaloneWeekdaySymbols;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (id)shortStandaloneWeekdaySymbols;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (id)standaloneWeekdaySymbols;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (id)veryShortWeekdaySymbols;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (id)veryShortStandaloneMonthSymbols;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (id)shortStandaloneMonthSymbols;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (id)standaloneMonthSymbols;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (id)veryShortMonthSymbols;
- (void)setLongEraSymbols:(id)arg1;
- (id)longEraSymbols;
- (void)setPMSymbol:(id)arg1;
- (id)PMSymbol;
- (void)setAMSymbol:(id)arg1;
- (id)AMSymbol;
- (void)setShortWeekdaySymbols:(id)arg1;
- (id)shortWeekdaySymbols;
- (void)setWeekdaySymbols:(id)arg1;
- (id)weekdaySymbols;
- (void)setShortMonthSymbols:(id)arg1;
- (id)shortMonthSymbols;
- (void)setMonthSymbols:(id)arg1;
- (id)monthSymbols;
- (void)setEraSymbols:(id)arg1;
- (id)eraSymbols;
- (void)setDefaultDate:(id)arg1;
- (id)defaultDate;
- (void)setTwoDigitStartDate:(id)arg1;
- (id)twoDigitStartDate;
- (void)setLenient:(_Bool)arg1;
- (_Bool)isLenient;
- (void)setCalendar:(id)arg1;
- (id)calendar;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)_setIsLenient:(_Bool)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)_dateFormat;
- (void)setDateFormat:(id)arg1;
- (id)dateFormat;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (unsigned long long)formatterBehavior;
- (void)setGeneratesCalendarDates:(_Bool)arg1;
- (_Bool)generatesCalendarDates;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)setTimeStyle:(unsigned long long)arg1;
- (unsigned long long)timeStyle;
- (void)setDateStyle:(unsigned long long)arg1;
- (unsigned long long)dateStyle;
- (id)dateFromString:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_reset;
- (id)init;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_clearFormatter;

@end

