//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPickerController.h>

@class ABPropertyGroupItem;

@interface ABLabelPickerController : ABPickerController
{
    ABPropertyGroupItem *_item;
}

@property(readonly, nonatomic) ABPropertyGroupItem *item; // @synthesize item=_item;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeCustomItem:(id)arg1;
- (void)dealloc;
- (id)initForPropertyItem:(id)arg1;

@end

