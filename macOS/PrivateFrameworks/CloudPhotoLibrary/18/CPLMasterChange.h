//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface CPLMasterChange : CPLItemChange
{
    NSDictionary *_resourcePerResourceType;
    short _importedBy;
    short _videoFrameRate;
    NSArray *_resources;
    NSArray *_expungeableResourceStates;
    NSDate *_creationDate;
    NSString *_itemType;
    NSDate *_importDate;
    NSString *_filename;
    NSString *_importGroupIdentifier;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    long long _originalOrientation;
    unsigned long long _fullSizeJPEGSource;
    NSString *_originatingFingerprint;
    NSString *_codec;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property(nonatomic) short videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) short importedBy; // @synthesize importedBy=_importedBy;
@property(copy, nonatomic) NSString *originatingFingerprint; // @synthesize originatingFingerprint=_originatingFingerprint;
@property(nonatomic) unsigned long long fullSizeJPEGSource; // @synthesize fullSizeJPEGSource=_fullSizeJPEGSource;
@property(nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(retain, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property(copy, nonatomic) NSString *importGroupIdentifier; // @synthesize importGroupIdentifier=_importGroupIdentifier;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSArray *expungeableResourceStates; // @synthesize expungeableResourceStates=_expungeableResourceStates;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
- (BOOL)isMasterChange;
- (BOOL)allowsToOnlyUploadNewResources;
- (BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (unsigned long long)dataClassType;
- (BOOL)supportsDeletion;
- (BOOL)supportsResourceType:(unsigned long long)arg1;
- (BOOL)supportsResources;
- (id)name;
- (void)setName:(id)arg1;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (void)_copyDerivatives:(unsigned long long *)arg1 count:(int)arg2 ifMatchingResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;
- (id)resourceForType:(unsigned long long)arg1;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)propertiesDescription;
- (long long)dequeueOrder;
@property(readonly, nonatomic) BOOL isVideo;
@property(readonly, nonatomic) BOOL isImage;
- (id)init;
- (BOOL)validateRecordForTracker:(id)arg1;

@end

