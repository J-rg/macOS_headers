//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CMPedometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fOffsetUpdateHandler;
    CDUnknownBlockType fCumulativeUpdateHandler;
    long long fStepCountFromStart;
    long long fPushCountFromStart;
    long long fStepCountOffset;
    long long fPushCountOffset;
    double fDistanceFromStart;
    double fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
    double fActiveTimeFromStart;
    double fActiveTimeOffset;
    double fValidStartDate;
    BOOL fStopUpdates;
    BOOL fFloorCountingAvailable;
    BOOL fPaceAndCadenceAvailable;
    CDUnknownBlockType fEventHandler;
    BOOL fStopEventUpdates;
    int fWorkoutType;
    int fElevationAscendedStart;
    int fElevationAscendedOffset;
    int fElevationDescendedStart;
    int fElevationDescendedOffset;
    _Bool fElevationCountingAvailable;
    int fDistanceSource;
}

- (void)_queryPedometerCalibrationBinsWithHandler:(CDUnknownBlockType)arg1 forType:(long long)arg2 forRemote:(BOOL)arg3;
- (id)_strideCalibrationDump;
- (void)_stopPedometerEventUpdates;
- (void)_startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleRecordQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2 shouldStartUpdates:(_Bool)arg3;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2 shouldStartUpdates:(_Bool)arg3;
- (void)_subscribeToCumulativePedometerUpdates:(CDUnknownBlockType)arg1;
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_stopPedometerUpdates;
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

