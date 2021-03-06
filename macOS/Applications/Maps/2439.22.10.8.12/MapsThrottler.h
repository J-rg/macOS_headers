//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MapsThrottler : NSObject
{
    BOOL _hasScheduledUpdateHandler;
    NSDate *_lastUpdateSentDate;
    double _throttlingInterval;
    CDUnknownBlockType _updateHandler;
    id _value;
    NSDate *_valueTimeStamp;
}

@property(readonly, nonatomic) NSDate *valueTimeStamp; // @synthesize valueTimeStamp=_valueTimeStamp;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) double throttlingInterval; // @synthesize throttlingInterval=_throttlingInterval;
- (void).cxx_destruct;
- (void)_scheduleUpdateHandlerWithDelay:(double)arg1;
- (id)initWithThrottlingInterval:(double)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

