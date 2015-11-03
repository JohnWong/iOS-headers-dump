//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABImagePickerControllerDelegate.h"
#import "ABPickerViewControllerDelegate.h"

@class ABImagePickerController, ABPersonTableViewDataSource, ABPersonViewControllerHelper, ABStyleProvider;

@interface ABPersonPickersDelegate : NSObject <ABPickerViewControllerDelegate, ABImagePickerControllerDelegate>
{
    ABStyleProvider *_styleProvider;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonViewControllerHelper *_helper;
    ABImagePickerController *_imagePicker;
}

@property(readonly, nonatomic) ABImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;
@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (void)showImageMenuForHelper:(id)arg1;
- (void)finishTearingDownImagePickerController;
- (void)removeImagePickerControllerFromUI;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
@property(nonatomic) _Bool popoverSizeUpdatesDisabled;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePickerWillBeShown:(id)arg1;
- (id)personImageView;
- (id)selectedPeople;
- (_Bool)pickerViewControllerShouldDismissKeyboard:(id)arg1;
- (_Bool)pickerViewController:(id)arg1 shouldDismissAfterSelectingItem:(id)arg2;
- (void)_dismissPropertyPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissProfilesPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissCountryPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissRingtonePicker:(id)arg1 afterSelectingItem:(id)arg2;
- (id)_propertyGroupForPicker:(id)arg1;
- (id)_contentViewForPicker:(id)arg1;
- (void)labelPickerViewController:(id)arg1 didDeleteLabel:(id)arg2;
- (_Bool)labelPickerViewController:(id)arg1 shouldDismissAfterSelectingLabel:(id)arg2;
- (void)dealloc;

@end

