//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface ISImageBag : NSObject <ISScalableCompositorResource>
{
    NSArray *_images;
    NSDictionary *_imagesByScale;
}

+ (id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2;
+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3;
+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)sortImages:(id)arg1;
@property(retain) NSDictionary *imagesByScale; // @synthesize imagesByScale=_imagesByScale;
@property(readonly, copy) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)imagesForScale:(double)arg1;
- (id)initWithImages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

