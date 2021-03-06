//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "WBSCloudHistoryPushAgent.h"

@class APSConnection, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface WBSCloudHistoryPushAgent : NSObject <NSXPCListenerDelegate, WBSCloudHistoryPushAgent>
{
    NSXPCListener *_xpcListener;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushNotificationStateQueue;
}

- (void).cxx_destruct;
- (void)_setHasAcknowlegedPushNotifications:(BOOL)arg1;
- (BOOL)_hasAcknowledgedPushNotifications;
- (void)_setHasUnacknowledgedPushNotifications:(BOOL)arg1;
- (BOOL)_hasUnacknowledgedPushNotifications;
- (id)_userDefaults;
- (id)_pushTopic;
- (void)clearAcknowledgedPushNotifications;
- (void)acknowledgePendingPushNotifications;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (void)getPushNotifications:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

