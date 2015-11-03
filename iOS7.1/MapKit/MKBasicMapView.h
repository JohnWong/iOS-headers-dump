//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class VKMapView;

__attribute__((visibility("hidden")))
@interface MKBasicMapView : UIView
{
    UIView *_hostView;
    VKMapView *_mapView;
    double _mapModeStartTime;
    double _trafficStartTime;
    _Bool _changingViewSize;
}

@property(readonly, nonatomic, getter=isChangingViewSize) _Bool changingViewSize; // @synthesize changingViewSize=_changingViewSize;
@property(nonatomic) double trafficStartTime; // @synthesize trafficStartTime=_trafficStartTime;
@property(nonatomic) double mapModeStartTime; // @synthesize mapModeStartTime=_mapModeStartTime;
@property(readonly, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1 ignoreIfViewInWindow:(_Bool)arg2;
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1;
- (void)updateStatsForSwitchingToMapType:(long long)arg1;
- (void)updateStatsForTrafficEnabledTime;
- (void)_updateStatsForTrafficEnabledTime:(_Bool)arg1;
- (void)updateStatsForEnablingTraffic:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_updateForCurrentScreen;
- (void)_updateMapViewHidden;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toCameraModelPointToView:(id)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_animateCanvasForBounds:(struct CGRect)arg1;
@property(nonatomic) _Bool rendersInBackground;
- (double)calloutContainerCanvasScale;
- (struct CGSize)calloutContainerCanvasSize;
- (void)addCalloutSubview:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;

@end

