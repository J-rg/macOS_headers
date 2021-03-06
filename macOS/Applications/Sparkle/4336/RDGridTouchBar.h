//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDTouchBarModule.h"

@class NSCustomTouchBarItem, NSImage, NSSliderTouchBarItem, RDGridSettings;

@interface RDGridTouchBar : RDTouchBarModule
{
    NSCustomTouchBarItem *_tbGridEnable;
    NSCustomTouchBarItem *_tbGridDisable;
    NSCustomTouchBarItem *_tbGridColumnsSegmented;
    NSSliderTouchBarItem *_tbGridMarginSlider;
    NSImage *_gridEnableImage;
    NSImage *_gridDisableImage;
    NSImage *_gridGutterNarrow;
    NSImage *_gridGutterWide;
    RDGridSettings *_gridSettings;
}

@property(nonatomic) __weak RDGridSettings *gridSettings; // @synthesize gridSettings=_gridSettings;
@property(retain, nonatomic) NSImage *gridGutterWide; // @synthesize gridGutterWide=_gridGutterWide;
@property(retain, nonatomic) NSImage *gridGutterNarrow; // @synthesize gridGutterNarrow=_gridGutterNarrow;
@property(retain, nonatomic) NSImage *gridDisableImage; // @synthesize gridDisableImage=_gridDisableImage;
@property(retain, nonatomic) NSImage *gridEnableImage; // @synthesize gridEnableImage=_gridEnableImage;
@property(retain, nonatomic) NSSliderTouchBarItem *tbGridMarginSlider; // @synthesize tbGridMarginSlider=_tbGridMarginSlider;
@property(retain, nonatomic) NSCustomTouchBarItem *tbGridColumnsSegmented; // @synthesize tbGridColumnsSegmented=_tbGridColumnsSegmented;
@property(retain, nonatomic) NSCustomTouchBarItem *tbGridDisable; // @synthesize tbGridDisable=_tbGridDisable;
@property(retain, nonatomic) NSCustomTouchBarItem *tbGridEnable; // @synthesize tbGridEnable=_tbGridEnable;
- (void).cxx_destruct;
- (void)touchBarWillClose;
- (void)changeGridMargin:(id)arg1;
- (void)changeGridColumns:(id)arg1;
- (void)disableGrid:(id)arg1;
- (void)showGridPopover:(id)arg1;
- (void)refreshUI;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)defaultItemIdentifiers;
- (id)initWithTouchBarManager:(id)arg1;

@end

