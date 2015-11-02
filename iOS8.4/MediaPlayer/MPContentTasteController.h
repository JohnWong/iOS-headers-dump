//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPContentTasteController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary *_pendingUpdateRecordByStoreAdamID;
}

+ (id)_mediaLibrary;
+ (id)sharedController;
- (void).cxx_destruct;
- (id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(long long)arg3;
- (id)_libraryEntityWithStoreID:(long long)arg1 contentType:(unsigned long long)arg2;
- (id)_libraryPlaylistWithGlobalID:(id)arg1;
- (void)_deviceMediaLibraryDidChangeNotification:(id)arg1;
- (unsigned long long)tasteTypeForStoreAdamID:(long long)arg1;
- (unsigned long long)tasteTypeForPlaylistGlobalID:(id)arg1;
- (unsigned long long)tasteTypeForMediaEntity:(id)arg1;
- (void)setTasteType:(unsigned long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setTasteType:(unsigned long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setTasteType:(unsigned long long)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
