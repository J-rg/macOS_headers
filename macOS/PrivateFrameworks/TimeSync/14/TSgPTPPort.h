//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, __TSgPTPPortNotification;

@interface TSgPTPPort : NSObject
{
    unsigned int _service;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    struct IONotificationPort *_notificationPort;
    unsigned int _interestNotification;
    __TSgPTPPortNotification *_portForNotification;
    NSObject<OS_dispatch_queue> *_internalPropertyUpdateQueue;
    unsigned short _portNumber;
    int _portRole;
    unsigned long long _clockIdentifier;
    NSObject<OS_dispatch_queue> *_propertyUpdateQueue;
}

+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)gPTPPortWithService:(unsigned int)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // @synthesize propertyUpdateQueue=_propertyUpdateQueue;
@property(nonatomic) unsigned long long clockIdentifier; // @synthesize clockIdentifier=_clockIdentifier;
@property(nonatomic) int portRole; // @synthesize portRole=_portRole;
@property(nonatomic) unsigned short portNumber; // @synthesize portNumber=_portNumber;
- (void)dealloc;
- (struct IONotificationPort *)_notificationPort;
- (id)_portForNotification;
- (id)_notificationQueue;
@property(readonly, nonatomic) int portType; // @dynamic portType;
- (unsigned long long)_clockIdentifier;
- (int)_portRole;
- (unsigned short)_portNumber;
- (void)serviceTerminated;
- (BOOL)stopAutomaticPropertyUpdates;
- (BOOL)startAutomaticPropertyUpdates;
- (void)updateProperties;
@property(readonly, nonatomic) unsigned int service;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (BOOL)_commonInitWithService:(unsigned int)arg1;
- (id)init;

@end

