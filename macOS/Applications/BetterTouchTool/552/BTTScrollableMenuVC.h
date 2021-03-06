//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class BTTMenuHoverButton, NSArray;

__attribute__((visibility("hidden")))
@interface BTTScrollableMenuVC : NSViewController
{
    BOOL _mm;
    BOOL _tp;
    BOOL _keyboard;
    BOOL _leap;
    BOOL _appleremote;
    BOOL _normalmice;
    BOOL _other;
    BOOL _bttremote;
    BOOL _drawings;
    BOOL _siriRemote;
    struct CGPoint _mmO;
    struct CGPoint _tpO;
    struct CGPoint _keyboardO;
    struct CGPoint _leapO;
    struct CGPoint _appleremoteO;
    struct CGPoint _normalmiceO;
    struct CGPoint _otherO;
    struct CGPoint _bttremoteO;
    struct CGPoint _drawingsO;
    struct CGPoint _siriO;
    BTTMenuHoverButton *_drawingsButton;
    BTTMenuHoverButton *_mmbutton;
    BTTMenuHoverButton *_tpbutton;
    BTTMenuHoverButton *_keyboardButton;
    BTTMenuHoverButton *_touchbarButton;
    BTTMenuHoverButton *_leapButton;
    BTTMenuHoverButton *_normalMiceButton;
    BTTMenuHoverButton *_otherTriggersButton;
    BTTMenuHoverButton *_bttRemoteButton;
    NSArray *_buttonArray;
    BTTMenuHoverButton *_siriRemoteButton;
}

@property __weak BTTMenuHoverButton *siriRemoteButton; // @synthesize siriRemoteButton=_siriRemoteButton;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property BTTMenuHoverButton *bttRemoteButton; // @synthesize bttRemoteButton=_bttRemoteButton;
@property BTTMenuHoverButton *otherTriggersButton; // @synthesize otherTriggersButton=_otherTriggersButton;
@property BTTMenuHoverButton *normalMiceButton; // @synthesize normalMiceButton=_normalMiceButton;
@property BTTMenuHoverButton *leapButton; // @synthesize leapButton=_leapButton;
@property BTTMenuHoverButton *touchbarButton; // @synthesize touchbarButton=_touchbarButton;
@property BTTMenuHoverButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property BTTMenuHoverButton *tpbutton; // @synthesize tpbutton=_tpbutton;
@property BTTMenuHoverButton *mmbutton; // @synthesize mmbutton=_mmbutton;
@property __weak BTTMenuHoverButton *drawingsButton; // @synthesize drawingsButton=_drawingsButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)userDefaultsChanged;
- (void)configureOtherTriggersTab:(BOOL)arg1;
- (void)configureNormalMiceTab:(BOOL)arg1;
- (void)configureBTTRemoteTab:(BOOL)arg1;
- (void)configureAppleRemoteTab:(BOOL)arg1;
- (void)configureLeapTab:(BOOL)arg1;
- (void)configureKeyboardTab:(BOOL)arg1;
- (void)configureTrackpadTab:(BOOL)arg1;
- (void)configureDrawingsTab:(BOOL)arg1;
- (void)configureSiriRemoteTab:(BOOL)arg1;
- (void)configureMagicMouseTab:(BOOL)arg1;
- (void)arrangeButtons;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

