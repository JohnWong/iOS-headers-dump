//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import "MKMapViewDelegate.h"

@class MKMapView, NSString, UITableViewCell, UIView;

@interface EKEventMapDetailItem : EKEventDetailItem <MKMapViewDelegate>
{
    UITableViewCell *_cell;
    MKMapView *_mapView;
    UIView *_overlayView;
    UIView *_loadingView;
}

- (void).cxx_destruct;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2;
- (double)_mapHeight;
- (void)_setAnnotationForEventLocation;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

