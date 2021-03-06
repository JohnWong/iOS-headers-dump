//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer
{
}

+ (id)offscreenRendererWithContext:(id)arg1 size:(struct CGSize)arg2;
- (void)dealloc;
- (void)_createFramebufferIfNeeded;
- (void)_resolveAndDiscard;
- (void)_unbindFramebuffer;
- (void)_bindFramebuffer;
- (void)_deleteFramebuffer;
@property(readonly, nonatomic) unsigned int textureID;
- (struct UIImage *)snapshotAtTime:(double)arg1;
- (struct UIImage *)snapshot;
- (struct CGImage *)copySnapshotWithSize:(struct CGSize)arg1;
- (struct CGImage *)createCGImageSnapshot:(double)arg1;
- (void)render;
- (unsigned long long)_sampleCount;
@property(nonatomic) unsigned long long antialiasingMode;
- (id)_initWithOptions:(id)arg1 isPrivateRenderer:(_Bool)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(_Bool)arg4 context:(void *)arg5 size:(struct CGSize)arg6;

@end

