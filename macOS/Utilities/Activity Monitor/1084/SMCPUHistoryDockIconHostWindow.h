//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSSplitView;

@interface SMCPUHistoryDockIconHostWindow : NSWindow
{
    BOOL _aggregated;
    int _numberOfCores;
    NSSplitView *_splitView;
}

- (void).cxx_destruct;
@property __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) int numberOfCores; // @synthesize numberOfCores=_numberOfCores;
@property(nonatomic) BOOL aggregated; // @synthesize aggregated=_aggregated;
- (void)updateCPULoads:(id)arg1;
- (void)clearHistory;
- (void)forceUpdate:(id)arg1;

@end

