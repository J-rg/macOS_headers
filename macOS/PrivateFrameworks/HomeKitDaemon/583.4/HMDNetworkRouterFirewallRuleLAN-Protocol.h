//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRule-Protocol.h>

@protocol HMDNetworkRouterFirewallRuleLAN <HMDNetworkRouterFirewallRule>
@property(readonly, nonatomic, getter=isRequiredForHAPFunctionality) BOOL requiredForHAPFunctionality;
@property(readonly, nonatomic) unsigned char direction;
@property(readonly, nonatomic, getter=areConnectionsWithOtherAccessoriesAllowed) BOOL allowInterAccessoryConnections;
@property(readonly, nonatomic) unsigned long long purpose;
@end

