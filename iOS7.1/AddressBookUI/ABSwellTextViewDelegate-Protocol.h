//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABSwellTextView;

@protocol ABSwellTextViewDelegate <NSObject>
- (void)swellTextView:(ABSwellTextView *)arg1 didChangeSize:(struct CGSize)arg2;
- (void)swellTextViewTextDidChange:(ABSwellTextView *)arg1;
- (void)swellTextViewDidEndEditing:(ABSwellTextView *)arg1;
- (void)swellTextViewDidBeginEditing:(ABSwellTextView *)arg1;
- (_Bool)swellTextViewShouldEndEditing:(ABSwellTextView *)arg1;
- (_Bool)swellTextViewShouldBeginEditing:(ABSwellTextView *)arg1;
@end

