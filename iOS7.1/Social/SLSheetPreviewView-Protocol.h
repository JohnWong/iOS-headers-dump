//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, SLAttachment, UIImage;

@protocol SLSheetPreviewView
@property(retain, nonatomic) NSArray *principalAttachments;
@property(nonatomic) _Bool isTranscoding;
- (void)sheetPresentationAnimationDidFinish;
- (void)setCurrentBarMetrics:(long long)arg1;
- (void)setPreviewImage:(UIImage *)arg1 forAttachment:(SLAttachment *)arg2;
- (_Bool)previewDependsOnAttachment:(SLAttachment *)arg1;
@end

