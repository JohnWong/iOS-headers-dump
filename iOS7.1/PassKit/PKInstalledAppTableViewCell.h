//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LSApplicationProxy;

@interface PKInstalledAppTableViewCell : UITableViewCell
{
    LSApplicationProxy *_app;
    id <PKInstalledAppTableViewCellDelegate> _delegate;
}

@property(nonatomic) id <PKInstalledAppTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LSApplicationProxy *app; // @synthesize app=_app;
- (void)openTapped;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

