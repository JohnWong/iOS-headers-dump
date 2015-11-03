//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface CLLocationManagerInternal : NSObject
{
    struct __CLClient *fClient;
    id <CLLocationManagerDelegate> fDelegate;
    double fDistanceFilter;
    double fDesiredAccuracy;
    _Bool fUpdatingLocation;
    CDStruct_c3f64973 fLocation;
    NSString *fLocationEventType;
    _Bool fCapabilitiesValid;
    struct {
        double bestAccuracy;
    } fCapabilities;
    _Bool fUpdatingHeading;
    double fHeadingFilter;
    int fHeadingOrientation;
    _Bool fPersistentMonitoringEnabled;
    _Bool fAllowsLocationPrompts;
    _Bool fPreviousAuthorizationStatusValid;
    int fPreviousAuthorizationStatus;
    long long fActivityType;
    int fPausesLocationUpdatesAutomatically;
    _Bool fPaused;
    _Bool fAllowsMapCorrection;
    _Bool fBatchingLocation;
    _Bool fUpdatingVehicleSpeed;
    _Bool fUpdatingVehicleHeading;
    NSMutableSet *fRangedRegions;
}

@property(readonly, nonatomic) NSMutableSet *rangedRegions; // @synthesize rangedRegions=fRangedRegions;
- (void)dealloc;
- (void)stopUpdatingLocationAutoPaused;
- (int)PausesLocationUpdatesAutomatically;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;

@end

