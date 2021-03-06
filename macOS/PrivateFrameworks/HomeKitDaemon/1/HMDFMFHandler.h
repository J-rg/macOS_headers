//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface HMDFMFHandler : HMFObject <HMFLogging, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
+ (id)sharedHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)queryFMFStatusWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

