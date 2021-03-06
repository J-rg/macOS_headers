//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNShowcastServiceReachabilityMonitor, TSKRequestSenderFactory, TSUNetworkReachability;

@interface KNShowcastParticipantMonitor : NSObject
{
    BOOL _offline;
    unsigned long long _viewerCount;
    unsigned long long _presenterCount;
    TSKRequestSenderFactory *_requestSenderFactory;
    KNShowcastServiceReachabilityMonitor *_reachabilityMonitor;
    id _reachabilityObserver;
    TSUNetworkReachability *_networkReachability;
}

@property(retain, nonatomic) TSUNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) id reachabilityObserver; // @synthesize reachabilityObserver=_reachabilityObserver;
@property(retain, nonatomic) KNShowcastServiceReachabilityMonitor *reachabilityMonitor; // @synthesize reachabilityMonitor=_reachabilityMonitor;
@property(retain, nonatomic) TSKRequestSenderFactory *requestSenderFactory; // @synthesize requestSenderFactory=_requestSenderFactory;
@property(nonatomic, getter=isOffline) BOOL offline; // @synthesize offline=_offline;
@property(nonatomic) unsigned long long presenterCount; // @synthesize presenterCount=_presenterCount;
@property(nonatomic) unsigned long long viewerCount; // @synthesize viewerCount=_viewerCount;
- (void).cxx_destruct;
- (void)p_removeReachabilityObserver;
- (void)p_addReachabilityObserver;
- (void)p_makeNetworkReachabilityIfNeeded;
- (void)p_requestDidFail;
- (void)p_performParticipantCountRequestWithLastResponseToken:(id)arg1;
- (void)p_startUpdatingParticipantCount;
- (void)stop;
- (void)startWithShowcastToken:(id)arg1;
- (void)dealloc;

@end

