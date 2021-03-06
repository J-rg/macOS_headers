//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StylesBase.h"

@class IXButtonStyles, NSColor, NSImage, TextStyles;

@interface CZErrorDropAreaStateStyles : StylesBase
{
    NSColor *_fillColor;
    double _ringInnerOuterWidth;
    NSColor *_ringInnerColor;
    double _ringMiddleOuterWidth;
    double _ringMiddleInnerWidth;
    NSColor *_ringMiddleColor;
    double _ringOuterOuterWidth;
    double _ringOuterInnerWidth;
    NSColor *_ringOuterColor;
    NSImage *_glyph;
}

@property(retain, nonatomic) NSImage *glyph; // @synthesize glyph=_glyph;
@property(retain, nonatomic) NSColor *ringOuterColor; // @synthesize ringOuterColor=_ringOuterColor;
@property(nonatomic) double ringOuterInnerWidth; // @synthesize ringOuterInnerWidth=_ringOuterInnerWidth;
@property(nonatomic) double ringOuterOuterWidth; // @synthesize ringOuterOuterWidth=_ringOuterOuterWidth;
@property(retain, nonatomic) NSColor *ringMiddleColor; // @synthesize ringMiddleColor=_ringMiddleColor;
@property(nonatomic) double ringMiddleInnerWidth; // @synthesize ringMiddleInnerWidth=_ringMiddleInnerWidth;
@property(nonatomic) double ringMiddleOuterWidth; // @synthesize ringMiddleOuterWidth=_ringMiddleOuterWidth;
@property(retain, nonatomic) NSColor *ringInnerColor; // @synthesize ringInnerColor=_ringInnerColor;
@property(nonatomic) double ringInnerOuterWidth; // @synthesize ringInnerOuterWidth=_ringInnerOuterWidth;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) IXButtonStyles *buttonDelete; // @dynamic buttonDelete;
@property(copy, nonatomic) IXButtonStyles *buttonMigrate; // @dynamic buttonMigrate;
@property(copy, nonatomic) IXButtonStyles *buttonView; // @dynamic buttonView;
@property(copy, nonatomic) TextStyles *text; // @dynamic text;

@end

