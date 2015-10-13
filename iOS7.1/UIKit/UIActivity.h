//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIActivity : NSObject
{
    CDUnknownBlockType _activityCompletionHandler;
}

+ (long long)activityCategory;
+ (id)_activityGenericImage:(id)arg1;
+ (id)_activityFunctionImage:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType activityCompletionHandler; // @synthesize activityCompletionHandler=_activityCompletionHandler;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (struct CGSize)_thumbnailSize;
- (void)_setSubject:(id)arg1;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanup;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_beforeActivity;
- (id)_activityImage;
- (_Bool)_canPerformWithSuppliedActivityItems:(id)arg1;

@end
