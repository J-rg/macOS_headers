//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppKit/NSComboBoxDataSource-Protocol.h>
#import <AppKit/NSFileManagerDelegate-Protocol.h>
#import <AppKit/NSRuleEditorDelegate-Protocol.h>

@class NSArray, NSArrayController, NSButton, NSComboBox, NSMenuItem, NSMetadataQuery, NSMutableArray, NSPopUpButton, NSRuleEditor, NSString, NSTextField, NSTokenField, NSView, NSWindow;

@interface NSNavAdvancedSearchController : NSViewController <NSRuleEditorDelegate, NSComboBoxDataSource, NSFileManagerDelegate>
{
    NSWindow *_editSearchTermsWindow;
    NSRuleEditor *_ruleEditor;
    NSArrayController *_searchTermsArrayController;
    NSPopUpButton *_rootItem;
    NSPopUpButton *_extraRootItems;
    NSPopUpButton *_kindPopUpButton;
    NSMenuItem *_anyAttributeMenuItem;
    NSView *_plainTextFieldView;
    NSView *_textFieldWithOptionsView;
    NSView *_booleanOptionsView;
    NSView *_dateOptionsView;
    NSView *_numberOptionsView;
    NSComboBox *_keywordsComboBox;
    NSComboBox *_kindsComboBox;
    NSTokenField *_keywordsTokenField;
    NSWindow *_saveSearchWindow;
    NSButton *_saveForAllAppsButton;
    NSTextField *_saveAsTextField;
    NSButton *_saveQueryButton;
    BOOL _seperatorAdded;
    BOOL _canShowAttributes;
    BOOL _addingAnyAttributeItem;
    long long _updateCount;
    NSView *_ruleItemsView;
    NSMutableArray *_availableSearchAttributes;
    NSArray *_searchKeywords;
    NSArray *_searchKinds;
    NSMetadataQuery *_searchKeywordsQuery;
    NSMetadataQuery *_searchKindQuery;
    id _delegate;
}

- (void)runPromptToSaveQueryWithName:(id)arg1 modalForWindow:(id)arg2;
- (void)_saveQuerySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_cancelSaveQueryClick:(id)arg1;
- (void)_saveQueryClick:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)ruleEditorRowsDidChange:(id)arg1;
- (id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)_loadSearchKinds;
- (void)_loadKeywords;
- (id)_createValueListQueryForAttribute:(id)arg1;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_reloadComboBoxWithTag:(long long)arg1;
- (id)searchKeywords;
- (id)availableSearchAttributes;
- (void)_updateQueryString:(id)arg1;
- (void)setCriteriaSlices:(id)arg1 anyAttributeString:(id)arg2;
- (void)_createRowForCriteriaSlice:(id)arg1;
- (id)anyAttributeString;
- (id)criteriaSlices;
- (id)queryString;
- (void)_customFieldWindowSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_otherMenuItemForAttributeName:(id)arg1;
- (id)_findItemWithAttributeName:(id)arg1 inMenu:(id)arg2;
- (void)_addRootSeperatorIfNeeded;
- (void)_searchTermsCancelClick:(id)arg1;
- (void)_searchTermsOkClick:(id)arg1;
- (void)_editOtherSliceKind:(id)arg1;
- (void)_searchTermsWindowBecameKey:(id)arg1;
- (void)loadView;
- (void)_createAttributeNameMapping;
- (void)_setSearchSlice:(int)arg1 toHaveAttributeName:(id)arg2 inButton:(id)arg3;
- (id)ruleEditor;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

