//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "FLUImageViewDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class FLUHoverButton, FLUImageView, FLUSmallTransparentButton, FLUView, NSColor, NSColorPickerTouchBarItem, NSString;

@interface FLUImageCropperWindowController : NSWindowController <NSWindowDelegate, NSTouchBarDelegate, FLUImageViewDelegate>
{
    BOOL _enableResizeToFit;
    CDUnknownBlockType _completionBlock;
    NSString *_imageFilePath;
    double _forcedAspectRatio;
    id _eventHandler;
    FLUImageView *_imageView;
    FLUSmallTransparentButton *_cancelButton;
    FLUSmallTransparentButton *_resizeToFitButton;
    FLUHoverButton *_borderColorButton;
    NSColor *_borderColor;
    NSColorPickerTouchBarItem *_colorPickerItem;
    FLUView *_bottomBorderView;
    FLUSmallTransparentButton *_doneButton;
}

@property(nonatomic) __weak FLUSmallTransparentButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak FLUView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(retain, nonatomic) NSColorPickerTouchBarItem *colorPickerItem; // @synthesize colorPickerItem=_colorPickerItem;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) __weak FLUHoverButton *borderColorButton; // @synthesize borderColorButton=_borderColorButton;
@property(nonatomic) __weak FLUSmallTransparentButton *resizeToFitButton; // @synthesize resizeToFitButton=_resizeToFitButton;
@property(nonatomic) __weak FLUSmallTransparentButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak FLUImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) id eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) BOOL enableResizeToFit; // @synthesize enableResizeToFit=_enableResizeToFit;
@property(nonatomic) double forcedAspectRatio; // @synthesize forcedAspectRatio=_forcedAspectRatio;
@property(retain, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)refreshView;
- (void)croppingMarkerRectDidChange:(struct CGRect)arg1;
- (void)didPressDoneButton:(id)arg1;
- (void)didPressBorderColorButton:(id)arg1;
- (void)didPressResizeToFitButton:(id)arg1;
- (void)didPressCancelButton:(id)arg1;
- (void)didUpdateBorderColor:(id)arg1;
- (void)didPressTouchBarImageCropperDoneItem:(id)arg1;
- (void)didPressTouchBarBorderColorItem:(id)arg1;
- (void)didPressTouchBarImageCropperResizeToFitItem:(id)arg1;
- (void)didPressTouchBarImageCropperCancelItem:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)refreshTouchBar;
- (BOOL)windowShouldClose:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)updateFrames;
- (void)dealloc;
- (void)setupWindowController;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

