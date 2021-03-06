//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMUser.h>

@class NSColor, NSObject, NSString, SMSystem_Client;
@protocol OS_dispatch_queue;

@interface SMUser_Client : SMUser
{
    BOOL _shouldPromoteToAdmin;
    BOOL _passwordIsTemporary;
    BOOL _allowFileVaultUnlock;
    NSObject<OS_dispatch_queue> *daemonPropertyQueue;
    SMSystem_Client *sourceSystem;
    NSString *_clearPassword;
}

+ (id)keyPathsForValuesAffectingExtraInfoColor;
+ (id)keyPathsForValuesAffectingDisplayExtraInfo;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)interestedDaemonKeysLimitedToMigratableUsers;
+ (id)interestedDaemonKeys;
@property BOOL allowFileVaultUnlock; // @synthesize allowFileVaultUnlock=_allowFileVaultUnlock;
@property BOOL passwordIsTemporary; // @synthesize passwordIsTemporary=_passwordIsTemporary;
@property(retain) NSString *clearPassword; // @synthesize clearPassword=_clearPassword;
@property BOOL shouldPromoteToAdmin; // @synthesize shouldPromoteToAdmin=_shouldPromoteToAdmin;
@property(retain) SMSystem_Client *sourceSystem; // @synthesize sourceSystem;
@property(retain) NSObject<OS_dispatch_queue> *daemonPropertyQueue; // @synthesize daemonPropertyQueue;
- (void).cxx_destruct;
@property(readonly) NSColor *extraInfoColor;
@property(readonly) NSString *displayExtraInfo;
@property(readonly) NSString *displayName;
- (id)initWithXpcDictionaryRepresentation:(id)arg1 belongingToSystem:(id)arg2;

@end

