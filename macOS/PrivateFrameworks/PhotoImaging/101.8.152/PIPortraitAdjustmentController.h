//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString;

@interface PIPortraitAdjustmentController : PIAdjustmentController
{
    long long _version;
}

+ (id)strengthKey;
+ (id)kindKey;
+ (id)portraitInfoKey;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) double strength;
- (BOOL)canRenderPortraitEffect;
@property(copy, nonatomic) NSDictionary *portraitInfo;
@property(copy, nonatomic) NSString *kind;
- (id)initWithAdjustment:(id)arg1;

@end

