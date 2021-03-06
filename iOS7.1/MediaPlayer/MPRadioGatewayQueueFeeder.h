//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

@class MPAVItem, RadioStation;

@interface MPRadioGatewayQueueFeeder : MPQueueFeeder
{
    MPAVItem *_gatewayItem;
    RadioStation *_station;
}

@property(retain, nonatomic) RadioStation *station; // @synthesize station=_station;
@property(retain, nonatomic) MPAVItem *gatewayItem; // @synthesize gatewayItem=_gatewayItem;
- (void).cxx_destruct;
- (_Bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(_Bool)arg2 startPlayback:(_Bool)arg3;
- (_Bool)isRadioQueueFeeder;
- (_Bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(_Bool)arg2;
- (unsigned long long)realRepeatType;
- (_Bool)playerPreparesItemsForPlaybackAsynchronously;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (unsigned long long)itemTypeForIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (unsigned long long)initialPlaybackQueueDepth;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (_Bool)canSkipToPreviousItem;
- (_Bool)canSkipItem:(id)arg1;
- (_Bool)canSeek;

@end

