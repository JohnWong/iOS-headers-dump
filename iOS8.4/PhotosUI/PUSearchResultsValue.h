//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUSearchResult.h"

@class NSArray, NSAttributedString, NSObject<OS_dispatch_queue>, NSString, PSIGroupResult;

@interface PUSearchResultsValue : NSObject <PUSearchResult>
{
    NSObject<OS_dispatch_queue> *_queue;
    double _score;
    NSAttributedString *_attributedDisplayTitle;
    NSString *_displaySubtitle;
    NSArray *_uuids;
    id _albumUUID;
    unsigned long long _approximateCount;
    id <PUSearchResultsValueDelegate> _delegate;
    PSIGroupResult *_groupResult;
}

@property(retain, setter=_setGroupResult:) PSIGroupResult *groupResult; // @synthesize groupResult=_groupResult;
@property(nonatomic) __weak id <PUSearchResultsValueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setApproximateCount:(unsigned long long)arg1;
@property unsigned long long approximateCount; // @synthesize approximateCount=_approximateCount;
- (void)_setAlbumUUID:(id)arg1;
@property(retain) id albumUUID; // @synthesize albumUUID=_albumUUID;
- (void)_setUUIDs:(id)arg1;
@property(retain) NSArray *uuids; // @synthesize uuids=_uuids;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned long long)arg1;
- (void)fetchRemainingUUIDs:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *displaySubtitle;
@property(readonly, copy) NSString *displayTitle;
- (id)displayTitleWithDefaultAttributes:(id)arg1 highlightedAttributes:(id)arg2;
- (_Bool)isFinished;
@property(readonly) double score;
@property(readonly, copy) NSString *searchString;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

