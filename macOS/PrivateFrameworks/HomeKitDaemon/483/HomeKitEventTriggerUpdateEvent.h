//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class AWDHomeKitUpdateEventTrigger, NSString;

@interface HomeKitEventTriggerUpdateEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitUpdateEventTrigger *_metric;
}

+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) AWDHomeKitUpdateEventTrigger *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

