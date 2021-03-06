//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SXResourceDataSource-Protocol.h"

@class FCAssetHandle, FCCloudContext, FCFlintManifest, FCFlintResourceManager, FRFlintDataLoadingGroup, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, SXContext, UIImage;
@protocol FRFlintEmbedConfigurationManager, OS_dispatch_semaphore;

@interface FRFlintDataProvider : NSObject <SXResourceDataSource>
{
    BOOL _shouldReturnThumbnail;
    FCCloudContext *_cloudContext;
    FCFlintManifest *_manifest;
    UIImage *_thumbnailImage;
    FCAssetHandle *_thumbnailAssetHandle;
    NSOperationQueue *_operationQueue;
    NSArray *_requiredResourceIDs;
    NSObject<OS_dispatch_semaphore> *_resourcesSerializationSemaphore;
    NSMutableDictionary *_resourcesByID;
    SXContext *_context;
    NSError *_error;
    NSMutableArray *_fontsToRegister;
    NSMutableArray *_fontResources;
    FRFlintDataLoadingGroup *_loadingGroup;
    long long _relativePriority;
    FCFlintResourceManager *_resourceManager;
    id <FRFlintEmbedConfigurationManager> _embedConfigurationManager;
}

@property(readonly, nonatomic) id <FRFlintEmbedConfigurationManager> embedConfigurationManager; // @synthesize embedConfigurationManager=_embedConfigurationManager;
@property(readonly, nonatomic) FCFlintResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property(retain) FRFlintDataLoadingGroup *loadingGroup; // @synthesize loadingGroup=_loadingGroup;
@property(readonly, nonatomic) NSMutableArray *fontResources; // @synthesize fontResources=_fontResources;
@property(readonly, nonatomic) NSMutableArray *fontsToRegister; // @synthesize fontsToRegister=_fontsToRegister;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SXContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSMutableDictionary *resourcesByID; // @synthesize resourcesByID=_resourcesByID;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *resourcesSerializationSemaphore; // @synthesize resourcesSerializationSemaphore=_resourcesSerializationSemaphore;
@property(retain) NSArray *requiredResourceIDs; // @synthesize requiredResourceIDs=_requiredResourceIDs;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) BOOL shouldReturnThumbnail; // @synthesize shouldReturnThumbnail=_shouldReturnThumbnail;
@property(retain, nonatomic) FCAssetHandle *thumbnailAssetHandle; // @synthesize thumbnailAssetHandle=_thumbnailAssetHandle;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) FCFlintManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void).cxx_destruct;
- (BOOL)isThumbnailAvailableInDocument;
- (BOOL)areFontsLocallyAvailable;
- (BOOL)isDocumentLocallyAvailable;
- (id)imageResourceResponseForFileURL:(id)arg1 perserveColorSpace:(BOOL)arg2 withSize:(struct CGSize)arg3 andQuality:(unsigned long long)arg4;
- (CDUnknownBlockType)loadImagesForImageRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fileURLForURL:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)_resourceIDFromResourceURL:(id)arg1;
- (id)_loadAssetsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_loadAssetURLsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_loadFontsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_loadJSONWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setCurrentRelativePriority:(long long)arg1;
- (void)resetFailedDownloads;
- (id)loadAssetsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)loadAssetURLsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)loadFontsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)loadJSONWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)loadContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)initializeLoadingGroup;
- (id)initWithFlintManifest:(id)arg1 resourceManager:(id)arg2 cloudContext:(id)arg3 embedConfigurationManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

