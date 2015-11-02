//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

@class NSSet, NSString;

@interface MPMediaContainmentPredicate : MPMediaPredicate
{
    NSString *_property;
    NSSet *_values;
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

@end

