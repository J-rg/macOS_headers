//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestionsUI/NSObject-Protocol.h>

@class NSAlert, NSViewController;

@protocol SGSuggestionViewControllerPresenter <NSObject>
- (void)presentAlert:(NSAlert *)arg1 withCompletionHandler:(void (^)(long long))arg2;
- (void)dismissViewController:(NSViewController *)arg1;
- (void)presentViewController:(NSViewController *)arg1;
@end

