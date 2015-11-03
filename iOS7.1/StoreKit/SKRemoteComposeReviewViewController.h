//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "SKUIClientComposeReviewViewController.h"

@class SKComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController>
{
    SKComposeReviewViewController *_composeReviewViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKComposeReviewViewController *composeReviewViewController; // @synthesize composeReviewViewController=_composeReviewViewController;
- (void)promptForStarRating;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end

