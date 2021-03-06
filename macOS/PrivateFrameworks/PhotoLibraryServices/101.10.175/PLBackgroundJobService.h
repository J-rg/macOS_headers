//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLBackgroundJobLibraryCoordinatorDelegate-Protocol.h>
#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class NSDictionary, NSString, PFCoalescer, PLBackgroundJobLibraryCoordinator, PLForegroundMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object, PLBackgroundJobServiceDelegate;

@interface PLBackgroundJobService : NSObject <PLBackgroundJobLibraryCoordinatorDelegate, PLForegroundMonitorDelegate>
{
    NSObject<OS_xpc_object> *_xpcActivity;
    unsigned long long _state;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PFCoalescer *_registrationCoalescer;
    PLForegroundMonitor *_foregroundMonitor;
    double _registrationCoalescerPushBackTimeInterval;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByPriority;
    struct os_unfair_lock_s _stateLock;
    struct os_unfair_lock_s _bundlesToProcessByPriorityLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_xpcDeferTimer;
    BOOL _xpcInstructedToDefer;
    BOOL _simulateXpcDeferring;
    BOOL _cameraForeground;
    id <PLBackgroundJobServiceDelegate> _delegate;
}

+ (id)_activityIdentifierForPriority:(unsigned long long)arg1;
+ (id)_criteriaForActivityPriority:(unsigned long long)arg1;
@property(nonatomic) __weak id <PLBackgroundJobServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3;
- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)arg1 priority:(unsigned long long)arg2;
- (void)_stopRunningBackgroundJobs;
- (void)_startRunningBackgroundJobsWithPriority:(unsigned long long)arg1;
- (id)_getBundleRecordsFromProcessingSetForAllPriorites;
- (id)_getBundleRecordsFromProcessingSetForPriority:(unsigned long long)arg1;
- (void)_removeAllBundlesFromProcessingSet;
- (void)_removeBundleRecordFromProcessingSet:(id)arg1 priority:(unsigned long long)arg2;
- (void)_appendBundleRecordsToProcessingSet:(id)arg1 priority:(unsigned long long)arg2;
- (void)_loadBundleRecordsDictionaryFromUserDefaults;
- (void)_persistBundleRecordsDictionaryToUserDefaults;
- (id)_bundlesToProcessByPriorityAsPathStrings;
- (void)_stopPollingForActivityStatus;
- (void)_startPollingForActivityStatus;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)arg1;
- (void)_registerActivityWithPriority:(unsigned long long)arg1;
- (void)_registerActivityIfNecessaryOnBundles:(id)arg1;
- (BOOL)_serviceReadyForRegistration;
- (void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)arg1;
- (void)registerActivityIfNecessaryOnBundle:(id)arg1;
- (void)signalBackgroundProcessingNeededOnLibrary:(id)arg1;
- (void)_verifyStateTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_setServiceStateAlreadyLocked:(unsigned long long)arg1;
- (void)_setServiceState:(unsigned long long)arg1;
- (unsigned long long)_getServiceStateAlreadyLocked;
- (unsigned long long)_getServiceState;
- (void)invalidateLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_shutdown;
- (void)_simulateXPCShouldDefer;
- (id)_getBundlePathsToProcess;
- (id)initWithLibraryCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

