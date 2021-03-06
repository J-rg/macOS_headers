//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICMusicSubscriptionFairPlayKeyStatus, ICMusicSubscriptionStatus, ICUserIdentity, NSOperationQueue, SSVFairPlaySubscriptionStatus, SSVSubscriptionStatus;
@protocol OS_dispatch_queue;

@interface _MPCloudServiceStatusControllerImplementation : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _accountStoreChangeObservationCount;
    unsigned long long _automaticLeaseRefreshCount;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_cloudLibraryStatusAccessQueue;
    long long _cloudLibraryStatus;
    unsigned long long _cloudLibraryObservationCount;
    NSOperationQueue *_fairPlayOperationQueue;
    unsigned long long _fairPlaySubscriptionStatusObservationCount;
    BOOL _hasLoadedMatchStatus;
    BOOL _hasLoadedSubscriptionAvailability;
    BOOL _hasLoadedURLBag;
    ICMusicSubscriptionStatus *_lastKnownMusicSubscriptionStatus;
    unsigned long long _matchStatusObservationCount;
    unsigned long long _matchStatus;
    BOOL _observingNetworkReachability;
    BOOL _hasSubscriptionLease;
    BOOL _shouldPlaybackRequireSubscriptionLease;
    unsigned long long _shouldPlaybackRequireSubscriptionLeaseObservationCount;
    BOOL _subscriptionAvailable;
    unsigned long long _subscriptionAvailabilityObservationCount;
    unsigned long long _subscriptionLeaseUsageCount;
    NSOperationQueue *_subscriptionOperationQueue;
    unsigned long long _URLBagObservationCount;
    ICUserIdentity *_userIdentity;
    ICMusicSubscriptionFairPlayKeyStatus *_lastKnownSubscriptionFairPlayKeyStatus;
    SSVSubscriptionStatus *_subscriptionStatus;
}

+ (id)implementationWithUserIdentity:(id)arg1;
+ (id)implementations;
+ (id)globalSerialQueue;
@property(readonly, copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(readonly, nonatomic) ICMusicSubscriptionFairPlayKeyStatus *lastKnownSubscriptionFairPlayKeyStatus; // @synthesize lastKnownSubscriptionFairPlayKeyStatus=_lastKnownSubscriptionFairPlayKeyStatus;
@property(readonly, copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void).cxx_destruct;
- (void)_updateSubscriptionStatusWithIgnoreCachePolicy:(BOOL)arg1;
- (void)_updateSubscriptionAvailability;
- (void)_updateMatchStatus;
- (void)_updateForNetworkReachabilityObserversCountChange;
- (BOOL)_currentPurchaseHistoryEnabled;
- (BOOL)_currentCloudLibraryEnabled;
- (BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(char *)arg1;
- (void)_enableICMLErrorReasonChange:(id)arg1;
- (void)_subscriptionStatusDidChange:(id)arg1;
- (void)_userIdentityStoreDidChange:(id)arg1;
- (void)_cloudClientAuthenticationDidChange;
- (void)refreshMusicSubscriptionStatus;
- (void)endObservingSubscriptionAvailability;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingFairPlaySubscriptionStatus;
- (void)endObservingMatchStatus;
- (void)endObservingCloudLibraryEnabled;
- (void)beginObservingSubscriptionAvailability;
- (void)beginObservingPurchaseHistoryEnabled;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)beginObservingMatchStatus;
- (void)beginObservingCloudLibraryEnabled;
- (id)_subscriptionOperationQueue;
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatus *musicSubscriptionStatus;
@property(readonly, nonatomic) BOOL shouldPlaybackRequireSubscriptionLease;
@property(readonly, nonatomic) unsigned long long matchStatus;
@property(readonly, nonatomic) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property(readonly, nonatomic, getter=isSubscriptionAvailable) BOOL subscriptionAvailable;
@property(readonly, nonatomic, getter=isPurchaseHistoryEnabled) BOOL purchaseHistoryEnabled;
@property(readonly, nonatomic, getter=isCloudLibraryEnabled) BOOL cloudLibraryEnabled;
- (void)dealloc;
- (id)_initWithUserIdentity:(id)arg1;
- (id)init;

@end

