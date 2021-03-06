//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "WKNavigationDelegatePrivate-Protocol.h"
#import "WKUIDelegatePrivate-Protocol.h"

@class FBAFileMatcher, FBAWKWebView, NSLayoutConstraint, NSString;

@interface FBAFileMatcherInstructionsWindowController : NSWindowController <WKUIDelegatePrivate, WKNavigationDelegatePrivate>
{
    BOOL _gathersAutomatially;
    BOOL _finishedLoading;
    FBAFileMatcher *_requirement;
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    FBAWKWebView *_webView;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(retain, nonatomic) FBAWKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSLayoutConstraint *height; // @synthesize height=_height;
@property(retain, nonatomic) NSLayoutConstraint *width; // @synthesize width=_width;
@property(nonatomic) BOOL gathersAutomatially; // @synthesize gathersAutomatially=_gathersAutomatially;
@property(retain, nonatomic) FBAFileMatcher *requirement; // @synthesize requirement=_requirement;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_webView:(id)arg1 getContextMenuFromProposedMenu:(id)arg2 forElement:(id)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)gatherInfo;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

