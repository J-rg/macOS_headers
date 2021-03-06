//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MGImageSequenceWriterOptions, NSArray, NSDictionary, NSPopUpButton, NSString;

@interface MGOpenImageSequenceOptionsViewController : NSViewController
{
    NSDictionary *_frameRateMap;
    NSArray *_supportedFrameRateDescriptions;
    NSArray *_supportedFrameRateValues;
    NSArray *_supportedExportPresets;
    NSArray *_supportedEncodingQualityOptions;
    NSArray *_inputURLs;
    NSPopUpButton *_frameSelectionPopUpButton;
    NSPopUpButton *_resolutionSelectionPopUpButton;
    NSPopUpButton *_encodingSelectionPopUpButton;
    MGImageSequenceWriterOptions *_imageSequenceWriterOptions;
    unsigned long long _preset;
    double _framesPerSecond;
    NSString *_codec;
    struct CGImageSource *_imageSource;
    NSString *_imageUTI;
    NSString *_H264EncodingOptionTitle;
    NSString *_HEVCEncodingOptionTitle;
    NSString *_proResEncodingOptionTitle;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSString *proResEncodingOptionTitle; // @synthesize proResEncodingOptionTitle=_proResEncodingOptionTitle;
@property(retain, nonatomic) NSString *HEVCEncodingOptionTitle; // @synthesize HEVCEncodingOptionTitle=_HEVCEncodingOptionTitle;
@property(retain, nonatomic) NSString *H264EncodingOptionTitle; // @synthesize H264EncodingOptionTitle=_H264EncodingOptionTitle;
@property(copy, nonatomic) NSString *imageUTI; // @synthesize imageUTI=_imageUTI;
@property(nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property(nonatomic) double framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(nonatomic) unsigned long long preset; // @synthesize preset=_preset;
@property(retain) MGImageSequenceWriterOptions *imageSequenceWriterOptions; // @synthesize imageSequenceWriterOptions=_imageSequenceWriterOptions;
@property(retain) NSPopUpButton *encodingSelectionPopUpButton; // @synthesize encodingSelectionPopUpButton=_encodingSelectionPopUpButton;
@property(retain) NSPopUpButton *resolutionSelectionPopUpButton; // @synthesize resolutionSelectionPopUpButton=_resolutionSelectionPopUpButton;
@property(retain) NSPopUpButton *frameSelectionPopUpButton; // @synthesize frameSelectionPopUpButton=_frameSelectionPopUpButton;
@property(retain, nonatomic) NSArray *inputURLs; // @synthesize inputURLs=_inputURLs;
- (void).cxx_destruct;
- (void)_updateImageSequenceWriterOptions;
- (void)_updateEncodingSelectionMenu;
- (void)_updateExportPresetMenu;
- (void)_updateFrameRateMenuItems;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)encodingOptionSelectedForItem:(id)arg1;
- (void)exportPresetSelectedForItem:(id)arg1;
- (void)frameRateSelectedForItem:(id)arg1;
@property(readonly) NSArray *supportedEncodingQualityOptions; // @synthesize supportedEncodingQualityOptions=_supportedEncodingQualityOptions;
@property(readonly) NSArray *supportedExportPresets; // @synthesize supportedExportPresets=_supportedExportPresets;
@property(readonly) NSArray *supportedFrameRateValues; // @synthesize supportedFrameRateValues=_supportedFrameRateValues;
@property(readonly) NSArray *supportedFrameRateDescriptions; // @synthesize supportedFrameRateDescriptions=_supportedFrameRateDescriptions;
@property(readonly) NSDictionary *frameRateMap; // @synthesize frameRateMap=_frameRateMap;
- (void)dealloc;
- (void)viewDidLoad;
- (void)awakeFromNib;

@end

