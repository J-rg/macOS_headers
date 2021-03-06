//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem, QLCacheFileProviderVersionedFileIdentifier;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest
{
    FPItem *_item;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) FPItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (BOOL)shouldProvideFoldedGenericIcon;
- (id)computeContentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5;

// Remaining properties
@property(readonly) QLCacheFileProviderVersionedFileIdentifier *fileIdentifier; // @dynamic fileIdentifier;

@end

