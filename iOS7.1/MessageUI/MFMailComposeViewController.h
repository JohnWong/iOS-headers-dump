//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface MFMailComposeViewController : UINavigationController
{
    id _internal;
    CDUnknownBlockType _setupAnimationBlock;
    _Bool _didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
}

+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
+ (_Bool)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (unsigned long long)maximumAttachmentSize;
+ (_Bool)canSendMailSourceAccountManagement:(int)arg1;
+ (_Bool)canSendMail;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setAutorotationDelegate:(id)arg1;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)addSetupAnimationBlock:(CDUnknownBlockType)arg1;
- (void)finalizeCompositionValues;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setContentVisible:(_Bool)arg1;
- (void)setKeyboardVisible:(_Bool)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(_Bool)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (void)setSubject:(id)arg1;
@property(nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)_internalViewController;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

