//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Lookup/NSRemoteViewDelegate-Protocol.h>
#import <Lookup/NSWindowDelegate-Protocol.h>

@class NSBox, NSPopover, NSString;

@interface LULookupRemoteViewController : NSViewController <NSRemoteViewDelegate, NSWindowDelegate>
{
    NSPopover *_popover;
    NSString *_searchTerm;
    NSString *_searchLanguage;
    NSBox *_calloutTint;
    BOOL _isLiveResizing;
    BOOL _isAppearing;
    struct CGSize _nextResize;
}

@property struct CGSize nextResize; // @synthesize nextResize=_nextResize;
@property BOOL isAppearing; // @synthesize isAppearing=_isAppearing;
@property BOOL isLiveResizing; // @synthesize isLiveResizing=_isLiveResizing;
@property(retain) NSBox *calloutTint; // @synthesize calloutTint=_calloutTint;
@property(copy) NSString *searchLanguage; // @synthesize searchLanguage=_searchLanguage;
@property(copy) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
- (BOOL)view:(id)arg1 shouldResize:(struct CGSize)arg2;
- (void)_updateContentSizeFromNextResize;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_viewDidDisappear;
- (void)_viewWillDisappear;
- (void)_viewDidAppear;
- (void)_viewWillAppear;
- (void)_viewDidLoad;
- (void)commonLULookupRemoteViewControllerTeardown;
- (void)finalize;
- (void)dealloc;
- (id)initWithSearchTerm:(id)arg1 andLanguageIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

