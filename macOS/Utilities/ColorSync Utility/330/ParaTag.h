//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSProfTag.h"

@class NSString, NSTextField, PlotView;

@interface ParaTag : CSProfTag
{
    PlotView *_curvView;
    NSTextField *_paramGamma;
    NSTextField *_paramA;
    NSTextField *_paramB;
    NSTextField *_paramC;
    NSTextField *_paramD;
    NSTextField *_paramE;
    NSTextField *_paramF;
    NSTextField *_paraTypeStr;
    NSTextField *_paraFuncStr1;
    NSTextField *_paraFuncStr2;
    NSTextField *_paraFuncStr3;
    NSString *_paraTypeStrOrig;
    NSString *_paraFuncStrOrig1;
    NSString *_paraFuncStrOrig2;
    NSString *_paraFuncStrOrig3;
    NSTextField *_params[7];
    BOOL _enableParam1;
    BOOL _enableParam2;
    BOOL _enableParam3;
    BOOL _enableParam4;
    BOOL _enableParam5;
    BOOL _enableParam6;
}

@property BOOL enableParam6; // @synthesize enableParam6=_enableParam6;
@property BOOL enableParam5; // @synthesize enableParam5=_enableParam5;
@property BOOL enableParam4; // @synthesize enableParam4=_enableParam4;
@property BOOL enableParam3; // @synthesize enableParam3=_enableParam3;
@property BOOL enableParam2; // @synthesize enableParam2=_enableParam2;
@property BOOL enableParam1; // @synthesize enableParam1=_enableParam1;
- (void)setProfile:(struct ColorSyncProfile *)arg1 tagType:(unsigned int)arg2 dataType:(unsigned int)arg3;
- (id)describeTagType:(unsigned int)arg1 dataType:(unsigned int)arg2 dataSize:(unsigned long long)arg3;
- (BOOL)canDisplayTagType:(unsigned int)arg1 dataType:(unsigned int)arg2 dataSize:(unsigned int)arg3;
- (void)awakeFromNib;
- (void)dealloc;

@end

