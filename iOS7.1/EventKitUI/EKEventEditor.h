//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditor.h>

@class EKEvent, EKEventDateEditItem, UIColor;

@interface EKEventEditor : EKCalendarItemEditor
{
    EKEventDateEditItem *_dateItem;
    _Bool _isTransitioning;
    _Bool _showAttachments;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool showAttachments; // @synthesize showAttachments=_showAttachments;
- (void).cxx_destruct;
- (id)_viewForSheet;
- (_Bool)_canDetachSingleOccurrence;
- (void)_revertEvent;
- (void)_copyEventForPossibleRevert;
- (void)setShowsTimeZone:(_Bool)arg1;
- (unsigned long long)entityType;
- (id)notificationNamesForLocaleChange;
- (id)defaultAlertTitle;
- (void)setupDeleteButton;
- (id)_nameForDeleteButton;
- (id)defaultTitleForCalendarItem;
- (id)preferredTitle;
- (_Bool)saveCalendarItemWithSpan:(int)arg1 error:(id *)arg2;
- (id)_editItems;
- (void)refreshStartAndEndDates;
@property(retain, nonatomic) EKEvent *event;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)loadView;

@end

