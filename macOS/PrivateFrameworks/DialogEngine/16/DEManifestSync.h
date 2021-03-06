//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDownloadDelegate.h"

@class DEManifest, DEUpdater, NSMutableDictionary, NSString, NSURLSession;

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate>
{
    BOOL _syncInForeground;
    BOOL _downloadFailure;
    BOOL _success;
    DEManifest *_manifest;
    DEUpdater *_updater;
    NSURLSession *_urlSession;
    NSMutableDictionary *_inProgress;
    CDUnknownBlockType _postSyncBlock;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(nonatomic) BOOL downloadFailure; // @synthesize downloadFailure=_downloadFailure;
@property(nonatomic) BOOL syncInForeground; // @synthesize syncInForeground=_syncInForeground;
@property(copy, nonatomic) CDUnknownBlockType postSyncBlock; // @synthesize postSyncBlock=_postSyncBlock;
@property(retain, nonatomic) NSMutableDictionary *inProgress; // @synthesize inProgress=_inProgress;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) DEUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) DEManifest *manifest; // @synthesize manifest=_manifest;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)sync;
- (void)backgroundSync;
- (void)clean;
- (void)handlePostSyncBlock;
- (void)doIfLatest:(CDUnknownBlockType)arg1 inBackground:(BOOL)arg2 elseDo:(CDUnknownBlockType)arg3;
- (void)cleanupURLSession;
- (BOOL)isLatest;
- (id)init;
- (id)initWithManifest:(id)arg1 updater:(id)arg2;
- (id)initWithManifest:(id)arg1 updater:(id)arg2 syncInForeground:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

