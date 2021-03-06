//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBSApplicationDelegate.h"

#import "NSAnimationDelegate.h"
#import "NSToolbarDelegate.h"

@class ControlWindowController, MBSPreferencePane, NSArray, NSDictionary, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSString, NSToolbar, NSView, NSWindow;

@interface ApplicationDelegate : MBSApplicationDelegate <NSToolbarDelegate, NSAnimationDelegate>
{
    BOOL _hasCompletedLaunching;
    BOOL _isAnimationRunning;
    NSArray *_preferencePanes;
    unsigned long long _indexOfSelectedPane;
    NSWindow *_controlWindow;
    NSWindow *_helpWindow;
    MBSPreferencePane *_selectedPane;
    NSView *_paneViewportView;
    NSToolbar *_controlToolbar;
    NSMutableDictionary *_toolbarItemsByIdentifier;
    NSMutableArray *_toolbarIdentifiers;
    NSDictionary *_startupImportObject;
    ControlWindowController *_controlWindowController;
    NSMenuItem *_prefAutoUpdateMenuItem;
    NSMenu *_viewMenu;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property __weak NSMenu *viewMenu; // @synthesize viewMenu=_viewMenu;
@property __weak NSMenuItem *prefAutoUpdateMenuItem; // @synthesize prefAutoUpdateMenuItem=_prefAutoUpdateMenuItem;
@property(retain) ControlWindowController *controlWindowController; // @synthesize controlWindowController=_controlWindowController;
@property(retain) NSDictionary *startupImportObject; // @synthesize startupImportObject=_startupImportObject;
@property(readonly) NSMutableArray *toolbarIdentifiers; // @synthesize toolbarIdentifiers=_toolbarIdentifiers;
@property(readonly) NSMutableDictionary *toolbarItemsByIdentifier; // @synthesize toolbarItemsByIdentifier=_toolbarItemsByIdentifier;
@property(retain) NSToolbar *controlToolbar; // @synthesize controlToolbar=_controlToolbar;
@property(retain) NSView *paneViewportView; // @synthesize paneViewportView=_paneViewportView;
@property BOOL isAnimationRunning; // @synthesize isAnimationRunning=_isAnimationRunning;
@property __weak MBSPreferencePane *selectedPane; // @synthesize selectedPane=_selectedPane;
@property(retain) NSWindow *helpWindow; // @synthesize helpWindow=_helpWindow;
@property(retain) NSWindow *controlWindow; // @synthesize controlWindow=_controlWindow;
@property BOOL hasCompletedLaunching; // @synthesize hasCompletedLaunching=_hasCompletedLaunching;
@property(nonatomic) unsigned long long indexOfSelectedPane; // @synthesize indexOfSelectedPane=_indexOfSelectedPane;
@property(retain) NSArray *preferencePanes; // @synthesize preferencePanes=_preferencePanes;
- (void).cxx_destruct;
- (void)updateAutomaticUpdateCheckMenuItem;
- (void)setSelectedTouchBarIdentifier:(id)arg1;
- (void)runDialogAndImportUsingDictionary:(id)arg1 preparedWithError:(id)arg2;
- (id)dictionaryFromPortableSettingsFileAtURL:(id)arg1 error:(id *)arg2;
- (void)toggleAutomaticUpdateChecks:(id)arg1;
- (void)resetToDefaults:(id)arg1;
- (void)resetToBackup:(id)arg1;
- (void)stepThroughPanes:(id)arg1;
- (void)importSettings:(id)arg1;
- (void)exportSettings:(id)arg1;
- (void)contactWebSiteTTS:(id)arg1;
- (id)backupDictionaryForCurrentUserSettings;
- (BOOL)updateUserPreferencesBackupAtPath:(id)arg1;
- (BOOL)updateUserPreferencesBackupIfNecessary;
- (id)computerName;
- (id)applicationSupportPath;
- (void)synchronizeToolbarWithSelectedPane;
- (void)selectPreferencePane:(id)arg1;
- (BOOL)selectPaneWithIdentifier:(id)arg1;
- (void)switchControlWindowToPane:(id)arg1;
- (void)checkDomainEntitlements;
- (void)loadAndActivatePreferencePanePlugIns;
- (BOOL)checkForFirstRun;
- (id)creditsString;
- (id)toolbarItemForPreferencePane:(id)arg1 tag:(long long)arg2;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

