//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDocumentActivityViewController : UIActivityViewController
{
    _Bool hideSystemActivities;
    UIDocumentInteractionController *_documentInteractionController;
    _Bool _hideSystemActivities;
}

@property(nonatomic) _Bool hideSystemActivities; // @synthesize hideSystemActivities=_hideSystemActivities;
@property(nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)sourceIsManaged;
- (_Bool)_shouldShowSystemActivity:(id)arg1;

@end

