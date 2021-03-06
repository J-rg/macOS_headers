//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface SandboxRuntimeExtensionController : NSObject
{
    NSMutableDictionary *_cachedExtensions;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void).cxx_destruct;
- (void)prepareForTermination;
- (void)invalidateAllExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateExtensionWithType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestGenericExtensionWithType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)makeConnection;
- (id)init;

@end

