//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermProfilePreferencesBaseViewController.h"

#import "NSMenuDelegate.h"
#import "NSTabViewDelegate.h"
#import "ProfileListViewDelegate.h"
#import "iTermImageWellDelegate.h"
#import "iTermShortcutInputViewDelegate.h"

@class AdvancedWorkingDirectoryWindowController, NSButton, NSImageView, NSMatrix, NSPopUpButton, NSString, NSTabView, NSTextField, NSTokenField, NSView, ProfileListView, iTermFunctionCallTextFieldDelegate, iTermRateLimitedUpdate, iTermShortcutInputView;

@interface ProfilesGeneralPreferencesViewController : iTermProfilePreferencesBaseViewController <iTermImageWellDelegate, iTermShortcutInputViewDelegate, NSMenuDelegate, NSTabViewDelegate, ProfileListViewDelegate>
{
    NSTextField *_basicsLabel;
    NSTextField *_shortcutLabel;
    NSTextField *_tagsLabel;
    NSTextField *_commandLabel;
    NSTextField *_sendTextAtStartLabel;
    NSTextField *_directoryLabel;
    NSTextField *_schemesHeaderLabel;
    NSTextField *_schemesLabel;
    NSTextField *_profileNameField;
    NSTextField *_profileNameFieldLabel;
    NSTextField *_profileNameFieldForEditCurrentSession;
    NSPopUpButton *_profileShortcut;
    NSTokenField *_tagsTokenField;
    NSPopUpButton *_commandType;
    NSTextField *_customCommand;
    NSTextField *_sendTextAtStart;
    NSMatrix *_initialDirectoryType;
    NSTextField *_customDirectory;
    NSButton *_editAdvancedConfigButton;
    AdvancedWorkingDirectoryWindowController *_advancedWorkingDirWindowController;
    NSPopUpButton *_urlSchemes;
    NSTextField *_badgeText;
    NSTextField *_badgeLabel;
    NSTextField *_badgeTextForEditCurrentSession;
    NSButton *_editBadgeButton;
    iTermFunctionCallTextFieldDelegate *_profileNameFieldDelegate;
    iTermFunctionCallTextFieldDelegate *_profileNameFieldForEditCurrentSessionDelegate;
    iTermFunctionCallTextFieldDelegate *_badgeTextFieldDelegate;
    iTermFunctionCallTextFieldDelegate *_badgeTextForEditCurrentSessionFieldDelegate;
    iTermFunctionCallTextFieldDelegate *_tabTitleTextFieldDelegate;
    iTermFunctionCallTextFieldDelegate *_windowTitleTextFieldDelegate;
    iTermFunctionCallTextFieldDelegate *_customDirectoryTextFieldDelegate;
    NSPopUpButton *_titleSettingsForEditCurrentSession;
    NSPopUpButton *_icon;
    NSTextField *_iconLabel;
    NSImageView *_imageWell;
    NSTextField *_tabTitle;
    NSTextField *_windowTitle;
    NSButton *_allowTitleSetting;
    ProfileListView *_profiles;
    iTermShortcutInputView *_sessionHotkeyInputView;
    NSView *_editCurrentSessionView;
    NSButton *_copySettingsToProfile;
    NSButton *_copyProfileToSession;
    NSPopUpButton *_titleSettings;
    NSTextField *_titleSettingsLabel;
    NSButton *_customTitleHelp;
    BOOL _profileNameChangePending;
    iTermRateLimitedUpdate *_rateLimit;
    NSTabView *_tabView;
    struct CGRect _desiredFrame;
    id <ProfilesGeneralPreferencesViewControllerDelegate> _profileDelegate;
}

@property(readonly, nonatomic) NSTextField *profileNameFieldForEditCurrentSession; // @synthesize profileNameFieldForEditCurrentSession=_profileNameFieldForEditCurrentSession;
@property(readonly, nonatomic) NSTextField *profileNameField; // @synthesize profileNameField=_profileNameField;
@property(nonatomic) __weak id <ProfilesGeneralPreferencesViewControllerDelegate> profileDelegate; // @synthesize profileDelegate=_profileDelegate;
- (void).cxx_destruct;
- (void)imageWellDidPerformDropOperation:(id)arg1 filename:(id)arg2;
- (void)imageWellDidClick:(id)arg1;
- (void)didRegisterSessionTitleFunc:(id)arg1;
- (void)updateProfileName;
- (void)postUpdateSessionNameNotification;
- (void)windowTitleDidChange;
- (void)tabTitleDidChange;
- (void)sessionNameDidChange;
- (void)controlTextDidChange:(id)arg1;
- (void)shortcutInputView:(id)arg1 didReceiveKeyPressEvent:(id)arg2;
- (void)profileTableRowSelected:(id)arg1;
- (void)profileTableSelectionDidChange:(id)arg1;
- (id)tokenFieldCell:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)titleHelp:(id)arg1;
- (void)updateSelectedTitleComponentsForView:(id)arg1;
- (void)updateSelectedTitleComponents;
- (id)titleFunctionUniqueIdentifier;
- (id)titleFunctionDisplayName;
- (void)setTuple:(id)arg1 forKey:(id)arg2;
- (id)stringTupleForKey:(id)arg1;
- (void)toggleSelectedTitleComponentForView:(id)arg1;
- (void)toggleSelectedTitleComponent;
- (void)updateShortcutTitles;
- (int)shortcutTagForKey:(id)arg1;
- (id)shortcutKeyForTag:(int)arg1;
- (void)setShortcutValueToSelectedItem;
- (void)updateCommandType;
- (void)commandTypeDidChange;
- (void)updateDirectoryType;
- (void)directoryTypeDidChange;
- (void)showAdvancedWorkingDirConfigPanel:(id)arg1;
- (void)updateEditAdvancedConfigButton;
- (void)populateBookmarkUrlSchemesFromProfile:(id)arg1;
- (void)urlSchemeHandlerDidChange:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)profileHandlesScheme:(id)arg1;
- (void)changeProfile:(id)arg1;
- (void)configureBadge:(id)arg1;
- (void)updateEnabledState;
- (void)updateTitleSettingsMenuForView:(id)arg1;
- (void)updateTitleSettingsMenu;
- (void)ensureSessionNameVisible;
@property(readonly, nonatomic) NSString *selectedGuid;
- (void)reloadProfile;
- (id)scope;
- (void)updateTmuxTabTitle;
- (void)layoutSubviewsForEditCurrentSessionMode;
- (id)keysForBulkCopy;
- (void)windowWillClose;
- (void)updateImageWellHidden;
- (BOOL)loadIconWithFilename:(id)arg1;
- (void)openFilePicker;
- (void)updateImageWell;
- (void)iconDidChange;
- (void)sessionNameDidEndEditing;
- (BOOL)onUpdateTitle;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

