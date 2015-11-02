//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

@class NSString;

@interface MPPlaceholderAVItem : MPAVItem
{
    NSString *_album;
    NSString *_artist;
    double _durationFromExternalMetadata;
    _Bool _explicitTrack;
    _Bool _likeStateEnabled;
    NSString *_mainTitle;
    _Bool _supportsLikedState;
}

@property(nonatomic) _Bool supportsLikedState; // @synthesize supportsLikedState=_supportsLikedState;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(nonatomic, getter=isLikedStateEnabled) _Bool likedStateEnabled; // @synthesize likedStateEnabled=_likeStateEnabled;
@property(nonatomic, getter=isExplicitTrack) _Bool explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property(nonatomic) double durationFromExternalMetadata; // @synthesize durationFromExternalMetadata=_durationFromExternalMetadata;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (_Bool)supportsSettingCurrentTime;
- (_Bool)supportsSkip;
- (void)loadAssetAndPlayerItem;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;

@end
