//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class Album;

@protocol IPImageMgrDelegate
- (Album *)currentAlbum;
- (void)imageRotatedForInfo:(struct IPPhotoInfo *)arg1;
- (void)infoDeleted:(struct IPPhotoInfo *)arg1;
- (void)infoReverted:(struct IPPhotoInfo *)arg1;
- (BOOL)stillNeedThumbFor:(struct IPPhotoInfo *)arg1;
- (BOOL)stillNeed:(struct IPPhotoInfo *)arg1 atSize:(struct CGSize)arg2;
- (void)loadedFullResImage:(struct IPFileImage *)arg1 forInfo:(struct IPPhotoInfo *)arg2;
- (void)loadedImage:(struct IPFileImage *)arg1 forInfo:(struct IPPhotoInfo *)arg2;

@optional
- (void)infoChanged:(struct IPPhotoInfo *)arg1;
@end

