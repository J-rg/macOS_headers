//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitViewDelegate.h"

@class PTYSplitView;

@protocol PTYSplitViewDelegate <NSSplitViewDelegate>
- (void)splitViewDidChangeSubviews:(PTYSplitView *)arg1;
- (void)splitView:(PTYSplitView *)arg1 draggingWillBeginOfSplit:(int)arg2;
- (void)splitView:(PTYSplitView *)arg1 draggingDidEndOfSplit:(int)arg2 pixels:(struct CGSize)arg3;
@end

