//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIActionSheet.h>

@interface _UIRotatingActionSheet : UIActionSheet
{
    id <_UIRotatingActionSheetDelegate> _rotatingSheetDelegate;
    id <UIActionSheetDelegate> _delegateWhileRotating;
    unsigned long long _arrowDirections;
    _Bool _isRotating;
}

@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) id <_UIRotatingActionSheetDelegate> rotatingSheetDelegate; // @synthesize rotatingSheetDelegate=_rotatingSheetDelegate;
- (void)didRotate;
- (void)_updateSheetPositionAfterRotation;
- (void)willRotate;
- (void)doneWithSheet;
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;
- (_Bool)presentSheet;
- (void)dealloc;
- (id)init;

@end
