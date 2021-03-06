//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "MGAccessibilityFauxUIElementParent-Protocol.h"

@class MGMediaCompositionBackgroundView, MGMediaCompositionViewController, NSMutableArray, NSString;

@interface MGMediaCompositionView : NSView <MGAccessibilityFauxUIElementParent>
{
    NSMutableArray *_mediaTrackViews;
    MGMediaCompositionViewController *_viewController;
    MGMediaCompositionBackgroundView *_backgroundView;
    NSMutableArray *_layoutConstraints;
    BOOL _showsAdditionalTrack;
    BOOL _showsAdditionalMediaTrack;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showsAdditionalMediaTrack; // @synthesize showsAdditionalMediaTrack=_showsAdditionalMediaTrack;
- (void)layoutMediaTrackViews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeMediaTrackViews:(id)arg1;
- (void)addMediaTrackViews:(id)arg1;
- (id)tracksContainerView;
@property(nonatomic) __weak MGMediaCompositionViewController *viewController;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilityAttributeValueDidChangeForKeyPath:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)fauxUIElement:(id)arg1 setValue:(id)arg2 forAdditionalAttribute:(id)arg3;
- (BOOL)fauxUIElement:(id)arg1 isAdditionalAttributeSettable:(id)arg2;
- (id)fauxUIElement:(id)arg1 additionalAttributeValue:(id)arg2;
- (id)fauxUIElementAdditionalAccessiblityAttributeNames:(id)arg1;
- (void)fauxUIElement:(id)arg1 performAction:(id)arg2;
- (id)fauxUIElement:(id)arg1 descriptionForAction:(id)arg2;
- (id)fauxUIElementActionNames:(id)arg1;
- (BOOL)fauxUIElementIsEnabled:(id)arg1;
- (BOOL)fauxUIElementIsFocused:(id)arg1;
- (void)fauxUIElement:(id)arg1 setFocus:(id)arg2;
- (BOOL)isFauxUIElementFocusable:(id)arg1;
- (struct CGSize)fauxUIElementSize:(id)arg1;
- (struct CGPoint)fauxUIElementPosition:(id)arg1;
- (id)fauxUIElementChildren:(id)arg1;
- (BOOL)fauxUIElementHasChildren:(id)arg1;
- (id)fauxUIElementDescription:(id)arg1;
- (id)fauxUIElementRole:(id)arg1;
- (void)stepBackwardCurrentTime;
- (void)stepForwardCurrentTime;
- (id)mediaTrackViewItemForMediaClip:(id)arg1 inMediaTrackView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

