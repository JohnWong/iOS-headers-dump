//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface MKLocalSearchRequest : NSObject <NSCopying>
{
    NSString *_naturalLanguageQuery;
    _Bool _hasRegion;
    CDStruct_feeb6407 _region;
    NSData *_suggestionMetadata;
    NSData *_suggestionEntryMetadata;
}

+ (id)searchRequestWithCompletion:(id)arg1;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(readonly, nonatomic) _Bool _hasRegion; // @synthesize _hasRegion;
@property(nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *naturalLanguageQuery; // @synthesize naturalLanguageQuery=_naturalLanguageQuery;
- (void).cxx_destruct;
- (id)description;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

