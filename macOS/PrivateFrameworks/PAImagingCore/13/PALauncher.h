//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface PALauncher : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_launchGroup;
    unsigned long long _state;
}

- (void).cxx_destruct;
- (void)waitForTasksToComplete;
- (void)stopQueuingTasks;
- (void)enqueueTask:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)startQueuingTasks;
- (id)initWithName:(id)arg1;
- (id)init;

@end

