//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, VKAnnotationMarker, VKLabelMarker, VKMapView, VKOverlayPainter;

@protocol VKMapViewDelegate <NSObject>

@optional
- (void)mapLayer:(VKMapView *)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)mapLayer:(VKMapView *)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didFinishChangingMapDisplayStyle:(unsigned long long)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;
- (void)mapLayerWillStartFlyoverTour:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 canShowFlyoverDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 showingFlyoverDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canZoomInDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didBecomePitched:(_Bool)arg2;
- (VKOverlayPainter *)mapLayer:(VKMapView *)arg1 painterForOverlay:(id <VKOverlay>)arg2;
- (void)mapLayer:(VKMapView *)arg1 annotationMarker:(VKAnnotationMarker *)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
- (id <VKTrackableAnnotationPresentation>)mapLayer:(VKMapView *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)mapLayerDidBecomeFullyDrawn:(VKMapView *)arg1 hasFailedTiles:(_Bool)arg2;
- (void)mapLayerDidBecomePartiallyDrawn:(VKMapView *)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 didChangeRegionAnimated:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 willChangeRegionAnimated:(_Bool)arg2;
- (void)mapLayerDidDraw:(VKMapView *)arg1;
- (void)mapLayerDidChangeVisibleRegion:(VKMapView *)arg1;
- (void)mapLayerDidFailLoadingTiles:(VKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapLayerDidFinishLoadingTiles:(VKMapView *)arg1;
- (void)mapLayerDidStartLoadingTiles:(VKMapView *)arg1;
@end

