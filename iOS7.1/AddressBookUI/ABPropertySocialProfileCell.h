//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertySimpleCell.h>

#import "ABPickerControllerDelegate.h"

@class CNSocialProfile, NSString;

@interface ABPropertySocialProfileCell : ABPropertySimpleCell <ABPickerControllerDelegate>
{
    NSString *_previousValue;
}

- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)labelButtonClicked:(id)arg1;
@property(readonly, nonatomic) CNSocialProfile *profile;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;

@end

