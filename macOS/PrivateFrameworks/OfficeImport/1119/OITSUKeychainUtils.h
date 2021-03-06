//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OITSUKeychainUtils : NSObject
{
}

+ (id)errorForStatus:(int)arg1;
+ (BOOL)shouldUseTouchID;
+ (void)setTouchIDAppPreferenceEnabled:(BOOL)arg1;
+ (void)cryptoProcessData:(id)arg1 encrypt:(BOOL)arg2 localizedReason:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (long long)touchIDAvailability;
+ (id)defaultDocumentPasswordDescriptionString;
+ (id)defaultServiceForGenericItem:(id)arg1;
+ (void)authenticateAndUpgradeKeychainResult:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)removeGenericItem:(id)arg1 error:(id *)arg2;
+ (id)mutableQueryForGenericItem:(id)arg1 returnData:(BOOL)arg2;
+ (BOOL)lookupGenericItem:(id)arg1 account:(id *)arg2 passphrase:(id *)arg3 policy:(long long)arg4 error:(id *)arg5;
+ (BOOL)lookupGenericItem:(id)arg1 passphrase:(id *)arg2 policy:(long long)arg3 error:(id *)arg4;
+ (void)cancelTouchIDIfNeeded;
+ (void)lookupGenericItem:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 completionQueue:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (BOOL)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 error:(id *)arg8;

@end

