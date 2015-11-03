//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKEditItemViewControllerDelegate.h"

@class EKCalendarItem, EKEventStore, UIResponder, UIViewController<EKEditItemViewControllerProtocol>;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate>
{
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKCalendarItem *_calendarItem;
    id <EKCalendarItemEditItemDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
    UIResponder *_selectedResponder;
}

@property(retain, nonatomic) UIResponder *selectedResponder; // @synthesize selectedResponder=_selectedResponder;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) __weak id <EKCalendarItemEditItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewForActionSheet;
- (_Bool)shouldPinKeyboard;
- (_Bool)isInline;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewControllerWantsKeyboardPinned:(_Bool)arg1;
- (_Bool)editItemViewControllerCommit:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)endInlineEditing;
- (void)notifyRequiresHeightChange;
- (void)notifyTextChanged;
- (void)notifySubitemDidCommit:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)editorDidScroll:(id)arg1;
- (_Bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (id)titleForHeader;
- (id)footerView;
- (double)footerHeightForWidth:(double)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3;
- (unsigned long long)numberOfSubitemsInSubsection:(unsigned long long)arg1;
- (unsigned long long)numberOfSubsections;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (void)applicationDidResume;
- (_Bool)requiresReconfigurationOnCommit;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (void)reset;
- (void)refreshFromCalendarItemAndStore;
- (id)calendarItem;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;

@end

