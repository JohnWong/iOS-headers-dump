//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem
{
    _Bool _originalSwitchState;
    _Bool _currentSwitchState;
}

- (void)_switchChanged:(id)arg1;
- (id)footerTitle;
- (double)footerHeightForWidth:(double)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)forceTableReloadOnCommit;
- (_Bool)requiresReconfigurationOnCommit;
- (_Bool)isInline;

@end

