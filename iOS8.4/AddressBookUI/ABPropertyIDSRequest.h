//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSIDQueryControllerDelegate.h"

@class NSArray, NSString;

@interface ABPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate>
{
    NSArray *_propertyItems;
    NSString *_listenerID;
    NSString *_service;
    CDUnknownBlockType _requestResultBlock;
    CDUnknownBlockType _idQueryResultHandler;
}

@property(copy, nonatomic) CDUnknownBlockType idQueryResultHandler; // @synthesize idQueryResultHandler=_idQueryResultHandler;
@property(copy, nonatomic) CDUnknownBlockType requestResultBlock; // @synthesize requestResultBlock=_requestResultBlock;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *listenerID; // @synthesize listenerID=_listenerID;
@property(retain, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
- (void)_requestStatusOnMainQueue:(_Bool)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
@property(readonly, nonatomic) _Bool cancelled;
- (void)cancel;
- (void)dealloc;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(_Bool)arg3 resultBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

