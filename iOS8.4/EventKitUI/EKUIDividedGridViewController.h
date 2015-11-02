//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray;

@interface EKUIDividedGridViewController : UIViewController
{
    long long _type;
    double _preferredWidth;
    NSArray *_buttonTitles;
    NSArray *_allCells;
    id <EKUIDividedGridViewControllerDelegate> _delegate;
    NSArray *_weekViews;
}

+ (id)dividerColor;
@property(retain) NSArray *weekViews; // @synthesize weekViews=_weekViews;
@property __weak id <EKUIDividedGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSArray *allCells; // @synthesize allCells=_allCells;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)_rowHeightForWidth:(double)arg1;
- (double)_neededHeight;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)cellTapped:(id)arg1;
- (double)_defaultButtonWidthForButtonAtIndex:(long long)arg1;
- (id)_newDividerView;
- (void)loadView;
- (id)initWithType:(long long)arg1 buttonTitles:(id)arg2;

@end

