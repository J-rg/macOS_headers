//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface _NSProgressProxy : NSProgress
{
    id <NSProgressPublisher> _forwarder;
    BOOL _isOld;
    CDUnknownBlockType _unpublishingHandler;
}

- (BOOL)isOld;
- (void)_acknowledgeWithSuccess:(BOOL)arg1;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (double)fractionCompleted;
- (void)resume;
- (void)prioritize;
- (void)pause;
- (void)cancel;
- (void)unpublish;
- (void)publish;
- (void)setFileCompletedCount:(id)arg1;
- (void)setFileTotalCount:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileOperationKind:(id)arg1;
- (void)setThroughput:(id)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setPausingHandler:(CDUnknownBlockType)arg1;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setCancellable:(BOOL)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)_setRemoteValues:(id)arg1 forKeys:(id)arg2;
- (void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_invokeUnpublishingHandler;
- (void)_invokePublishingHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3;

@end

