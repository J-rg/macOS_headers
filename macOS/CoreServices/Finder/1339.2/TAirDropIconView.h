//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TUpdateLayerView.h"

#import "NSDraggingDestination-Protocol.h"
#import "TCollectionViewItemViewProtocol-Protocol.h"
#import "TMarkTornDown-Protocol.h"

@class NSImage, NSObject, NSString, NSView, TAirDropProgressView, TImageView, TTextField;
@protocol TDraggingDestinationDelegate;

@interface TAirDropIconView : TUpdateLayerView <TCollectionViewItemViewProtocol, NSDraggingDestination, TMarkTornDown>
{
    TAirDropProgressView *_progressView;
    TImageView *_iconImageView;
    NSView *_avatarView;
    TTextField *_titleField;
    TTextField *_subtitleField;
    struct TNSRef<NSImage, void> _iconImage;
    struct TString _titleStr;
    struct TString _subtitleStr;
    _Bool _isPressed;
    _Bool _isDropTarget;
    struct TKeyValueBinder _shouldAppearPressedBinder;
    struct TNSWeakPtr<NSObject<TDraggingDestinationDelegate>, void> _weakDelegate;
    _Bool _isTornDown;
}

+ (id)keyPathsForValuesAffectingShouldAppearPressed;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_isPressed;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (struct TString)accessibilityTitleAttributeValue;
- (struct CGRect)accessibilityFrameAttributeValue;
- (id)accessibilityChildrenAttributeValue;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateLayer;
- (id)hitTestInText:(const struct CGPoint *)arg1;
- (id)_hitTestInTextWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTestInIcon:(struct CGPoint)arg1;
- (id)_hitTestInIconWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTestWithLocalPoint:(const struct CGPoint *)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)popoverAnchorView;
- (struct CGRect)iconFrame;
- (void)cancelAllAnimations;
- (void)cancelExitAnimation;
- (void)performExitAnimation;
- (void)cancelEntryAnimation;
- (void)performEntryAnimation;
- (id)dragFlockingTitleImage:(struct CGRect *)arg1;
- (id)dragFlockingIconImage:(struct CGRect *)arg1;
@property(readonly, nonatomic) _Bool shouldAppearPressed; // @dynamic shouldAppearPressed;
@property(nonatomic, getter=isDropTarget) _Bool dropTarget; // @synthesize dropTarget=_isDropTarget;
@property(copy, nonatomic) NSString *subtitleStr; // @dynamic subtitleStr;
@property(copy, nonatomic) NSString *titleStr; // @dynamic titleStr;
@property(copy, nonatomic) NSImage *iconImage; // @dynamic iconImage;
@property(nonatomic) _Bool indeterminateProgress;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(nonatomic) __weak NSObject<TDraggingDestinationDelegate> *delegate; // @dynamic delegate;
- (void)prepareForReuse;
- (void)resetProgress;
- (void)aboutToTearDown;
- (void)awakeFromNib;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

