//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor, NSArray;

@interface TSDMetalRenderTarget : NSObject
{
    NSArray *_textures;
    MTLRenderPassDescriptor *_passDescriptor;
    struct CGSize _size;
}

@property(readonly) MTLRenderPassDescriptor *passDescriptor; // @synthesize passDescriptor=_passDescriptor;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) NSArray *textures; // @synthesize textures=_textures;
- (void).cxx_destruct;
- (struct CATransform3D)orthoProjectionWithVerticalFlip:(BOOL)arg1;
- (id)initWithSize:(struct CGSize)arg1 metalContext:(id)arg2 numberOfAttachments:(unsigned long long)arg3;
- (id)initWithSize:(struct CGSize)arg1 metalContext:(id)arg2;

@end

