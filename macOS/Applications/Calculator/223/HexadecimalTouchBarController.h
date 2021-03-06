//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TouchBarController.h"

#import "NSTouchBarDelegate-Protocol.h"

@class NSButton, NSString, NSTouchBar;

@interface HexadecimalTouchBarController : TouchBarController <NSTouchBarDelegate>
{
    int _inputMode;
    BOOL _rpnActive;
    NSTouchBar *_hexadecimalTouchBar;
    NSButton *f_equalsButton;
    NSButton *f_clearButton;
    NSButton *f_allClearButton;
    NSButton *f_additionButton;
    NSButton *f_multiplicationButton;
    NSButton *f_subtractionButton;
    NSButton *f_divisionButton;
    NSButton *f_andButton;
    NSButton *f_orButton;
    NSButton *f_xorButton;
    NSButton *f_norButton;
    NSButton *f_rightShiftNButton;
    NSButton *f_leftShiftNButton;
    NSButton *f_rightShiftButton;
    NSButton *f_leftShiftButton;
    NSButton *f_byteFlipButton;
    NSButton *f_wordFlipButton;
    NSButton *f_0_Button;
    NSButton *f_1_Button;
    NSButton *f_2_Button;
    NSButton *f_3_Button;
    NSButton *f_4_Button;
    NSButton *f_5_Button;
    NSButton *f_6_Button;
    NSButton *f_7_Button;
    NSButton *f_8_Button;
    NSButton *f_9_Button;
    NSButton *f_A_Button;
    NSButton *f_B_Button;
    NSButton *f_C_Button;
    NSButton *f_D_Button;
    NSButton *f_E_Button;
    NSButton *f_F_Button;
    NSButton *f_FF_Button;
    NSButton *f_00_Button;
    NSButton *f_roLButton;
    NSButton *f_roRButton;
    NSButton *f_1sButton;
    NSButton *f_2sButton;
    NSButton *f_enterButton;
}

- (void).cxx_destruct;
- (id)escapeButtons;
- (id)operatorButtons;
- (id)allButtons;
- (id)allGroupIdentifiers;
- (id)hexadecimalAllowedIdentifiers;
- (id)hexadecimalDefaultIdentifierSet;
- (id)hexadecimalGroup;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)setClearActive:(BOOL)arg1;
- (void)setRPNActive:(BOOL)arg1;
- (id)touchBar;
- (void)setInputMode:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

