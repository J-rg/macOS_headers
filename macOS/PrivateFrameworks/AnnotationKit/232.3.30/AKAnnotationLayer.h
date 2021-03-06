//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationLayer : CALayer
{
    BOOL _isObservingAnnotation;
    BOOL _wasLastDrawingClipped;
    BOOL _lastRedrawWasForDrawingBounds;
    AKAnnotation *_annotation;
    AKPageController *_pageController;
    CALayer *_fastPathLayer;
}

+ (id)newAnnotationLayerForAnnotation:(id)arg1 withPageController:(id)arg2;
@property BOOL lastRedrawWasForDrawingBounds; // @synthesize lastRedrawWasForDrawingBounds=_lastRedrawWasForDrawingBounds;
@property BOOL wasLastDrawingClipped; // @synthesize wasLastDrawingClipped=_wasLastDrawingClipped;
@property BOOL isObservingAnnotation; // @synthesize isObservingAnnotation=_isObservingAnnotation;
@property(retain, nonatomic) CALayer *fastPathLayer; // @synthesize fastPathLayer=_fastPathLayer;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
@property(retain) AKAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)_removeDebugVisuals;
- (void)_addDebugVisuals;
- (void)_stopObservingAnnotation;
- (void)_startObservingAnnotation;
- (void)_updateAnnotationLayerWithLoupeFastPath:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updatePixelAlignment;
- (void)updateContents;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;

@end

