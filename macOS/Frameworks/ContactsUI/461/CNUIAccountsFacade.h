//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNUIAccountsFacadeRequestRunner;

__attribute__((visibility("hidden")))
@interface CNUIAccountsFacade : NSObject
{
    ACAccountStore *_accountStore;
    CNUIAccountsFacadeRequestRunner *_requestRunner;
}

@property(readonly, nonatomic) CNUIAccountsFacadeRequestRunner *requestRunner; // @synthesize requestRunner=_requestRunner;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2;
- (id)init;

@end

