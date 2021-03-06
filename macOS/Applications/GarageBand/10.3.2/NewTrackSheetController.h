//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class CLgView, MABorderView, MAButton, MAMatrix, MAPopUpButton, MATextField, NSButton, NSMutableDictionary, NSString, NSTabView, NSView, NSWindow, NewTrackCreator, NewTrackDetailsView, NewTrackSheetDeviceInfoControl;

@interface NewTrackSheetController : NSWindowController <NSTextFieldDelegate, NSWindowDelegate>
{
    NSMutableDictionary *m_trackTypeToMatrixMapping;
    MABorderView *m_sheetBackgroundView;
    MAMatrix *m_categorySelectMatrix;
    MAButton *m_detailsDisclosureButton;
    NewTrackDetailsView *m_detailsDisclosureView;
    NSTabView *m_detailsTabView;
    MATextField *m_nrOfTracksToCreateTitleTextField;
    MATextField *m_nrOfTracksToCreateTextField;
    MAButton *m_createButton;
    MAButton *m_cancelButton;
    NSView *m_tooMuchDrummerCreatedView;
    NSView *m_SoundLibraryNotAvailableView;
    struct CDocumentLogic *m_doc;
    NewTrackCreator *m_newTrackCreator;
    long long m_selectedCategory;
    MAPopUpButton *m_softwareInstrumentTypePopUpButton;
    MAPopUpButton *m_midiChannelPopUpButton;
    MAPopUpButton *m_drummerGenrePopUpButton;
    MAPopUpButton *m_patchOrInstrumentPopUpButton;
    MATextField *m_multiTimbralTextField;
    MATextField *m_multiTimbralPartsLabel;
    MATextField *m_input;
    MATextField *m_output;
    MAPopUpButton *m_inputSourcePopUpButton;
    MAPopUpButton *m_outputSourcePopUpButton;
    MAButton *m_ascendingInputButton;
    MAButton *m_ascendingOutputButton;
    MAButton *m_ascendingMidiOutputButton;
    MAButton *m_monitorButton;
    MAButton *m_enableRecordButton;
    MAButton *m_useMidiPluginButton;
    MAButton *m_multiTimbralButton;
    MAButton *m_accessLibraryButton;
    MAButton *m_loadDefaultPatchOrInstrumentButton;
    NewTrackSheetDeviceInfoControl *m_inputDeviceInformationView;
    NewTrackSheetDeviceInfoControl *m_outputDeviceInformationView;
    NSMutableDictionary *m_audioDeviceSetup;
    long long m_externalMidiMode;
    BOOL m_newSong;
    BOOL m_advancedMode;
    int m_folderID;
    CLgView *m_parentView;
    NSWindow *m_parentWindow;
    BOOL m_accessLibrary;
    struct TPosOneBasedTrackNr m_lastGeneratedTrackNumber;
    BOOL m_trackCreationLock;
    BOOL _notificationAdded;
    id <GenInstDownload> _genInstDownload;
}

+ (void)showForWindow:(id)arg1 folder:(int)arg2 document:(struct CDocumentLogic *)arg3 newSong:(BOOL)arg4 advancedMode:(BOOL)arg5 andNibName:(id)arg6;
@property(nonatomic) BOOL notificationAdded; // @synthesize notificationAdded=_notificationAdded;
@property(retain) id <GenInstDownload> genInstDownload; // @synthesize genInstDownload=_genInstDownload;
@property(nonatomic) NSButton *cancelButton; // @synthesize cancelButton=m_cancelButton;
@property(nonatomic) NSButton *createButton; // @synthesize createButton=m_createButton;
@property(nonatomic) MATextField *nrOfTracksToCreateTextField; // @synthesize nrOfTracksToCreateTextField=m_nrOfTracksToCreateTextField;
@property(nonatomic) MATextField *nrOfTracksToCreateTitleTextField; // @synthesize nrOfTracksToCreateTitleTextField=m_nrOfTracksToCreateTitleTextField;
@property(nonatomic) NewTrackDetailsView *detailsDisclosureView; // @synthesize detailsDisclosureView=m_detailsDisclosureView;
@property(nonatomic) MAButton *detailsDisclosureButton; // @synthesize detailsDisclosureButton=m_detailsDisclosureButton;
@property(nonatomic) MAMatrix *categorySelectMatrix; // @synthesize categorySelectMatrix=m_categorySelectMatrix;
@property(nonatomic) MABorderView *sheetBackgroundView; // @synthesize sheetBackgroundView=m_sheetBackgroundView;
@property(nonatomic) BOOL advancedMode; // @synthesize advancedMode=m_advancedMode;
@property(nonatomic, getter=isNewSong, setter=setNewSong:) BOOL newSong; // @synthesize newSong=m_newSong;
- (id).cxx_construct;
- (void)controlTextDidChange:(id)arg1;
- (void)handleUM_AUDIODEVICE_:(id)arg1;
- (void)handleUM_SYNC:(id)arg1;
- (void)_selectCategoryForTag:(long long)arg1;
- (void)keyDown:(id)arg1;
- (void)_detailsButtonAction:(id)arg1;
- (void)linkButtonAction:(id)arg1;
- (void)detailsDisclosureAction:(id)arg1;
- (void)selectCategoryAction:(id)arg1;
- (void)openHelpAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)createAction:(id)arg1;
- (long long)downloadGenInstContent;
- (BOOL)isSelectedDrummerAvailable;
- (void)_updateTrackNumberInTextField:(id)arg1;
- (long long)_clampTracksToCreateNr:(long long)arg1;
- (void)removeObserver;
- (void)addObserver;
- (void)cleanupController;
- (void)parentWillCloseHandler:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
- (void)showForWindow:(id)arg1 folder:(int)arg2 document:(struct CDocumentLogic *)arg3;
- (void)drummerGenreAction:(id)arg1;
- (void)outputMenuAction:(id)arg1;
- (void)inputMenuAction:(id)arg1;
- (void)_changeAscendingState:(id)arg1;
- (void)change_midiOutput:(id)arg1;
- (void)change_MidiType:(id)arg1;
- (void)_updateOutputMenu;
- (void)_updateInputMenu;
- (void)_updateDeviceInfo;
- (id)_itemInMenu:(id)arg1 forType:(int)arg2 forIndex:(int)arg3;
- (void)_updateDrummerGenreMenu;
- (id)defaultDrummerCharacterForGenre:(id)arg1 fromCharacters:(id)arg2;
- (void)_updateMidiMenu;
- (void)_updateSwAndMidiMenu;
- (void)_updateDetailsView;
- (void)handlePopUpButtonWillPopUp:(id)arg1;
- (void)_updateControlLayout;
- (void)_updateSettings;
- (void)_updateDetailsDisclosureViewHeight:(BOOL)arg1;
- (id)_gylphForKey:(id)arg1 alternate:(BOOL)arg2;
- (void)_animateView:(id)arg1 hidden:(BOOL)arg2;
- (void)_selectItem:(id)arg1 inPopupButton:(id)arg2 glypgKey:(id)arg3 menuTitle:(id)arg4;
- (id)_sourceGlyphForType:(int)arg1 outBus:(BOOL)arg2;
- (id)_emptyGlyph;
- (void)_setDefault:(id)arg1 forKey:(id)arg2;
- (id)_defaultForKey:(id)arg1;
@property(nonatomic) BOOL enableRecord;
@property(nonatomic) BOOL monitoring;
@property(nonatomic) BOOL loadPatchOrInstrument;
@property(nonatomic) BOOL accessLibrary;
- (BOOL)_isSurroundAvailable;
@property(nonatomic) int numberOfInstrumentLayer;
@property(nonatomic) BOOL multiTimbral;
@property(nonatomic) BOOL ascendingMidiOutChannels;
@property(nonatomic) BOOL ascendingOutputs;
@property(nonatomic) BOOL ascendingInputs;
- (id)_currentAvailableOutputs;
- (id)_currentAvailableInputs;
- (void)_selectTrackType:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *audioDeviceSetup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

