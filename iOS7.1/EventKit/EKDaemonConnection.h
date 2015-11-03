//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface EKDaemonConnection : NSObject
{
    unsigned int _options;
    NSString *_dbPath;
    unsigned int _serverPort;
    unsigned int _machPort;
    unsigned int _connectionPort;
    NSObject<OS_dispatch_queue> *_connectionLock;
    id _delegate;
    NSMutableDictionary *_replyHandlers;
    unsigned int _nextID;
    NSObject<OS_dispatch_source> *_replySource;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    _Bool _registeredForStartNote;
}

@property id delegate; // @synthesize delegate=_delegate;
- (void)_finishAllRepliesOnServerDeath;
- (void)_processReplyWithID:(unsigned int)arg1 data:(id)arg2 finished:(_Bool)arg3;
- (void)removeReplyHandler:(id)arg1;
- (id)addReplyHandler:(CDUnknownBlockType)arg1;
- (void)_daemonRestarted;
@property(readonly) unsigned int port;
- (void)disconnect;
- (_Bool)_connectToServer;
- (void)dealloc;
- (id)initWithOptions:(unsigned int)arg1 path:(id)arg2;

@end

