//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NagWindowControllerDelegate.h"

@class NSString, NSURL, TANagWindowController;

@protocol TANagWindowDelegate <NagWindowControllerDelegate>
- (void)taNagWindowDidCallGetStarted:(TANagWindowController *)arg1;
- (void)taNagWindow:(TANagWindowController *)arg1 didRequestOpenURL:(NSURL *)arg2;
- (void)taNagWindowDidCallSupport:(TANagWindowController *)arg1;
- (void)taNagWindowDidCallRegister:(TANagWindowController *)arg1;
- (void)taNagWindowDidCallBuyNow:(TANagWindowController *)arg1;
- (void)taNagWindow:(TANagWindowController *)arg1 didCallRetryFromScratch:(BOOL)arg2;
- (void)taNagWindowDidRequestReceipt:(TANagWindowController *)arg1;
- (void)taNagWindow:(TANagWindowController *)arg1 didRequestTokenForEmail:(NSString *)arg2;
@end

