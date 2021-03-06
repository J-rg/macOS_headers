//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextViewDelegate.h"

@class CALayer, NSImage, NSImageView, NSString, NSTextView, SidebarPlaceholderView;

__attribute__((visibility("hidden")))
@interface SidebarBackgroundView : NSView <NSTextViewDelegate>
{
    SidebarPlaceholderView *iPlaceholderView;
    NSImageView *iImageView;
    NSTextView *iTextView;
    CALayer *_dividerLayer;
    id <SidebarBackgroundViewDelegate> _delegate;
    double _footerHeight;
    NSImage *_emptyImage;
}

@property(retain, nonatomic) NSImage *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) id <SidebarBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)borderColor;
- (void)viewDidChangeEffectiveAppearance;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)debugZeroFrame;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

