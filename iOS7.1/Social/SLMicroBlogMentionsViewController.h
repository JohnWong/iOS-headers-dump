//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSObject<SLMicroBlogMentionsDelegate>, NSObject<SLMicroBlogSheetDelegate>, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSObject<SLMicroBlogSheetDelegate> *_sheetDelegate;
    NSArray *_mentions;
    NSString *_searchString;
    UITableView *_tableView;
    NSObject<SLMicroBlogMentionsDelegate> *_delegate;
}

+ (id)_blankSurrogateProfileImage;
@property(nonatomic) __weak NSObject<SLMicroBlogMentionsDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)chooseRow:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)loadView;
- (void)setSearchString:(id)arg1;
- (void)updateMentions;
- (void)setMentions:(id)arg1;
- (id)mentions;
- (void)completeWithSelectedMention:(id)arg1;
- (id)initWithSheetDelegate:(id)arg1;

@end

