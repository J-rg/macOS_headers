//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSession-Protocol.h>

@class NSXPCConnection, TKSmartCardSlotEngine;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession>
{
    TKSmartCardSlotEngine *_slot;
    BOOL _transmitting;
    BOOL _valid;
    BOOL _active;
    long long _endPolicy;
    NSXPCConnection *_connection;
}

@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property long long endPolicy; // @synthesize endPolicy=_endPolicy;
@property BOOL active; // @synthesize active=_active;
@property BOOL valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)terminateWithReply:(CDUnknownBlockType)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (void)transmit:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithSlot:(id)arg1 connection:(id)arg2;

@end

