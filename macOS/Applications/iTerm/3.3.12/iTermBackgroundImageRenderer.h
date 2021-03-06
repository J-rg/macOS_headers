//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermMetalRenderer.h"

@class NSImage, NSString, iTermMetalBufferPool, iTermMetalRenderer;

@interface iTermBackgroundImageRenderer : NSObject <iTermMetalRenderer>
{
    iTermMetalRenderer *_metalRenderer;
    iTermMetalBufferPool *_alphaPool;
    iTermMetalBufferPool *_colorPool;
    iTermMetalBufferPool *_box1Pool;
    iTermMetalBufferPool *_box2Pool;
    unsigned long long _mode;
    NSImage *_image;
    id <MTLTexture> _texture;
    struct CGRect _frame;
    struct CGRect _containerFrame;
    // Error parsing type: , name: _color
}

@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)loadVertexBuffer:(id)arg1;
- (void)initializeTransientState:(id)arg1;
- (id)createTransientStateForConfiguration:(id)arg1 commandBuffer:(id)arg2;
- (void)drawWithFrameData:(id)arg1 transientState:(id)arg2;
- (id)boxBufferWithRect:(struct CGRect)arg1 box:(int)arg2 poolContext:(id)arg3;
- (id)colorBufferWithColor:(double)arg1 alpha:(id)arg2 poolContext: /* Error: Ran out of types for this method. */;
- (id)alphaBufferWithValue:(float)arg1 poolContext:(id)arg2;
- (void)setImage:(id)arg1 mode:(unsigned long long)arg2 frame:(struct CGRect)arg3 containerRect:(struct CGRect)arg4 color:(id)arg5 context: /* Error: Ran out of types for this method. */;
- (int)createTransientStateStat;
@property(readonly, nonatomic) BOOL rendererDisabled;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

