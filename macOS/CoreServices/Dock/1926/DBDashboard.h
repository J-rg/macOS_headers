//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBBackgroundWindows, DBButton, DBSpringboard, DBWidget, NSMutableArray, NSSet, _CGSSpace;
@protocol OS_dispatch_source;

@interface DBDashboard : NSObject
{
    NSSet *_whitelist;
    long long _groupProcessesBy;
    unsigned int _cid;
    NSObject<OS_dispatch_source> *_eventSource;
    NSObject<OS_dispatch_source> *_saveWidgetsTimer;
    NSObject<OS_dispatch_source> *_sigChildSource;
    NSMutableArray *_widgetList;
    unsigned int _display;
    float _displayScale;
    struct CGPoint _lastDownOnDashboard;
    double _startTime;
    unsigned long long _hotKeyDownTime;
    _CGSSpace *_overlaySpace;
    struct __CFRunLoopSource *_widgetInstallerSource;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _overlayAnimationMutex;
    DBBackgroundWindows *_overlayBackgroundWindows;
    NSMutableArray *_widgetProcessList;
    DBButton *_plusButton;
    DBButton *_minusButton;
    DBButton *_backButton;
    DBButton *_lastButtonHit;
    unsigned char _lastButtonState;
    _Bool _widgetsAwake;
    _Bool _watchingForFlagsChanged;
    _Bool _sticky;
    _Bool _ignoreUp;
    _Bool _overlayAnimatingIn;
    _Bool _overlayAnimatingOut;
    _Bool _spaceShowing;
    _Bool _overlayShowing;
    _Bool _allowOutOfLayer;
    _Bool _editMode;
    long long _enabledState;
    DBWidget *_keyFocusWidget;
}

+ (long long)enabledState:(_Bool)arg1;
@property(readonly, nonatomic) NSMutableArray *widgetProcessList; // @synthesize widgetProcessList=_widgetProcessList;
@property(nonatomic) _Bool editMode; // @synthesize editMode=_editMode;
@property(readonly, nonatomic) DBButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) DBButton *minusButton; // @synthesize minusButton=_minusButton;
@property(readonly, nonatomic) DBButton *plusButton; // @synthesize plusButton=_plusButton;
@property(readonly, nonatomic) DBWidget *keyFocusWidget; // @synthesize keyFocusWidget=_keyFocusWidget;
@property(readonly, nonatomic) unsigned int cid; // @synthesize cid=_cid;
@property(readonly, nonatomic) _Bool allowOutOfLayer; // @synthesize allowOutOfLayer=_allowOutOfLayer;
@property(readonly, nonatomic) _Bool overlayShowing; // @synthesize overlayShowing=_overlayShowing;
@property(readonly, nonatomic) _Bool spaceShowing; // @synthesize spaceShowing=_spaceShowing;
@property(nonatomic) long long enabledState; // @synthesize enabledState=_enabledState;
- (void).cxx_destruct;
- (void)_removeProcess:(id)arg1;
- (id)_processForPID:(int)arg1;
- (id)_processForWidget:(id)arg1 groupBy:(long long)arg2 startBackgrounded:(_Bool)arg3;
- (void)_setEnableState:(long long)arg1;
- (void)_performDropEffect:(id)arg1;
- (int)_installerLaunchWidget:(const char *)arg1;
- (_Bool)_widgetIsRunning:(id)arg1;
- (void)_forkWidgetInstaller:(id)arg1;
- (void)_findAndRemoveFirstCloseBox;
- (CDStruct_abcb105a *)_animateInOutDataCreate:(_Bool)arg1 animateIn:(_Bool)arg2;
- (unsigned int)_createCloseBoxWindow:(id)arg1 scaleFactor:(float)arg2;
- (void)_createCloseBoxAndPosition:(id)arg1;
- (_Bool)_getSharedCloseBox:(id)arg1;
- (void)_layoutButtons;
- (void)_toggleSpace;
- (void)_animateOverlayOutThread:(CDStruct_abcb105a *)arg1;
- (struct _opaque_pthread_t *)_animateOverlayOut:(_Bool)arg1 detached:(_Bool)arg2;
- (void)_animateOverlayInThread:(CDStruct_abcb105a *)arg1;
- (_Bool)_animateOverlayIn:(_Bool)arg1;
- (void)_sigchild;
- (id)_findWidgetByUIDAndBundleID:(struct __CFString *)arg1;
- (id)_widgetWithBundleIdentifier:(id)arg1;
- (void)_handleWidgetDownloadGURL:(id)arg1;
- (void)_handleWidgetGURL:(struct __CFURL *)arg1 showDefaultBackground:(_Bool)arg2 position:(const struct CGPoint *)arg3;
- (void)_addGadgetFromRequestOrOpen:(id)arg1;
- (id)_widgetForCloseBoxWindow:(unsigned int)arg1;
- (void)_moveWidgetsOnScreenIfNecessary;
- (void)_wakeupWidgets:(_Bool)arg1;
- (void)_launchAnyWidgetsIfNecessary;
- (void)_fetchWidgets;
- (void)_fetchWidgetsFirstTime;
- (id)_createWidgetForFirstTime:(id)arg1 uid:(char *)arg2;
- (void)_fetchWidgetsAtStartup;
- (void)hotKeyUp:(unsigned long long)arg1 slow:(_Bool)arg2;
- (void)hotKeyDown:(unsigned long long)arg1 slow:(_Bool)arg2;
- (void)_handleEvents;
- (void)messageTrace;
- (void)closeWidgetFromWidgetRequest:(id)arg1;
- (void)showSharedCloseBoxForWidget:(id)arg1;
- (int)windowLevelForWidget:(id)arg1;
- (int)defaultWindowLevel:(_Bool)arg1;
- (void)saveWidgets;
- (void)exitOverlayIfNecessary:(_Bool)arg1;
- (void)toggle;
- (void)show;
- (_Bool)bringWidgetToFront:(id)arg1;
- (void)setKeyFocusWidgetAndNotify:(id)arg1;
- (void)updateWidgetColorSpaces:(unsigned int)arg1 space:(struct CGColorSpace *)arg2;
- (void)removeWidgetDependencies:(id)arg1;
- (void)mouseExitedWidget;
- (void)hideSpringboard;
- (struct __CFArray *)copyWidgetURLs;
- (void)removeWidget:(id)arg1 killNow:(_Bool)arg2;
- (_Bool)terminateWidgetsWithBundleID:(id)arg1;
- (void)displayChanged:(unsigned int)arg1;
- (void)changeDisplaysFromExpose:(unsigned int)arg1;
- (void)handleGURL:(const struct AEDesc *)arg1 url:(id)arg2;
- (id)addWidgetAndShowFromURL:(id)arg1 showDefaultBackground:(_Bool)arg2 position:(const struct CGPoint *)arg3;
- (_Bool)openWidget:(id)arg1 path:(id)arg2 launchFromRect:(struct CGRect)arg3 openRect:(struct CGRect *)arg4;
- (id)createAndShowDebugWidget:(id)arg1 position:(struct CGPoint *)arg2;
- (_Bool)createAnOpenWidgetForSelfTest:(id)arg1;
- (void)springboardExited;
- (void)springboardEntered;
- (void)spaceWillBeHidden;
- (void)spaceWillBeShown;
- (short)openHandler:(id)arg1 reply:(struct AEDesc *)arg2 refCon:(long long)arg3;
- (_Bool)identifierAllowed:(id)arg1;
@property(readonly, nonatomic) _Bool hasWhiteList;
@property(readonly, nonatomic) DBSpringboard *springboard;
@property(readonly, nonatomic) DBWidget *firstWidgetInLayer;
@property(readonly, nonatomic) _Bool isShowing;
- (void)invalidate;
- (void)dealloc;
- (id)initWithUberConnection:(unsigned int)arg1 enabledState:(long long)arg2;

@end

