//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DelegateView, IXKeyEvent, IXMouseEvent, NSView;

@protocol DelegateViewDelegate <NSObject>

@optional
- (void)view:(DelegateView *)arg1 mouseExited:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 mouseMoved:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 mouseUp:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 mouseDown:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 scrollWheel:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 magnifyWithEvent:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 swipeWithEvent:(IXMouseEvent *)arg2;
- (BOOL)view:(NSView *)arg1 keyDown:(IXKeyEvent *)arg2;
@end

