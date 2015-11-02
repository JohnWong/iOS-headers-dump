//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSFileAccessNode : NSObject
{
    NSFileAccessNode *_parent;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_symbolicLinkDestination;
    unsigned long long _symbolicLinkReferenceCount;
    NSMutableDictionary *_childrenByNormalizedName;
    id _presenterOrPresenters;
    id _provider;
    id _accessClaimOrClaims;
    _Bool _isArbitrationBoundary;
    _Bool _isFilePackageIsFigured;
    _Bool _isFilePackage;
    NSString *_lastRequestedChildName;
    NSFileAccessNode *_lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}

- (id)description;
- (id)sensitiveDescription;
- (id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(_Bool)arg2;
- (id)_childrenExcludingExcessNodes:(_Bool)arg1;
- (_Bool)_mayContainCriticalDebuggingInformation;
- (void)assertDescendantsLive;
- (void)assertLive;
- (void)assertDead;
- (id)parent;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachProgressPublisherOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)removeProgressSubscriber:(id)arg1;
- (void)addProgressSubscriber:(id)arg1;
- (void)removeProgressPublisher:(id)arg1;
- (void)addProgressPublisher:(id)arg1;
- (id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2;
- (id)standardizedURL;
- (id)pathExceptPrivate;
- (id)url;
- (void)removeAccessClaim:(id)arg1;
- (void)addAccessClaim:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)addPresenter:(id)arg1;
- (_Bool)itemIsInItemAtLocation:(id)arg1;
- (_Bool)itemIsItemAtLocation:(id)arg1;
- (_Bool)itemIsSubarbitrable;
- (void)setArbitrationBoundary;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(CDUnknownBlockType)arg1;
- (id)itemProvider;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachRelevantAccessClaimPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachAccessClaimOnItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachDescendantPerformProcedure:(CDUnknownBlockType)arg1;
- (id)biggestFilePackageLocation;
- (_Bool)itemIsFilePackage;
- (void)setParent:(id)arg1 name:(id)arg2;
- (id)pathFromAncestor:(id)arg1;
- (id)descendantForFileURL:(id)arg1;
- (id)childForRange:(struct _NSRange)arg1 ofPath:(id)arg2;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 forAddingLeafNode:(id)arg3 create:(_Bool)arg4;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 create:(_Bool)arg3;
- (id)normalizationOfChildName:(id)arg1;
- (void)removeSelfIfUseless;
- (void)removeChildForNormalizedName:(id)arg1;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange *)arg2;
- (void)dealloc;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;

@end

