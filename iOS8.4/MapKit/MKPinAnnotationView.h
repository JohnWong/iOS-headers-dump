//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class UIImageView;

@interface MKPinAnnotationView : MKAnnotationView
{
    UIImageView *_shadowView;
    id _delegate;
    int _pinType;
    int _state;
    _Bool _animatesDrop;
}

+ (struct CGPoint)_rightCalloutOffset;
+ (struct CGPoint)_leftCalloutOffset;
+ (struct CGPoint)_calloutOffset;
+ (struct CGPoint)_shadowAnchorPoint;
+ (struct CGPoint)_perceivedAnchorPoint;
+ (struct UIImage *)_shadowImage;
+ (id)_reuseIdentifier;
+ (id)_pinsWithType:(int)arg1 mapDisplayStyle:(unsigned long long)arg2;
+ (id)_dropBounceAnimation;
+ (id)_bounceAnimation;
+ (struct CGRect)_pinFrameForPosition:(struct CGPoint)arg1;
+ (struct CGRect)_desiredBounds;
+ (struct CGSize)_perceivedSize;
+ (Class)layerClass;
- (void).cxx_destruct;
- (int)_state;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(_Bool)arg1;
- (void)_liftForDraggingAnimated:(_Bool)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setDragState:(unsigned long long)arg1;
- (void)_dropAfterDraggingAndRevertPosition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_dropFromPoint:(struct CGPoint)arg1 shadowStartPoint:(struct CGPoint)arg2 distance:(double)arg3 maxDistance:(double)arg4 withDelay:(double)arg5;
- (id)_bounceAnimation:(_Bool)arg1 withBeginTime:(double)arg2 addToLayer:(_Bool)arg3;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_cleanupAfterPinDropAnimation;
- (void)_stopDrop;
- (void)_removeAllAnimations;
- (void)_didUpdatePosition;
- (void)setCenter:(struct CGPoint)arg1;
- (void)_updateShadowLayer;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_updatePinType;
- (void)_reset;
- (int)_pinType;
- (void)_invalidateImage;
- (void)_setPinType:(int)arg1;
- (id)_pinJumpImages;
- (id)_pinBounceImages;
- (struct UIImage *)_floatingImage;
- (struct UIImage *)_highlightedImage;
- (struct UIImage *)_image;
- (id)_pins;
- (id)description;
- (void)_setMapDisplayStyle:(unsigned long long)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (struct CGRect)_significantBounds;
- (void)setAnnotation:(id)arg1;
@property(nonatomic) _Bool animatesDrop;
@property(nonatomic) unsigned long long pinColor;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (struct CGPoint)_draggingDropOffset;
- (struct CGPoint)centerOffset;

@end

