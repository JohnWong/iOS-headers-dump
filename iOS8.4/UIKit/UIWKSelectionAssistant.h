//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWebSelectionAssistant.h>

@class UILongPressGestureRecognizer, _UITextServiceSession;

@interface UIWKSelectionAssistant : UIWebSelectionAssistant
{
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
}

- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)blockSelectionChangedWithTouch:(long long)arg1 withFlags:(long long)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (_Bool)shouldHandleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)selectionChanged;
- (struct CGRect)selectionFrame;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) UILongPressGestureRecognizer *selectionLongPressRecognizer;
- (id)initWithView:(id)arg1;

@end

