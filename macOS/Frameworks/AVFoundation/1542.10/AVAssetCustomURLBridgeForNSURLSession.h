//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSURLSessionDataDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_taskToRequest;
    NSURLSession *_session;
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)init;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)_cancelRequestID:(unsigned long long)arg1;
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char *)arg3;
- (id)_lookupRequestForDataTask:(id)arg1;
- (void)_unregisterRequestForDataTask:(id)arg1;
- (void)_registerRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

