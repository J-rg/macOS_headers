//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IASPPhase, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface IASPPhaseManager : NSObject
{
    IASPPhase *_currentPhase;
    float _prevPhaseProgress;
    float _totalCompletedProgress;
    NSObject<OS_dispatch_semaphore> *_phasesSemaphore;
    NSMutableArray *_phases;
}

+ (id)sharedPhaseManager;
@property float totalCompletedProgress; // @synthesize totalCompletedProgress=_totalCompletedProgress;
@property float prevPhaseProgress; // @synthesize prevPhaseProgress=_prevPhaseProgress;
@property(retain) NSMutableArray *phases; // @synthesize phases=_phases;
@property(retain) NSObject<OS_dispatch_semaphore> *phasesSemaphore; // @synthesize phasesSemaphore=_phasesSemaphore;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (float)setProgress:(float)arg1 forPhaseWithName:(id)arg2;
- (BOOL)setDoneForPhaseWithName:(id)arg1;
- (void)logPhases;
- (void)loadPhases;
- (BOOL)hasPhases;
- (float)currentProgress;
- (id)currentPhase;
- (void)clearPhases;
- (void)advanceToPhaseNamed:(id)arg1;
- (void)advanceToNextPhase;
- (void)addPhase:(id)arg1;
- (float)_totalPercentageThroughPhaseNamed:(id)arg1;
- (float)_totalPercentage;
- (float)_setProgress:(float)arg1 forPhaseWithName:(id)arg2;
- (BOOL)_setDoneForPhaseWithName:(id)arg1;
- (unsigned long long)_indexOfPhaseWithName:(id)arg1;
- (id)_exportablePhases;
- (void)_clearPhases;
- (void)_advanceToPhaseNamed:(id)arg1;
- (void)_advanceToNextPhase;
- (id)_registryPhases;
- (id)_registryCurrentPhaseName;
- (void)_signalPhasesSemaphore;
- (void)_waitForPhasesSemaphore;

@end

