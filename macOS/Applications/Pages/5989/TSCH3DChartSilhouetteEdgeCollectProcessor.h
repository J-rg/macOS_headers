//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DRetargetRenderProcessor.h"

@class TSCH3DResource, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor
{
    struct EdgeDetectionParameters mEdgeDetectionParameters;
    TSCH3DResource *mVertices;
    TSCH3Dvec3DataBuffer *mEdges;
}

@property(readonly, nonatomic) TSCH3Dvec3DataBuffer *edges; // @synthesize edges=mEdges;
@property(retain, nonatomic) TSCH3DResource *vertices; // @synthesize vertices=mVertices;
- (id).cxx_construct;
- (void)submit:(const struct PrimitiveInfo *)arg1;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (id)matrix;
- (void)dealloc;
- (id)initWithEdgeDetectionParameters:(const struct EdgeDetectionParameters *)arg1;

@end

