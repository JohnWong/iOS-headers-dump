//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ABMemberNameView, ABStyleProvider, ABUIPerson;

@interface ABMemberCell : UITableViewCell
{
    ABStyleProvider *_styleProvider;
    _Bool _layoutComplete;
    _Bool _isMeCard;
    ABMemberNameView *_contactNameView;
    ABUIPerson *_person;
}

@property(nonatomic) _Bool isMeCard; // @synthesize isMeCard=_isMeCard;
@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABMemberNameView *contactNameView; // @synthesize contactNameView=_contactNameView;
- (id)_scriptingInfo;
- (id)description;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)dealloc;
- (id)initWithStyleProvider:(id)arg1 reuseIdentifier:(id)arg2;

@end

