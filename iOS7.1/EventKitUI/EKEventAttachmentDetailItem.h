//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import "EKEventAttachmentCellControllerDelegate.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate>
{
    NSArray *_cellControllers;
}

- (void).cxx_destruct;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)dealloc;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)_cleanUpCellControllers;

@end

