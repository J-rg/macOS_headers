//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INMoveFileIntent.h"

@class NSArray, NSSet, NSString;

@interface INMoveFileIntent : INIntent <INMoveFileIntent>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setProperties:(id)arg1;
@property(readonly, copy) NSArray *properties;
- (void)setDestinationName:(id)arg1;
@property(readonly, copy) NSString *destinationName;
- (void)setDestinationType:(id)arg1;
@property(readonly, copy) NSString *destinationType;
- (void)setSourceName:(id)arg1;
@property(readonly, copy) NSString *sourceName;
- (void)setSourceType:(id)arg1;
@property(readonly, copy) NSString *sourceType;
- (void)setEntityNames:(id)arg1;
@property(readonly, copy) NSArray *entityNames;
- (void)setEntityTypes:(unsigned long long)arg1;
@property(readonly) unsigned long long entityTypes;
- (id)initWithEntityTypes:(unsigned long long)arg1 entityNames:(id)arg2 sourceType:(id)arg3 sourceName:(id)arg4 destinationType:(id)arg5 destinationName:(id)arg6 properties:(id)arg7;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
@property(copy) NSSet *entityTypeSet;
- (id)initWithEntityTypeSet:(id)arg1 entityNames:(id)arg2 sourceType:(id)arg3 sourceName:(id)arg4 destinationType:(id)arg5 destinationName:(id)arg6 properties:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

