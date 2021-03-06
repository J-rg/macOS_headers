//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVTimeFormatter, AVTimeIndicatorPopover, AVTrimClipView, AVTrimDimmerView, AVTrimIndicatorFocusRingView, AVTrimIndicatorView, AVTrimSelectionEndFocusRingView, AVTrimSelectionStartFocusRingView, AVTrimSelectionView, AVTrimTracksView, NSArray, NSTimer;
@protocol AVTrimViewDelegate;

@interface AVTrimView : NSView
{
    AVTrimClipView *_clipView;
    AVTrimTracksView *_tracksView;
    AVTrimDimmerView *_dimmerViews[2];
    AVTrimSelectionView *_selectionView;
    AVTrimIndicatorView *_indicatorView;
    AVTrimSelectionStartFocusRingView *_selectionStartFocusRingView;
    AVTrimSelectionEndFocusRingView *_selectionEndFocusRingView;
    AVTrimIndicatorFocusRingView *_indicatorFocusRingView;
    AVTimeIndicatorPopover *_timeIndicatorPopover;
    AVTimeFormatter *_timeIndicatorTimeFormatter;
    double _minValue;
    double _maxValue;
    double _currentValue;
    double _selectionStart;
    double _selectionEnd;
    NSArray *_trackViewControllers;
    id <AVTrimViewDelegate> _delegate;
    unsigned long long _focusedPart;
    unsigned int _needsLayoutSubviews:1;
    unsigned int _isFirstResponder:1;
    NSTimer *_stopTrackingTimer;
    double _maximumSelectionDuration;
}

+ (void)initialize;
@property(nonatomic) double maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
- (void).cxx_destruct;
- (void)_updateFocusRingVisibility;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)arg1;
- (struct CGRect)timeIndicatorPopoverPositioningRectForValue:(double)arg1;
- (void)hideTimeIndicatorPopover;
- (void)updateTimeIndicatorPopoverWithValue:(double)arg1;
- (void)showTimeIndicatorPopoverWithValue:(double)arg1;
- (void)fireStopTrackingTimer:(id)arg1;
- (void)stopTrackingWithPart:(unsigned long long)arg1 afterDelay:(double)arg2;
- (void)stopTrackingWithPart:(unsigned long long)arg1;
- (void)startTrackingWithPart:(unsigned long long)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize)arg1;
@property(nonatomic) __weak id <AVTrimViewDelegate> delegate;
@property(copy, nonatomic) NSArray *trackViewControllers;
@property(nonatomic) double selectionEnd;
@property(nonatomic) double selectionStart;
@property(nonatomic) double currentValue;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned int)_CAViewFlags;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)layoutSubviewsIfNeeded;
- (void)setNeedsLayoutSubviews;
- (id)indicatorAccessibilityElementForPart:(unsigned long long)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

