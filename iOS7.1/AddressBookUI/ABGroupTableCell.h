//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ABGroupWrapperDelegate.h"

@class ABGroupWrapper, ABStyleProvider;

@interface ABGroupTableCell : UITableViewCell <ABGroupWrapperDelegate>
{
    ABGroupWrapper *_groupWrapper;
    ABStyleProvider *_styleProvider;
}

@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABGroupWrapper *groupWrapper; // @synthesize groupWrapper=_groupWrapper;
- (void)groupWrapper:(id)arg1 didBecomeSelected:(_Bool)arg2;
- (void)updateFromGroupWrapper;
- (void)tintColorDidChange;
- (void)dealloc;

@end

