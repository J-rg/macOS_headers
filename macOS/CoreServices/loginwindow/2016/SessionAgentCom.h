//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LFLogindConnectionInterface-Protocol.h"
#import "LFSessionAgentListenerInterface-Protocol.h"
#import "LFSessionLogoutConnectionInterface-Protocol.h"

@class LFSessionAgentListener, NSString, NSXPCConnection;

@interface SessionAgentCom : NSObject <LFSessionAgentListenerInterface, LFSessionLogoutConnectionInterface, LFLogindConnectionInterface>
{
    LFSessionAgentListener *_sessionAgentListener;
    NSXPCConnection *_miniBuddyConnection;
    NSXPCConnection *_faceTimeConnection;
    NSXPCConnection *_logoutConnection;
    BOOL _attemptToMessageMiniBuddyBeforeClientRefSet;
}

+ (id)sharedSessionAgentCom;
- (void)SACLOFinishDelayedLogout:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACLORegisterLogoutStatusCallacks:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACLOStartLogoutWithOptions:(int)arg1 subType:(int)arg2 showConfirmation:(BOOL)arg3 countDownTime:(int)arg4 talOptions:(int)arg5 logoutOptions:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)SACLOStartLogout:(int)arg1 subType:(int)arg2 showConfirmation:(BOOL)arg3 talOptions:(int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)SACLogoutComplete:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SMCloseSessionWithOptions:(id)arg1;
- (void)SACNewSessionSignalReady:(CDUnknownBlockType)arg1;
- (void)SACStartSessionForUser:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACStopSessionForLoginWindow:(CDUnknownBlockType)arg1;
- (void)SACStartSessionForLoginWindow:(CDUnknownBlockType)arg1;
- (void)SACSaveSetupUserScreenShots:(CDUnknownBlockType)arg1;
- (void)SACMiniBuddySignalFinishedStage1WithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACMiniBuddyCopyUpgradeDictionary:(CDUnknownBlockType)arg1;
- (void)SACSetFinalSnapshot:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACStopProgressIndicator:(CDUnknownBlockType)arg1;
- (void)SACStartProgressIndicator:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACBeginLoginTransition:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACSwitchToLoginWindow:(CDUnknownBlockType)arg1;
- (void)SACSwitchToUser:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACSetKeyboardType:(int)arg1 productID:(int)arg2 vendorID:(int)arg3 countryCode:(int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)SACSetAutologinPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACRestartForUser:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACScreenSaverDidFadeInBackground:(BOOL)arg1 psnHi:(unsigned int)arg2 psnLow:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)SACScreenSaverIsRunningInBackground:(CDUnknownBlockType)arg1;
- (void)SACScreenSaverTimeRemaining:(CDUnknownBlockType)arg1;
- (void)SACScreenSaverStopNowWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACScreenSaverStopNow:(CDUnknownBlockType)arg1;
- (void)SACScreenSaverStartNow:(CDUnknownBlockType)arg1;
- (void)SACSetScreenSaverCanRun:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACScreenSaverCanRun:(CDUnknownBlockType)arg1;
- (void)SACScreenSaverIsRunning:(CDUnknownBlockType)arg1;
- (void)SACShieldWindowShowing:(CDUnknownBlockType)arg1;
- (void)SACScreenLockEnabled:(CDUnknownBlockType)arg1;
- (void)SACLockScreenImmediate:(CDUnknownBlockType)arg1;
- (void)SACScreenLockPreferencesChanged:(CDUnknownBlockType)arg1;
- (void)SACRemoveAssertScreenLockViaTouchIDBlocked:(CDUnknownBlockType)arg1;
- (void)SACAssertScreenLockViaTouchIDBlocked:(CDUnknownBlockType)arg1;
- (void)SACFaceTimeCallRingStop:(CDUnknownBlockType)arg1;
- (void)SACFaceTimeCallRingStart:(CDUnknownBlockType)arg1;
- (void)SACClassroomLockHide:(CDUnknownBlockType)arg1;
- (void)SACClassroomLockShow:(CDUnknownBlockType)arg1;
- (void)SACClassroomLockSetCaption:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)messageLogoutStatusClietOfLogoutFail:(id)arg1;
- (void)messageLogoutStatusClietOfLogoutSuccess:(id)arg1;
- (void)setLogoutStatusConnection:(id)arg1;
- (BOOL)hasLogoutStatusConnection;
- (void)messageMiniBuddyUIShowing;
- (BOOL)attemptToContactMiniBuddyMade;
- (void)setMiniBuddyConnection:(id)arg1;
- (void)messageFaceTimeCancelCall;
- (void)messageFaceTimeMuteCall;
- (BOOL)connectionHasEntitlement:(id)arg1;
- (id)debugLogConnectionInfo;
- (id)debugLogConnectionInfoFromPID:(int *)arg1 withName:(id *)arg2;
- (id)endpoint;
- (void)setFaceTimeConnection:(id)arg1;
- (void)reconnectToLogind;
- (void)stopSAServer;
- (void)startSAServer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

