//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class ABModel;

@interface ABAbstractViewController : UITableViewController
{
    ABModel *_model;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABModel *model; // @synthesize model=_model;
- (void)updateNavigationButtons;
- (int)behavior;
- (id)peoplePickerNavigationController;
- (struct CGSize)contentSize;
- (void)setParentViewController:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (_Bool)supportedInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)dealloc;
- (void)setAddressBook:(void *)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithModel:(id)arg1;

@end

