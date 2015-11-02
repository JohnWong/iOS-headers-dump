//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    WKContentView *_view;
    struct WebOpenPanelResultListenerProxy *_listener;
    RetainPtr_f649c0c3 _mimeTypes;
    struct CGPoint _interactionPoint;
    _Bool _allowMultipleFiles;
    _Bool _usingCamera;
    struct RetainPtr<UIImagePickerController> _imagePicker;
    struct RetainPtr<UIAlertController> _actionSheetController;
    struct RetainPtr<UIViewController> _presentationViewController;
    struct RetainPtr<UIPopoverController> _presentationPopover;
    id <WKFileUploadPanelDelegate> _delegate;
}

@property(nonatomic) id <WKFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)_willMultipleSelectionDelegateBeCalled;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_showMediaSourceSelectionSheet;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (void)_dismissDisplayAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)presentWithParameters:(struct WebOpenPanelParameters *)arg1 resultListener:(struct WebOpenPanelResultListenerProxy *)arg2;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_cancel;
- (void)_dispatchDidDismiss;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
