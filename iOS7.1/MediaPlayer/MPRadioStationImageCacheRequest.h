//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRadioArtworkImageCacheRequest.h>

@class RadioStation;

@interface MPRadioStationImageCacheRequest : MPRadioArtworkImageCacheRequest
{
    RadioStation *_radioStation;
}

@property(readonly, nonatomic) RadioStation *radioStation; // @synthesize radioStation=_radioStation;
- (void).cxx_destruct;
- (id)initWithRadioStation:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool usePlaceholderAsFallback;

@end

