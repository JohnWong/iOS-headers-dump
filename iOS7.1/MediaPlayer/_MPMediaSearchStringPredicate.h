//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate
{
    NSString *_searchString;
    NSSet *_properties;
}

+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;
@property(copy, nonatomic) NSSet *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
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

