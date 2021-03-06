//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CodaDocumentViewController.h"

#import "NSTextStorageDelegate.h"
#import "NSTextViewDelegate.h"
#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"
#import "PCSheetControllerDelegate.h"
#import "TSFindClient.h"
#import "TSSearchClient.h"
#import "WebEditingDelegate.h"

@class ControlsProgressView, DeviceChromeView, DocumentMode, NSButton, NSMapTable, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPanel, NSPopUpButton, NSString, NSTextField, NSTimer, NSTouchBar, NSURL, PCBezelView, PCComboBox, PCTaskWrapper, PCTimer, PasswordInputSheetController, PreviewSourceTextView, TSShadowView, WebPreviewBackgroundView, WebPreviewStyleSheetManager, WebView;

__attribute__((visibility("hidden")))
@interface WebPreviewViewController : CodaDocumentViewController <TSFindClient, TSSearchClient, NSTextStorageDelegate, NSTextViewDelegate, PCSheetControllerDelegate, NSTouchBarDelegate, NSTouchBarProvider, WebEditingDelegate>
{
    WebView *webView;
    PCComboBox *urlFieldComboBox;
    ControlsProgressView *iWebControlsView;
    NSButton *backButton;
    NSButton *forwardButton;
    NSButton *reloadButton;
    NSTextField *statusField;
    NSButton *viewSourceButton;
    NSButton *iInspectorButton;
    NSMenu *iUserAgentMenu;
    NSMenuItem *iBrowserMenuItem;
    WebPreviewBackgroundView *iWebContentView;
    DeviceChromeView *iDeviceChromeView;
    NSPopUpButton *oActionButton;
    NSPanel *customUserAgentSheet;
    NSTextField *customUserAgentTextField;
    NSMenuItem *customUserAgentOtherMenuItem;
    NSButton *customUserAgentOKButton;
    PCBezelView *_dimensionsView;
    NSMenuItem *externalBrowsersMenuItem;
    NSMenu *_importedFilesMenu;
    NSPopUpButton *_styleSheetOverridePopup;
    NSMenu *_autoreloadMenu;
    NSString *pageTitle;
    NSURL *loadedURL;
    BOOL isLoadingHTMLString;
    BOOL _loadingWebView;
    BOOL isReloading;
    BOOL isCurrentWebpageEditor;
    PCTimer *iReloadTimer;
    BOOL _autoReload;
    PasswordInputSheetController *_passwordSheetController;
    NSMutableArray *backForwardList;
    long long backForwardListPos;
    NSURL *editorURL;
    NSTimer *textStorageUpdateTimer;
    NSTimer *cssTextStorageUpdateTimer;
    BOOL _shouldReloadWebView;
    WebPreviewStyleSheetManager *_styleSheetManager;
    struct CGPoint webViewScrolledLoadingPoint;
    struct CGPoint webViewScrolledReloadPoint;
    PreviewSourceTextView *sourceTextView;
    TSShadowView *editorShadowView;
    BOOL isPageSourceVisible;
    NSMutableDictionary *operationToURLDownloadMapping;
    NSMutableSet *ignoreExecutableWrappers;
    PCTaskWrapper *phpTask;
    DocumentMode *sourceViewMode;
    BOOL isPerformingSyntaxHighlighting;
    NSMutableDictionary *styleCacheDictionary;
    NSMutableDictionary *scopeStyleCacheDictionary;
    CDStruct_d68b2fd0 I_fonts;
    NSMapTable *_cssTouchBarItems;
    NSMapTable *_cssPathToPopoverBar;
    NSMapTable *_cssPathToWebResource;
}

+ (id)keyPathsForValuesAffectingAutoReload;
+ (BOOL)canDisplayDocumentOfType:(int)arg1;
+ (id)browsersMenuWithAction:(SEL)arg1;
+ (void)initialize;
@property(retain) NSMapTable *cssPathToWebResource; // @synthesize cssPathToWebResource=_cssPathToWebResource;
@property(retain) NSMapTable *cssPathToPopoverBar; // @synthesize cssPathToPopoverBar=_cssPathToPopoverBar;
@property(retain) NSMapTable *cssTouchBarItems; // @synthesize cssTouchBarItems=_cssTouchBarItems;
@property(retain) WebPreviewStyleSheetManager *styleSheetManager; // @synthesize styleSheetManager=_styleSheetManager;
@property BOOL shouldReloadWebView; // @synthesize shouldReloadWebView=_shouldReloadWebView;
@property(getter=isLoadingWebView) BOOL loadingWebView; // @synthesize loadingWebView=_loadingWebView;
@property BOOL autoReload; // @synthesize autoReload=_autoReload;
@property(retain) NSURL *loadedURL; // @synthesize loadedURL;
@property(retain) NSURL *editorURL; // @synthesize editorURL;
- (void)removeStyleSheetOverrideForDocument:(id)arg1 restoreStyleSheet:(BOOL)arg2;
- (void)overrideStyleSheet:(id)arg1 withDocument:(id)arg2 applyStyles:(BOOL)arg3;
- (void)overrideStyleSheet:(id)arg1 withDocument:(id)arg2;
- (void)documentWasOpenedNotification:(id)arg1;
- (void)documentDidChange;
- (void)documentWillChange;
- (void)documentPathDidChangeNotification:(id)arg1;
- (void)documentDidSaveNotification:(id)arg1;
- (void)webViewProgressStarted:(id)arg1;
- (int)viewType;
- (void)view:(id)arg1 willMoveToWindow:(id)arg2;
- (void)willStartLiveResize:(id)arg1;
- (void)didEndLiveResize:(id)arg1;
- (void)view:(id)arg1 didMoveToWindow:(id)arg2;
- (void)setDelayedScrollPosition:(id)arg1;
- (void)webViewProgressFinished:(id)arg1;
- (void)webViewProgressEstimateChanged:(id)arg1;
- (BOOL)webViewIsStatusBarVisible:(id)arg1;
- (BOOL)webViewIsResizable:(id)arg1;
- (void)webViewClose:(id)arg1;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)determineWebInspectorVisibility;
- (void)webViewMainFrameViewFrameDidChangeNotification:(id)arg1;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (void)webView:(id)arg1 setStatusText:(id)arg2;
- (void)webView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)webView:(id)arg1 setContentRect:(struct CGRect)arg2;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (void)webView:(id)arg1 makeFirstResponder:(id)arg2;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveIcon:(id)arg2 forFrame:(id)arg3;
- (BOOL)webViewShouldInterruptJavaScript:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
- (id)pathForCSSRuleName:(id)arg1;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (id)webView;
- (void)viewAnimationCompleted:(id)arg1 wasCanceled:(BOOL)arg2;
- (void)validateNavigationButtons;
- (BOOL)validateMenuItem:(id)arg1;
- (void)urlFieldChanged:(id)arg1;
- (void)updateTabImage;
- (void)updatePathControl;
- (void)updateImportedFilesMenuAndLoadPage:(BOOL)arg1;
- (void)updateBrowserButtonDefaultApp:(id)arg1;
- (void)touchGoBackForward:(id)arg1;
- (void)touchEditDocument:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)toggleSourceVisible:(id)arg1;
- (void)toggleInspector:(id)arg1;
- (void)toggleAutoReload:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textStorageUpdateTimerDidFire:(id)arg1;
- (void)textStorageDidChange:(id)arg1;
- (void)taskWrapperDidTerminate:(id)arg1 terminationStatus:(int)arg2;
- (void)syntaxColorsDidChangeNotification:(id)arg1;
- (void)reload;
- (void)stopOrReload:(id)arg1;
- (void)snapBack:(id)arg1;
- (void)updateDocumentURLAndReloadIfNeeded;
- (void)sheetControllerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)reloadTimerDidFire:(id)arg1;
- (void)resetReloadTimer;
- (void)siteIndexDidChangeNotification:(id)arg1;
- (void)siteIndexWillChangeNotification:(id)arg1;
- (BOOL)shouldUseIncrementalSearch;
- (void)setWebpageTitle:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setSourceMode:(id)arg1;
- (void)setPageSourceVisible:(BOOL)arg1;
- (id)selectedFindString;
- (void)selectDOMElementInEditor:(id)arg1;
- (id)searchPlaceholder;
- (id)searchLabel;
- (void)search:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)scaleToFit;
- (void)savePageSourceAs:(id)arg1;
- (void)saveDocumentEditorAs:(id)arg1;
- (void)resetTextStorageUpdateTimer;
- (void)restoreStyleSheets:(id)arg1;
- (void)CSSDocumentWillCloseNotification:(id)arg1;
- (id)remoteFileManager;
- (void)recalculateKeyViewLoop;
- (void)publishDidCompleteNotification:(id)arg1;
- (void)print:(id)arg1;
- (id)previousSearchString;
- (void)previewInExternalBrowser:(id)arg1;
- (double)pathControlAccessoryMinimumWidth;
- (id)pathControlAccessoryView;
- (BOOL)pathControlWasClicked:(id)arg1;
- (void)refreshInterfaceAfterModification;
- (void)applyDocumentCSSStyle:(id)arg1;
- (void)openLinkInNewTab:(id)arg1;
- (void)openLinkInExternalBrowser:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)navigateForward:(id)arg1;
- (void)navigateBack:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextLarger:(id)arg1;
- (void)loadDocumentWebpage;
- (void)loadSafariBookmarksArray:(id)arg1 intoArray:(id)arg2;
- (void)loadSafariBookmarks;
- (void)loadRequest:(id)arg1;
- (void)loadPageSource;
- (void)loadPHP:(id)arg1 forURL:(id)arg2 encoding:(unsigned long long)arg3;
- (void)loadPHP:(id)arg1 forURL:(id)arg2;
- (void)loadHTML:(id)arg1 forURL:(id)arg2 encoding:(unsigned long long)arg3;
- (void)loadHTML:(id)arg1 forURL:(id)arg2;
- (void)cssOverrideAction:(id)arg1;
- (void)loadCSSReferences;
- (void)addImportedStyleSheets:(id)arg1 mapping:(id)arg2;
- (BOOL)isDynamicWebpage;
- (BOOL)isCurrentWebpageEditor;
- (id)initialFirstResponder;
- (void)hideDOMHighlightWindow;
- (void)goToLocation:(id)arg1;
- (void)goToHistoryMenuItem:(id)arg1;
- (void)jumpToCSSStyle:(id)arg1;
- (void)goToHistoryItem:(id)arg1;
- (BOOL)findString:(id)arg1 forward:(BOOL)arg2;
- (void)executePHP;
- (void)downloadLinkToDisk:(id)arg1;
- (void)downloadImageToDisk:(id)arg1;
- (void)displayPageAfterDelayForError:(id)arg1 frame:(id)arg2;
- (void)displayPageForError:(id)arg1 frame:(id)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (void)setNewUserAgent:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)customOtherUserAgentOK:(id)arg1;
- (void)customOtherUserAgentCancel:(id)arg1;
- (void)customOtherUserAgent:(id)arg1;
- (void)customUserAgent:(id)arg1;
- (void)CSSDidChangeTimerDidFire:(id)arg1;
- (void)resetCSSDidChangeUpdateTimerWithCSSDocument:(id)arg1;
- (void)CSSDidChangeNotification:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)comboBox:(id)arg1 didEndEditing:(id)arg2;
- (void)comboBox:(id)arg1 didBeginEditing:(id)arg2;
- (id)comboBox:(id)arg1 completionsForPartialWord:(id)arg2;
- (void)clearBrowserHistory;
- (void)clearAllCSSReferences;
- (void)changePreviewImportFile:(id)arg1;
- (void)certificatePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (BOOL)canPrint;
- (BOOL)canChangeDocument;
- (void)addMenuItemForWebHistory:(id)arg1 toMenu:(id)arg2;
- (void)addHistoryItemForURL:(id)arg1;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)TCM_styleFonts;
- (id)styleAttributesForScope:(id)arg1 languageContext:(id)arg2;
- (void)performHighlightSyntax;
- (void)highlightSyntaxLoop;
- (void)highlightSyntaxInRange:(struct _NSRange)arg1;
- (id)fontWithTrait:(unsigned long long)arg1;
- (id)downloadWindowForAuthenticationSheet:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidBegin:(id)arg1;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

