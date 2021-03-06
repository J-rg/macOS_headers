//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSMenuItemValidation-Protocol.h"
#import "NSObject-Protocol.h"

@class NSMenu, NSMenuItem, NSSearchField, NSWindow, TBrowserContainerController;

@protocol TToolbarControllerDelegateProtocol <NSMenuItemValidation, NSObject>
- (BOOL)validateMenuItem:(NSMenuItem *)arg1;
- (struct TString)pathPrettyStringForNode:(struct TFENode)arg1;
- (struct TFENode)target;
- (void)populatePathMenu:(NSMenu *)arg1;
- (void)searchFieldTextChanged;
- (void)searchFieldCancel;
- (void)addingSearchToolbarItem:(NSSearchField *)arg1;
- (NSWindow *)window;
- (TBrowserContainerController *)activeContainer;
@end

