//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContactAction.h>

@class NSArray;

@interface ABPropertyAction : ABContactAction
{
    NSArray *_propertyItems;
}

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;
@property(copy, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
- (void)performActionWithSender:(id)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) _Bool canPerformAction;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;

// Remaining properties
@property(nonatomic) id <ABPropertyActionDelegate> delegate; // @dynamic delegate;

@end
