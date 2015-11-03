//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ABStyleProvider, ABUIPerson, UITableViewCell;

@interface ABMemberNameView : UIView
{
    _Bool _highlighted;
    _Bool _isMeCard;
    ABStyleProvider *_styleProvider;
    ABUIPerson *_person;
    UITableViewCell *_cell;
}

@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool isMeCard; // @synthesize isMeCard=_isMeCard;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
- (id)_cachedDisabledBoldTextAttributes;
- (id)_cachedDisabledRegularTextAttributes;
- (id)_cachedPlaceholderTextAttributes;
- (id)_cachedBoldTextAttributes;
- (id)_cachedRegularTextAttributes;
- (id)_cachedMemberNameRegularFont;
- (id)_attributedNameWithNameComponents:(id)arg1 delimiter:(id)arg2 highlightedIndex:(long long)arg3 romanName:(_Bool)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCell:(id)arg1 styleProvider:(id)arg2;

@end
