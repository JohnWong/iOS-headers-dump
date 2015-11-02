//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SSTermsAndConditions, UIActivityIndicatorView, UITextView, UIView;

@interface MPTermsViewController : UIViewController
{
    _Bool _needToLoadTerms;
    SSTermsAndConditions *_termsAndConditions;
    id <MPTermsViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_topSpacerView;
    UIView *_bottomSpacerView;
    UITextView *_termsTextView;
}

@property(retain, nonatomic) UITextView *termsTextView; // @synthesize termsTextView=_termsTextView;
@property(retain, nonatomic) UIView *bottomSpacerView; // @synthesize bottomSpacerView=_bottomSpacerView;
@property(retain, nonatomic) UIView *topSpacerView; // @synthesize topSpacerView=_topSpacerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak id <MPTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_failedToAcceptTermsWithError:(id)arg1;
- (void)_userAcceptedTerms;
- (void)_failedToLoadTermsWithError:(id)arg1;
- (void)_loadedTerms:(id)arg1;
- (void)_startLoadingTerms;
- (void)_setupViewForFailedToAcceptTerms;
- (void)_setupViewForFailedToLoadTerms;
- (void)_setupViewForShowingTerms;
- (void)_setupViewForLoadingTerms;
- (void)_cancelAction:(id)arg1;
- (void)_acceptAction:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

