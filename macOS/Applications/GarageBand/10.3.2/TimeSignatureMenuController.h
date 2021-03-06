//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PopoverViewController.h"

@class MAKitSegmentedScrubber, NSPopUpButton, NSTextField;

@interface TimeSignatureMenuController : PopoverViewController
{
    MAKitSegmentedScrubber *m_numerator;
    NSPopUpButton *m_denominator;
    NSTextField *m_beatGrouping;
    NSTextField *m_beatGroupingLabel;
    double m_GBHeight;
    double m_LogicHeight;
}

+ (void)showRelativeToView:(id)arg1 preferredEdge:(unsigned long long)arg2;
+ (BOOL)canBecomeKey;
+ (id)nibName;
+ (id)stringForTimeSignatureDict:(id)arg1 includeBeatGrouping:(BOOL)arg2;
+ (void)readTimeSignatureDict:(id)arg1 intoNumerator:(char *)arg2 denom:(int *)arg3 beatGrouping:(char *)arg4;
+ (id)createTimeSignatureDict:(unsigned char)arg1 denom:(int)arg2 beatGrouping:(const char *)arg3;
+ (id)menuItemInButtonMenu:(id)arg1 representingSignature:(id)arg2;
+ (id)menuItemInMenu:(id)arg1 representingSignature:(id)arg2;
+ (id)createTimeSignatureMenu;
+ (void)_addItemForSig:(id)arg1 toMenu:(id)arg2;
- (void)change_beatGrouping:(id)arg1;
- (void)change_denominator:(id)arg1;
- (void)change_numerator:(id)arg1;
- (void)sigChanged:(BOOL)arg1;
- (void)set:(unsigned char)arg1 denom:(int)arg2 beatGrouping:(const char *)arg3;
- (void)awakeFromNib;

@end

