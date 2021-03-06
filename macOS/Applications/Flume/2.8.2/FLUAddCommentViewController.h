//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUMediaViewController.h"

#import "FLUMediaComposeViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class FLUBlurView, FLUMedia, FLUMediaComposeView, NSString;

@interface FLUAddCommentViewController : FLUMediaViewController <NSWindowDelegate, NSTextFieldDelegate, FLUMediaComposeViewDelegate>
{
    FLUMedia *_media;
    FLUBlurView *_blurView;
    FLUMediaComposeView *_composeCommentView;
    double _lastComposeCommentViewHeight;
}

@property(nonatomic) double lastComposeCommentViewHeight; // @synthesize lastComposeCommentViewHeight=_lastComposeCommentViewHeight;
@property(nonatomic) __weak FLUMediaComposeView *composeCommentView; // @synthesize composeCommentView=_composeCommentView;
@property(nonatomic) __weak FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) FLUMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)refreshView;
- (void)updateFrames;
- (void)flu_mediaTableComposeView:(id)arg1 didPressSendButton:(id)arg2;
- (void)flu_mediaTableComposeView:(id)arg1 textDidResizeToHeight:(double)arg2;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)setupAccessibility;
- (void)localizeUserInterface;
- (id)initWithMedia:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

