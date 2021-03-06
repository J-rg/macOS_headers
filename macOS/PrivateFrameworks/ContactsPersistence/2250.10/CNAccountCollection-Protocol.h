//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsPersistence/NSObject-Protocol.h>

@class CNObservable, NSArray, NSString, NSURL;
@protocol CNAccountDescription;

@protocol CNAccountCollection <NSObject>
@property(copy) NSString *tag;
@property(readonly) BOOL includeLocalAccount;
@property(readonly) CNObservable *enabledAccountsObservable;
@property(readonly, copy) NSArray *persistentAccounts;
@property(readonly, copy) NSArray *enabledAccounts;
@property(readonly, copy) NSArray *allAccounts;
@property(readonly) id <CNAccountDescription> defaultAccount;
@property(readonly, copy) NSURL *baseURL;
- (id <CNAccountDescription>)accountWithIdentifier:(NSString *)arg1;
- (id)initWithBaseURL:(NSURL *)arg1;
@end

