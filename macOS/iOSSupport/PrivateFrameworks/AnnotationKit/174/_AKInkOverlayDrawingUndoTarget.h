//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject
{
    AKPageController *_pageController;
}

@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (void)performUndo:(id)arg1;
- (id)initWithPageController:(id)arg1;

@end

