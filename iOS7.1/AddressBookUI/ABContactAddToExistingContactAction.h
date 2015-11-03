//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContactAction.h>

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"

@class ABPeoplePickerNavigationController, CNContact;

@interface ABContactAddToExistingContactAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate>
{
    CNContact *_chosenContact;
    ABPeoplePickerNavigationController *_peoplePicker;
}

@property(retain, nonatomic) ABPeoplePickerNavigationController *peoplePicker; // @synthesize peoplePicker=_peoplePicker;
@property(retain, nonatomic) CNContact *chosenContact; // @synthesize chosenContact=_chosenContact;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)dealloc;

@end

