//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "SKUIClientStorePageViewController.h"

@class SKStorePageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController>
{
    SKStorePageViewController *_storePageViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKStorePageViewController *storePageViewController; // @synthesize storePageViewController=_storePageViewController;
- (void)showProductPageWithItemIdentifier:(id)arg1;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

@end

