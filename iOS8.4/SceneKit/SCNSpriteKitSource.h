//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitSource : SCNImageSource
{
    SKScene *_scene;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSourceForContext:(void *)arg1;

@end

