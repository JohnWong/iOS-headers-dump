//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKEventPredicate.h>

#import "NSSecureCoding.h"

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : EKEventPredicate <NSSecureCoding>
{
    NSString *_externalIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (_Bool)evaluateWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExternalIdentifier:(id)arg1;

@end

