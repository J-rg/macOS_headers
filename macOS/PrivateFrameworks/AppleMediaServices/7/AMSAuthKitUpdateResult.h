//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject
{
    ACAccount *_account;
    NSDictionary *_authenticationResults;
    unsigned long long _credentialSource;
}

+ (id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 option:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;
@property(readonly, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4;

@end

