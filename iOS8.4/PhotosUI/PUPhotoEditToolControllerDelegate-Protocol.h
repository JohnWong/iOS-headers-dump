//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIImage, PLPhotoEditModel, PLPhotoEditRenderer, PUPhotoEditToolController, UIImage, UIScrollView, UIView;

@protocol PUPhotoEditToolControllerDelegate <NSObject>
- (void)toolControllerDidFinish:(PUPhotoEditToolController *)arg1;
- (struct CGSize)toolControllerOriginalImageSize:(PUPhotoEditToolController *)arg1;
- (CIImage *)toolControllerBaseCIImage:(PUPhotoEditToolController *)arg1;
- (UIImage *)toolControllerBaseImage:(PUPhotoEditToolController *)arg1;
- (UIScrollView *)toolControllerImageScrollView:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerPreviewView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditRenderer *)toolControllerMainRenderer:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerMainContainerView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditModel *)toolControllerUneditedPhotoEditModel:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(PUPhotoEditToolController *)arg1;
- (void)toolController:(PUPhotoEditToolController *)arg1 didChangePreferredPreviewViewInsetsAnimated:(_Bool)arg2;
- (void)toolControllerDidChangePreferredRenderMode:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(PUPhotoEditToolController *)arg1;
- (void)toolController:(PUPhotoEditToolController *)arg1 updateModelDependentControlsAnimated:(_Bool)arg2;
@end

