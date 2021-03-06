//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString, PHFetchResult;
@protocol IPXPhotoPickerAccessoryController;

@protocol IPXPhotoPickerConfiguration <NSObject>
@property(nonatomic) BOOL requiresSelectionToContinue;
@property(retain, nonatomic) id <IPXPhotoPickerAccessoryController> accessoryController;
@property(copy, nonatomic) NSSet *allowedAssetMediaTypes;
@property(copy, nonatomic) PHFetchResult *preselectedAssets;
@property(copy, nonatomic) NSString *localizedTitle;
@property(copy, nonatomic) NSString *targetName;
@end

