//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice;

@interface HMDEventTriggerDevice : HMFObject
{
    BOOL _currentDevice;
    HMDDevice *_device;
}

@property(readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDevice:(id)arg1 forHome:(id)arg2;
- (id)initWithCurrentDeviceForHome:(id)arg1;

@end

