//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNUnhittableLayer.h"

@interface KNSlideNavigatorSelectionHighlightLayer : KNUnhittableLayer
{
    BOOL _isWindowInFocus;
    BOOL _isInFocus;
    BOOL _isPrimarySelection;
    BOOL _roundTopEdges;
    BOOL _roundBottomEdges;
}

@property(nonatomic) BOOL roundBottomEdges; // @synthesize roundBottomEdges=_roundBottomEdges;
@property(nonatomic) BOOL roundTopEdges; // @synthesize roundTopEdges=_roundTopEdges;
@property(nonatomic) BOOL isPrimarySelection; // @synthesize isPrimarySelection=_isPrimarySelection;
@property(nonatomic) BOOL isInFocus; // @synthesize isInFocus=_isInFocus;
@property(nonatomic) BOOL isWindowInFocus; // @synthesize isWindowInFocus=_isWindowInFocus;
- (id)roundedEdgeMask;

@end

