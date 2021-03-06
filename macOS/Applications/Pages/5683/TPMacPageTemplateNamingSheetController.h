//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSControlTextEditingDelegate-Protocol.h"

@class NSButton, NSString, NSTextField;

@interface TPMacPageTemplateNamingSheetController : NSWindowController <NSControlTextEditingDelegate>
{
    NSTextField *_templateNameMessageLabel;
    NSTextField *_templateNameTextField;
    NSButton *_okayButton;
    NSButton *_cancelButton;
}

@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSButton *okayButton; // @synthesize okayButton=_okayButton;
@property(retain, nonatomic) NSTextField *templateNameTextField; // @synthesize templateNameTextField=_templateNameTextField;
@property(retain, nonatomic) NSTextField *templateNameMessageLabel; // @synthesize templateNameMessageLabel=_templateNameMessageLabel;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (void)cancelName:(id)arg1;
- (void)okayName:(id)arg1;
- (void)showPageTemplateNamingSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initForActiveDocumentWithMessage:(id)arg1 usingName:(id)arg2 okayTitle:(id)arg3 cancelTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

