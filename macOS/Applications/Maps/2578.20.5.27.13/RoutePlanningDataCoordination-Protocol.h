//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CyclePreferences, DrivePreferences, NSString, RideBookingRideOptionStateObserverProxy, Route, RouteCollection, RoutePlanningError, RoutePlanningTiming, RoutePlanningWaypointRequest, TransitRouteOptions, VGVirtualGarage, WaypointSet;
@protocol RoutePlanningDataObservation;

@protocol RoutePlanningDataCoordination <NSObject>
@property(readonly, nonatomic) RoutePlanningTiming *desiredTiming;
@property(readonly, nonatomic) long long desiredTransportType;
@property(readonly, nonatomic) RideBookingRideOptionStateObserverProxy *rideOptionStateObserver;
@property(readonly, nonatomic) VGVirtualGarage *virtualGarage;
@property(readonly, nonatomic) CyclePreferences *cyclePreferences;
@property(readonly, nonatomic) TransitRouteOptions *transitOptions;
@property(readonly, nonatomic) DrivePreferences *drivePreferences;
@property(readonly, nonatomic) RoutePlanningError *routePlanningError;
@property(readonly, nonatomic) RouteCollection *routeCollection;
@property(readonly, nonatomic) CDStruct_02837cd9 currentRouteDisplayedMapRect;
@property(readonly, nonatomic) long long requestState;
@property(readonly, nonatomic) long long transportType;
@property(readonly, nonatomic) NSString *destinationName;
@property(readonly, nonatomic) NSString *originName;
@property(readonly, nonatomic) WaypointSet *resolvedWaypointSet;
@property(readonly, nonatomic) RoutePlanningWaypointRequest *destinationWaypointRequest;
@property(readonly, nonatomic) RoutePlanningWaypointRequest *originWaypointRequest;
- (void)setupDataForObserver:(id <RoutePlanningDataObservation>)arg1;
- (void)removeObserver:(id <RoutePlanningDataObservation>)arg1;
- (void)addObserver:(id <RoutePlanningDataObservation>)arg1;
- (void)restoreInvalidatedRoutePlan;
- (void)invalidateRoutePlan;
- (void)updateCurrentRouteDisplayedMapRect:(CDStruct_02837cd9)arg1;
- (void)updateVirtualGarage:(VGVirtualGarage *)arg1;
- (void)updateCyclePreferences:(CyclePreferences *)arg1;
- (void)updateTransitRouteOptions:(TransitRouteOptions *)arg1;
- (void)updateDrivePreferences:(DrivePreferences *)arg1;
- (void)updateTransportType:(long long)arg1;
- (void)updateCurrentRoute:(Route *)arg1;
@end

