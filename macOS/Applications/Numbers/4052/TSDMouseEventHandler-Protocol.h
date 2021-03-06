//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSEvent;

@protocol TSDMouseEventHandler <NSObject>

@optional
- (void)cancelMouseDown;
- (BOOL)mouseHandlingHasCompleted;
- (BOOL)handlesEventLoop;
- (BOOL)wantsOnlySingleClicks;
- (BOOL)handleMultipleClicksAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (BOOL)handleDoubleClickAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (BOOL)handleSingleClickAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (BOOL)handleKeyDownWithEvent:(NSEvent *)arg1;
- (void)pressureChangeWithEvent:(NSEvent *)arg1;
- (void)flagsChangedWithEvent:(NSEvent *)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseScrolledAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
@end

