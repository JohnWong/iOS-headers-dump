//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInternalEvent.h>

__attribute__((visibility("hidden")))
@interface UIMoveEvent : UIInternalEvent
{
    long long _moveDirection;
    unsigned long long _focusHeading;
}

@property(nonatomic, setter=_setFocusHeading:) unsigned long long _focusHeading; // @synthesize _focusHeading;
@property(nonatomic, setter=_setMoveDirection:) long long _moveDirection; // @synthesize _moveDirection;
- (void)_sendEventToResponder:(id)arg1;
- (long long)type;

@end

