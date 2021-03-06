//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class PKPass, PKPassGroupStackView;

@protocol PKPassGroupStackViewDelegate
- (long long)suppressedContent;
- (_Bool)passesGrowWhenFlipped;
- (void)groupStackViewDidEndReordering:(PKPassGroupStackView *)arg1;
- (void)groupStackViewDidBeginReordering:(PKPassGroupStackView *)arg1;
- (void)groupStackView:(PKPassGroupStackView *)arg1 deleteConfirmedForPass:(PKPass *)arg2;

@optional
- (void)flyInAnimationDidEnd;
- (void)groupStackView:(PKPassGroupStackView *)arg1 didAnimateToState:(int)arg2;
- (void)groupStackView:(PKPassGroupStackView *)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
@end

