//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKAcceptSharesOperation : CKDatabaseOperation
{
    NSArray *_shareURLs;
    CDUnknownBlockType _perShareCompletionBlock;
    CDUnknownBlockType _acceptSharesCompletionBlock;
    NSMutableDictionary *_errorsByShareURL;
}

@property(retain, nonatomic) NSMutableDictionary *errorsByShareURL; // @synthesize errorsByShareURL=_errorsByShareURL;
@property(copy, nonatomic) CDUnknownBlockType acceptSharesCompletionBlock; // @synthesize acceptSharesCompletionBlock=_acceptSharesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perShareCompletionBlock; // @synthesize perShareCompletionBlock=_perShareCompletionBlock;
@property(copy, nonatomic) NSArray *shareURLs; // @synthesize shareURLs=_shareURLs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithShareURLs:(id)arg1;
- (id)init;

@end

