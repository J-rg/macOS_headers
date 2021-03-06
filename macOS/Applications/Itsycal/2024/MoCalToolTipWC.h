//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTimer, NSViewController<MoCalTooltipProvider>;

@interface MoCalToolTipWC : NSWindowController
{
    NSTimer *_fadeTimer;
    struct CGRect _positioningRect;
    struct CGRect _screenFrame;
    NSViewController<MoCalTooltipProvider> *_vc;
}

@property(retain, nonatomic) NSViewController<MoCalTooltipProvider> *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)tick:(id)arg1;
- (void)hideTooltip;
- (void)endTooltip;
- (void)showTooltip;
- (void)positionTooltip;
- (void)showTooltipForDate:(CDStruct_48ebedb0)arg1 relativeToRect:(struct CGRect)arg2 screenFrame:(struct CGRect)arg3;
- (id)init;

@end

