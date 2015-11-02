//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_semaphore>, NSString, PUActivityItemSource;

@interface _PUActivityItemSourceOperation : NSOperation
{
    PUActivityItemSource *_itemSource;
    NSString *_activityType;
    _Bool __pu_cancelled;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property(getter=_pu_isCancelled, setter=_pu_setCancelled:) _Bool _pu_cancelled; // @synthesize _pu_cancelled=__pu_cancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
@property(readonly, getter=pu_isCancelled) _Bool pu_cancelled;
- (void)pu_cancel;
- (void)main;
- (id)initWithActivityItemSource:(id)arg1 activityType:(id)arg2;

@end

