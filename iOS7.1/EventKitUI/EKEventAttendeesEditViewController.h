//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

@class EKEventAttendeePicker, NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditViewController : EKEditItemViewController
{
    EKEventAttendeePicker *_picker;
}

- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@property(copy, nonatomic) NSArray *attendees;
- (id)_recipientFromAttendee:(id)arg1;
- (id)_attendeeFromRecipient:(id)arg1;
- (_Bool)validateAllowingAlert:(_Bool)arg1;
- (id)_firstInvalidRecipientAddress;
- (void)viewDidLoad;
- (void)setSearchAccountID:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

