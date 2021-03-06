//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PlatformMac : NSObject
{
    NSArray *memorySlotInfo;
    BOOL _hideIntergratedGraphics;
    BOOL _ignoreGraphicsControl;
    long long _manufactureWeek;
    long long _manufactureYear;
}

+ (id)serial;
+ (id)variation;
+ (id)supportedSensors;
+ (id)icon;
+ (long long)memorySlots;
+ (double)maximumMemory;
+ (id)name;
+ (long long)cpuCount;
+ (long long)cpuCoreCount;
+ (long long)cpuPhysicalCoreCount;
+ (id)identifier;
@property(nonatomic) BOOL ignoreGraphicsControl; // @synthesize ignoreGraphicsControl=_ignoreGraphicsControl;
@property(nonatomic) BOOL hideIntergratedGraphics; // @synthesize hideIntergratedGraphics=_hideIntergratedGraphics;
@property(nonatomic) long long manufactureYear; // @synthesize manufactureYear=_manufactureYear;
@property(nonatomic) long long manufactureWeek; // @synthesize manufactureWeek=_manufactureWeek;
@property(retain, nonatomic) NSArray *memorySlotInfo; // @synthesize memorySlotInfo;
- (void).cxx_destruct;
- (BOOL)usesSyncedFans;
- (id)networkHardwareAdress;
- (id)variationName;
- (void)decodeSerial;
- (id)boardID;
- (id)serial;
- (void)fetchMemoryInfo;
- (id)variation;
- (id)nameForFan:(id)arg1;
- (id)defaultSensorKeys;
- (id)cpuTemperatureSensors;
- (id)supportedSensors;
- (id)name;
- (id)memory;
- (id)cpuSpeed;
- (id)cpu;
- (id)identifier;
- (id)osVersion;
- (BOOL)isSSLSupported;
- (id)init;

@end

