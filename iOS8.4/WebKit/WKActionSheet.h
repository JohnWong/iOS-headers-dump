//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

__attribute__((visibility("hidden")))
@interface WKActionSheet : UIAlertController
{
    id <WKActionSheetDelegate> _sheetDelegate;
    unsigned long long _arrowDirections;
    _Bool _isRotating;
    _Bool _readyToPresentAfterRotation;
    struct RetainPtr<UIViewController> _presentedViewControllerWhileRotating;
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate>> _popoverPresentationControllerDelegateWhileRotating;
}

@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) id <WKActionSheetDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didRotate;
- (void)_didRotateAndLayout;
- (void)updateSheetPosition;
- (void)willRotate;
- (void)doneWithSheet;
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;
- (_Bool)presentSheet;
- (void)dealloc;
- (id)init;

@end

