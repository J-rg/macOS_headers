//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenTimeUI/STLockoutViewController.h>

#import <LockoutUI/LOViewController-Protocol.h>

@class NSString;
@protocol LOViewControllerDelegate;

@interface STLockoutViewController (LOViewController) <LOViewController>

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL didFinishDismissing;
@property(nonatomic, getter=isForSnapshot) BOOL forSnapshot;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <LOViewControllerDelegate> viewControllerDelegate;
@end

