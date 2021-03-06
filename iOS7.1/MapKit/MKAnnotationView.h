//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKAnnotationRepresentation.h"
#import "MKLocatableObject.h"

@class MKAnnotationManager, MKUserLocationAnnotationViewProxy, NSString, UICalloutView, UIImage, VKAnchorWrapper, VKAttributedRouteMatch, _MKAnnotationViewAnchor;

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject>
{
    _Bool _customTransformApplied;
    _Bool _internalTransformApplied;
    _Bool _animatingToCoordinate;
    _Bool _tracking;
    CDStruct_2c43369c _presentationCoordinate;
    double _presentationCourse;
    CDUnknownBlockType _presentationCoordinateChangedCallback;
    MKUserLocationAnnotationViewProxy *_userLocationProxy;
    double _rotationRadians;
    _MKAnnotationViewAnchor *_anchor;
    VKAttributedRouteMatch *_routeMatch;
    double _mapRotationRadians;
    _Bool _explicitlyHidden;
    _Bool _hiddenForOffscreen;
    _Bool _hiddenForInvalidPoint;
    double _mapPitchRadians;
    long long _mapDisplayStyle;
    MKAnnotationManager *_annotationManager;
    id <MKAnnotation> _annotation;
    UICalloutView *_calloutView;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    UIView *_detailCalloutAccessoryView;
    NSString *_reuseIdentifier;
    UIImage *_image;
    unsigned long long _mapType;
    unsigned long long _zIndex;
    struct CGPoint _centerOffset;
    struct CGPoint _calloutOffset;
    unsigned long long _dragState;
    CDUnknownBlockType _calloutHitTest;
    struct {
        unsigned int disabled:1;
        unsigned int selected:1;
        unsigned int canShowCallout:1;
        unsigned int isHighlighted:1;
        unsigned int canDisplayDisclosureInCallout:1;
        unsigned int canDisplayPlacemarkInCallout:1;
        unsigned int draggable:1;
    } _flags;
    struct CGPoint _leftCalloutOffset;
    struct CGPoint _rightCalloutOffset;
}

+ (_Bool)_followsTerrain;
+ (id)_disclosureCalloutButton;
+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)droppedPinTitle;
+ (id)currentLocationTitle;
@property(nonatomic, getter=_isHiddenForInvalidPoint, setter=_setHiddenForInvalidPoint:) _Bool hiddenForInvalidPoint; // @synthesize hiddenForInvalidPoint=_hiddenForInvalidPoint;
@property(nonatomic, getter=_mapDisplayStyle, setter=_setMapDisplayStyle:) long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(nonatomic, getter=_mapPitchRadians, setter=_setMapPitchRadians:) double mapPitchRadians; // @synthesize mapPitchRadians=_mapPitchRadians;
@property(nonatomic, getter=_mapRotationRadians, setter=_setMapRotationRadians:) double mapRotationRadians; // @synthesize mapRotationRadians=_mapRotationRadians;
@property(retain, nonatomic, setter=_setRouteMatch:) VKAttributedRouteMatch *_routeMatch; // @synthesize _routeMatch;
@property(retain, nonatomic) UIView *detailCalloutAccessoryView; // @synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property(nonatomic) struct CGPoint rightCalloutOffset; // @synthesize rightCalloutOffset=_rightCalloutOffset;
@property(nonatomic) struct CGPoint leftCalloutOffset; // @synthesize leftCalloutOffset=_leftCalloutOffset;
@property(copy, nonatomic) CDUnknownBlockType _calloutHitTest; // @synthesize _calloutHitTest;
@property(nonatomic, getter=_isTracking, setter=_setTracking:) _Bool _tracking; // @synthesize _tracking;
@property(nonatomic, getter=_isAnimatingToCoordinate, setter=_setAnimatingToCoordinate:) _Bool _animatingToCoordinate; // @synthesize _animatingToCoordinate;
@property(nonatomic, setter=_setPresentationCourse:) double _presentationCourse; // @synthesize _presentationCourse;
@property(copy, nonatomic, setter=_setPresentationCoordinateChangedCallback:) CDUnknownBlockType _presentationCoordinateChangedCallback; // @synthesize _presentationCoordinateChangedCallback;
@property(nonatomic, setter=_setAnnotationManager:) __weak MKAnnotationManager *_annotationManager; // @synthesize _annotationManager;
- (void).cxx_destruct;
- (void)_didUpdatePosition;
- (void)_updateFromMap;
- (id)_vkMarker;
- (id)_containerView;
- (_Bool)_canChangeOrientation;
- (unsigned long long)_orientationCount;
- (_Bool)_hasAlternateOrientation;
- (void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_userTrackingModeDidChange:(id)arg1;
- (void)_enableRotationForHeadingMode:(double)arg1;
- (id)_annotationContainer;
- (void)setHidden:(_Bool)arg1;
- (void)_setHiddenForOffscreen:(_Bool)arg1;
- (void)_resetZIndexNotify:(_Bool)arg1;
- (void)_resetZIndex;
- (void)_setZIndex:(unsigned long long)arg1;
- (void)_setZIndex:(unsigned long long)arg1 notify:(_Bool)arg2;
- (unsigned long long)_zIndex;
- (void)_setMapType:(unsigned long long)arg1;
- (unsigned long long)_mapType;
- (_Bool)isPersistent;
- (void)_setCanDisplayPlacemarkInCallout:(_Bool)arg1;
- (_Bool)_canDisplayPlacemarkInCallout;
- (void)_setCanDisplayDisclosureInCallout:(_Bool)arg1;
- (_Bool)_canDisplayDisclosureInCallout;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long dragState;
@property(nonatomic, getter=isDraggable) _Bool draggable;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) struct CGRect _significantFrame;
@property(readonly, nonatomic, getter=_significantBounds) struct CGRect significantBounds;
- (struct CGRect)_mapkit_visibleRect;
@property(readonly, nonatomic) MKUserLocationAnnotationViewProxy *_userLocationProxy;
@property(readonly, nonatomic) VKAnchorWrapper *anchor;
@property(nonatomic, setter=_setPresentationCoordinate:) CDStruct_c3b9c2ee _presentationCoordinate; // @synthesize _presentationCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(nonatomic) struct CGPoint calloutOffset;
@property(nonatomic) struct CGPoint centerOffset;
- (struct CGPoint)_draggingDropOffset;
@property(nonatomic) _Bool canShowCallout;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(retain, nonatomic) UIImage *image;
- (id)_contentLayer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setCalloutView:(id)arg1;
- (id)_calloutView;
@property(retain, nonatomic) id <MKAnnotation> annotation;
- (void)prepareForReuse;
@property(readonly, nonatomic) NSString *reuseIdentifier;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

