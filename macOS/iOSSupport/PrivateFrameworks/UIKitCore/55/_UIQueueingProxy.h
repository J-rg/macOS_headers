//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UITargetedProxy.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIQueueingProxy : _UITargetedProxy
{
    struct os_unfair_lock_s _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    CDUnknownBlockType _shouldSuspendInvocationBlock;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)removeAllEnqueuedInvocations;
- (void)resume;
- (void)_dispatchSuspendedMessages;
- (void)suspend;
- (void)forwardInvocation:(id)arg1;

@end

