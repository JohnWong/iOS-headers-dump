//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIRemoteDictionaryViewController : UITableViewController
{
    NSArray *_availableDictionaries;
}

- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_handleDeleteButton:(id)arg1;
- (void)_handleDownloadButton:(id)arg1;
- (id)_downloadOptionsDictionary;
- (id)_normalizedLanguageStringForLanguageCode:(id)arg1;
- (id)_downloadButton;
- (id)_downloadImageWithTintColor:(id)arg1;
- (id)_cloudBackgroundImage;
- (id)_downloadArrowImage;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

