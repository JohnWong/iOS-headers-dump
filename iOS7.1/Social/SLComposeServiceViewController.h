//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SLComposeViewControllerServiceProtocol.h"
#import "UINavigationControllerDelegate.h"
#import "UITextViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<SLSheetViewHostProtocol>, NSString, NSURL, SLSheetContentView, SLSheetMasklayer, SLSheetNavigationController, SLSheetPreviewImageSource, SLSheetRootViewController, UIAlertView, UIImage, UIView;

@interface SLComposeServiceViewController : UIViewController <SLComposeViewControllerServiceProtocol, UITextViewDelegate, UINavigationControllerDelegate>
{
    SLSheetContentView *_contentView;
    NSMutableDictionary *_previewOffsets;
    SLSheetMasklayer *_vignetteLayer;
    UIAlertView *_alertView;
    NSURL *_alertViewTargetURL;
    NSObject<SLSheetViewHostProtocol> *_hostProxy;
    _Bool _isShowingLocationDeniedAlert;
    _Bool _isPresentingActionViewController;
    SLSheetPreviewImageSource *_previewImageSource;
    long long _currentBarMetrics;
    UIView *_maskView;
    _Bool _didFirstSheetActionLoad;
    _Bool _didCallPresentSheet;
    _Bool _triggerPresentationAnimationOnKeyboard;
    _Bool _hasPresentedSheet;
    _Bool _isPerformationRotation;
    struct CGRect _sheetFrameStartingRotation;
    UIViewController *_viewControllerForTrackingSheetSize;
    UIViewController *_autoCompletionViewControllerForTrackingSheetSize;
    _Bool _wasPresented;
    _Bool _preventSheetPositionChanges;
    _Bool _suppressKeyboard;
    int _previewDisplayFormat;
    UIImage *_serviceIconImage;
    long long *_keyboardType;
    NSMutableArray *_attachments;
    unsigned long long _maxImageAttachmentSize;
    NSString *_placeholderText;
    SLSheetRootViewController *_sheetRootViewController;
    SLSheetNavigationController *_navigationController;
    NSMutableArray *_constraints;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (_Bool)_preventsAppearanceProxyCustomization;
@property(retain) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) _Bool suppressKeyboard; // @synthesize suppressKeyboard=_suppressKeyboard;
@property(nonatomic) _Bool preventSheetPositionChanges; // @synthesize preventSheetPositionChanges=_preventSheetPositionChanges;
@property(retain, nonatomic) SLSheetNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) SLSheetRootViewController *sheetRootViewController; // @synthesize sheetRootViewController=_sheetRootViewController;
@property(readonly) _Bool wasPresented; // @synthesize wasPresented=_wasPresented;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) unsigned long long maxImageAttachmentSize; // @synthesize maxImageAttachmentSize=_maxImageAttachmentSize;
@property(nonatomic) int previewDisplayFormat; // @synthesize previewDisplayFormat=_previewDisplayFormat;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) SLSheetContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long *keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) UIImage *serviceIconImage; // @synthesize serviceIconImage=_serviceIconImage;
- (void).cxx_destruct;
- (void)registerHostProxy;
@property(retain) NSObject<SLSheetViewHostProtocol> *hostProxy;
- (void)networkActivityIndicatorNotification:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)loadView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_willAppearInRemoteViewController;
- (void)_adjustIntrinsicSheetSizeForDisplayFormatIfNeeded;
- (double)_sheetMinBottomMarginForInterfaceOrientation:(long long)arg1;
- (struct CGRect)sheetFrameForViewController:(id)arg1 orientation:(long long)arg2 topSpaceProportion:(double)arg3 topSpaceOffset:(double)arg4;
- (struct CGRect)sheetFrameForViewController:(id)arg1 orientation:(long long)arg2;
- (struct CGSize)intrinsicSheetSizeForOrientation:(long long)arg1;
@property(readonly) UIView *sheetView;
- (void)_positionVignetteForSheetFrame:(struct CGRect)arg1;
- (void)setSheetFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateKeyboardSize;
- (void)keyboardDidChange:(id)arg1;
- (void)_animateSheetCancelFinished;
- (void)animateSheetCancelWithDuration:(double)arg1;
- (void)sheetPresentationAnimationDidFinish;
- (void)_animateSheetPresentationFinished;
- (void)animateSheetPresentationWithDuration:(double)arg1;
- (void)_presentSheet;
- (void)_animateCardSendFinished;
- (void)animateCardSendOrientation:(long long)arg1;
- (void)_hostApplicationWillEnterForeground;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)presentSettingsAlertWithTitle:(id)arg1 message:(id)arg2 targetURL:(id)arg3;
- (void)showLocationDeniedAlertWithTitle:(id)arg1 settingsURL:(id)arg2;
- (void)postButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)dismissAutoCompletionViewController;
- (void)presentAutoCompletionViewController:(id)arg1;
- (void)popActionViewController;
- (void)_animateVignetteMaskFromSheetFrame:(struct CGRect)arg1 toSheetFrame:(struct CGRect)arg2 duration:(double)arg3;
- (void)_positionSheetViewAnimatedForViewController:(id)arg1;
- (void)_presentedViewControllerContentSizeDidChange;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_setViewControllerForTrackingSheetSize:(id)arg1;
- (void)pushActionViewController:(id)arg1;
- (void)userTappedSheetAction:(id)arg1;
- (void)reloadSheetActions;
- (id)sheetActions;
- (void)setPostButtonEnabled:(_Bool)arg1;
- (void)didSendWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)send;
- (void)previewImageForAttachment:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)setPreviewOffset:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (id)previewViewForDisplayFormat:(int)arg1 attachments:(id)arg2;
- (int)previewDisplayFormatForAttachments:(id)arg1;
- (void)createPreviewIfNeeded;
- (void)downsampleImageAttachment:(id)arg1;
- (id)URLAttachments;
- (void)removeAttachmentsOfType:(int)arg1;
- (void)removeAllURLs;
- (void)removeAllImages;
- (void)updateAttachment:(id)arg1;
- (void)addAttachment:(id)arg1;
- (_Bool)validateSheetContent;
- (_Bool)validateAttachments;
- (_Bool)canAddContent;
- (void)textViewDidChange:(id)arg1;
@property(retain, nonatomic) NSString *text;
- (_Bool)validateText:(id)arg1;
- (void)setInitialText:(id)arg1;
- (void)hideKeyboardWithAnimationTime:(double)arg1;
- (void)showKeyboardWithAnimationTime:(double)arg1;
- (void)hideKeyboardAnimated:(_Bool)arg1;
- (void)showKeyboardAnimated:(_Bool)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateSheetForBarMetrics:(long long)arg1;
- (long long)barMetricsForSheetSize:(struct CGSize)arg1;
- (long long)barMetricsForInterfaceOrientation:(long long)arg1;
- (void)_updateBarMetricsIfNeeded;
- (void)positionSheetView;
- (void)_positionSheetViewForViewController:(id)arg1;
- (id)previewImageSource;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

