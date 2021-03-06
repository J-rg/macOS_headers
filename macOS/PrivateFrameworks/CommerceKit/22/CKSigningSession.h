//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKStoreClient;

@interface CKSigningSession : NSObject
{
    CKStoreClient *_storeClient;
    id _sessionToken;
}

+ (id)signJavaScriptString:(id)arg1;
@property(retain, nonatomic) id sessionToken; // @synthesize sessionToken=_sessionToken;
@property(readonly, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (void)processSignature:(id)arg1;
- (id)signData:(id)arg1 error:(id *)arg2;
- (void)closeSession;
- (void)openPrimedSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isSessionOpen;
- (void)dealloc;
- (id)initWithStoreClient:(id)arg1;

@end

