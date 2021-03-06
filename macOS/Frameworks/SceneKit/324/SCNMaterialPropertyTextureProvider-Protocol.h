//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCNMaterialPropertyTextureProvider <NSObject>
- (void)renderToTexture:(id <MTLTexture>)arg1 computeCommandHandler:(void (^)(void (^)(id <MTLComputeCommandEncoder>)))arg2 blitCommandHandler:(void (^)(void (^)(id <MTLBlitCommandEncoder>)))arg3 helper:(id <SCNMaterialPropertyTextureProviderHelper>)arg4;
- (id <MTLTexture>)newTextureForDevice:(id <MTLDevice>)arg1;
@end

