//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

#import "UITextFieldDelegate.h"

@class UITableViewCell;

@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate>
{
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)becomeFirstResponder;
- (_Bool)saveStateToCalendar:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)reset;

@end

