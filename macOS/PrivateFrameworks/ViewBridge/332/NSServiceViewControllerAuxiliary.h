//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSViewServiceMarshal, NSWindow;

__attribute__((visibility("hidden")))
@interface NSServiceViewControllerAuxiliary : NSObject
{
    NSWindow *serviceWindow;
    NSViewServiceMarshal *marshal;
    unsigned int invalid:1;
    unsigned int makesExplicitResizeRequests:1;
    unsigned int retainedMarshal:1;
    unsigned int mostRecentCallToSetViewWasNonNil:1;
    unsigned int callsToSetViewCount;
    unsigned long long adjustLayoutInProgress;
    NSError *leastRecentError;
    unsigned int hostSDKVersion;
}

- (BOOL)hasOwnWindow;

@end

