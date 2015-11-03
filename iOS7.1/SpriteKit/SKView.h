//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EAGLContext, NSData, NSMutableDictionary, NSObject<OS_dispatch_queue>, SKDisplayLink, SKLabelNode, SKScene;

@interface SKView : UIView
{
    unsigned long long _frameInterval;
    SKDisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_updateQueue;
    double _timePreviousUpdate;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    EAGLContext *_context;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    unsigned int _frameBuffer;
    _Bool _usesAsyncUpdateQueue;
    _Bool _hasRenderedOnce;
    _Bool _hasRenderedForCurrentUpdate;
    _Bool _isInTransition;
    _Bool _disableInput;
    float _transitionDuration;
    float _transitionTime;
    SKScene *_nextScene;
    SKScene *_scene;
    _Bool _paused;
    NSData *_spriteArrayHint;
    struct SKCRenderer *_renderer;
    NSMutableDictionary *_touchMap;
    float _prevBackingScaleFactor;
    NSObject<OS_dispatch_queue> *_renderQueue;
    _Bool showsFPS;
    _Bool showsNodeCount;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKScene *scene;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 updateQueue:(id)arg2;
- (id)init;
- (id)_textureFromNode:(id)arg1;
- (id)textureFromNode:(id)arg1;
@property(nonatomic) _Bool showsPhysics;
@property(nonatomic) _Bool showsDrawCount;
@property(nonatomic) _Bool showsNodeCount; // @synthesize showsNodeCount;
@property(nonatomic) _Bool showsFPS; // @synthesize showsFPS;
- (_Bool)showsSpriteBounds;
- (void)setShowsSpriteBounds:(_Bool)arg1;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (void)writeContentsToPNG:(id)arg1;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) long long frameInterval;
- (void)willMoveToSuperview:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_renderContent;
- (void)renderContent;
- (void)renderCallback:(double)arg1;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)presentScene:(id)arg1;
- (void)_setupContext;
@property(retain) EAGLContext *_context;
- (void)displayLayer:(id)arg1;
- (_Bool)isOpaque;
- (void)remakeFramebuffer:(double)arg1;
- (void)_initialize;
- (void)dealloc;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromScene:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toScene:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopRenderCallbacks;
- (void)startRenderCallbacks;
- (void)setUpRenderCallback;
- (void)bindOpenGLContext;
@property(nonatomic) _Bool _usesAsyncUpdateQueue;
@property(nonatomic) _Bool ignoresSiblingOrder;
@property(nonatomic, getter=isAsynchronous) _Bool asynchronous;
@property(readonly, nonatomic) int _spriteSubmitCount;
@property(readonly, nonatomic) int _spriteRenderCount;
@property(readonly, nonatomic) double _fps;
@property(readonly, nonatomic) SKScene *_nextScene;
@property(readonly, nonatomic) SKScene *_scene;
- (void)_update:(double)arg1;
- (void)_showAllStats;
@property(nonatomic) _Bool _showsTotalAreaRendered;
@property(nonatomic) _Bool _showsCulledNodesInNodeCount;
@property(nonatomic) _Bool _showsGPUStats;
@property(nonatomic) _Bool _showsCPUStats;
@property(nonatomic) _Bool _showsCoreAnimationFPS;
@property(nonatomic) _Bool _shouldCenterStats;
@property(nonatomic) _Bool _showsSpriteBounds;
- (void)renderToOpenGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2 scaleFactor:(double)arg3;
- (id)snapshot;

@end
