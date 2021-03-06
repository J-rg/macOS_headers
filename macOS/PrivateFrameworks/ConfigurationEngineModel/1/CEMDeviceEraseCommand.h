//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMDeviceEraseCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)allowedPayloadKeys;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;
@property(readonly, nonatomic) NSString *payloadPIN;
@property(readonly, nonatomic) NSNumber *payloadPreserveDataPlan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

