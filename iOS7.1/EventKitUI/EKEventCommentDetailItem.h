//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import "UITextFieldDelegate.h"

@class EKEventDetailCommentCell;

__attribute__((visibility("hidden")))
@interface EKEventCommentDetailItem : EKEventDetailItem <UITextFieldDelegate>
{
    EKEventDetailCommentCell *_cell;
}

- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

