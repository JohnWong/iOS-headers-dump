//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (double)fadeDuration;
+ (unsigned int)prefetchedTiles;
+ (_Bool)shouldDrawOnMainThread;
@property struct CGSize tileSize;
@property unsigned long long levelsOfDetailBias;
@property unsigned long long levelsOfDetail;
- (_Bool)_canDisplayConcurrently;
- (void)_display;
- (void)dealloc;
- (void)_dealloc;
- (void)invalidateContents;
- (void)setContents:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
@property(getter=isDrawingEnabled) _Bool drawingEnabled;
@property double maximumTileScale;
@property struct CGColor *fillColor;
- (void)displayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (_Bool)canDrawRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;

@end

