//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSXPCConnectionDelegate-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint, PARPromise, PARSessionConfiguration;
@protocol OS_dispatch_queue, PARDaemonXPC;

@interface PARSearchClient : NSObject <NSXPCConnectionDelegate>
{
    // Error parsing type: Aq, name: _opCounter
    NSString *_lastQuery;
    // Error parsing type: AB, name: _configured
    PARPromise *_endpointPromise;
    NSObject<OS_dispatch_queue> *_idQueue;
    unsigned long long _idState[22];
    id <PARDaemonXPC> _remoteObject;
    NSXPCConnection *_connection;
    PARSessionConfiguration *_config;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)daemonConnection;
+ (id)_deafListenerEndpoint;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) PARSessionConfiguration *config; // @synthesize config=_config;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) id <PARDaemonXPC> remoteObject; // @synthesize remoteObject=_remoteObject;
- (void).cxx_destruct;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)getImageMap:(CDUnknownBlockType)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listSessions:(CDUnknownBlockType)arg1;
- (void)listenToFlusher:(CDUnknownBlockType)arg1;
- (void)feedback:(CDUnknownBlockType)arg1;
- (void)reportEvent:(id)arg1;
- (unsigned long long)request:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)_queryIdForObject:(id)arg1;
- (void)coalesceQueryId:(unsigned long long)arg1;
- (void)bag:(CDUnknownBlockType)arg1;
- (void)configure;
@property(retain) NSXPCListenerEndpoint *endpoint;
- (void)dealloc;
- (void)_invalidateConnection;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

