//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUSettings.h>

@interface PUPhotoEditProtoSettings : PUSettings
{
    _Bool _useOldPhotosEditor2;
    _Bool _showLevelIndicator;
    _Bool _showResetToolButton;
    _Bool _allowAnyPlugin;
    _Bool _cropMaskBlurred;
    _Bool _autoCropEnabled;
    _Bool _simulateDownload;
    _Bool _simulateDownloadFailure;
    double _cropSideMargins;
    double _cropWheelSize;
    double _cropRecomposeDelay;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;
@property(nonatomic) _Bool simulateDownload; // @synthesize simulateDownload=_simulateDownload;
@property(nonatomic) double cropRecomposeDelay; // @synthesize cropRecomposeDelay=_cropRecomposeDelay;
@property(nonatomic) _Bool autoCropEnabled; // @synthesize autoCropEnabled=_autoCropEnabled;
@property(nonatomic) _Bool cropMaskBlurred; // @synthesize cropMaskBlurred=_cropMaskBlurred;
@property(nonatomic) double cropWheelSize; // @synthesize cropWheelSize=_cropWheelSize;
@property(nonatomic) double cropSideMargins; // @synthesize cropSideMargins=_cropSideMargins;
@property(nonatomic) _Bool allowAnyPlugin; // @synthesize allowAnyPlugin=_allowAnyPlugin;
@property(nonatomic) _Bool showResetToolButton; // @synthesize showResetToolButton=_showResetToolButton;
@property(nonatomic) _Bool showLevelIndicator; // @synthesize showLevelIndicator=_showLevelIndicator;
@property(nonatomic) _Bool useOldPhotosEditor2; // @synthesize useOldPhotosEditor2=_useOldPhotosEditor2;
- (void)setDefaultValues;

@end

