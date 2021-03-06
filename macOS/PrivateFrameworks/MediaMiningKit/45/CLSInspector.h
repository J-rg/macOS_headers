//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject
{
    NSArray *_profileClasses;
    NSMutableDictionary *_profileClassesByIdentifier;
    NSArray *_informantClasses;
    NSMutableDictionary *_informantClassesByIdentifier;
    NSMutableDictionary *_informantClassesByFamilyIdentifier;
}

+ (void)invalidateSharedTransientCaches;
+ (void)invalidateSharedPersistentCaches;
+ (void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+ (void)invalidateAllSharedCaches;
+ (id)sharedInspector;
- (void).cxx_destruct;
- (void)performInvestigation:(id)arg1 options:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)performInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)performInvestigation:(id)arg1;
- (id)profileIdentifierForHash:(unsigned long long)arg1;
- (Class)profileClassForIdentifier:(id)arg1;
- (id)informantIdentifierForHash:(unsigned long long)arg1;
- (id)informantIdentifiersForAnyIdentifier:(id)arg1;
- (id)informantClassesForAnyIdentifier:(id)arg1;
- (id)informantClassesForFamilyIdentifier:(id)arg1;
- (Class)informantClassForIdentifier:(id)arg1;
- (id)init;

@end

