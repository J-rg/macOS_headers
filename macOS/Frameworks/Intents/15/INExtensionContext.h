//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, NSUUID;

@interface INExtensionContext : NSObject <NSSecureCoding>
{
    NSString *_recordRoute;
    NSUUID *_recordDeviceUID;
    NSString *_recordDeviceIdentifier;
    NSArray *_airPlayRouteIdentifiers;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setAirPlayRouteIdentifiers:) NSArray *_airPlayRouteIdentifiers; // @synthesize _airPlayRouteIdentifiers;
@property(copy, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *_recordDeviceIdentifier; // @synthesize _recordDeviceIdentifier;
@property(copy, nonatomic, setter=_setRecordDeviceUID:) NSUUID *_recordDeviceUID; // @synthesize _recordDeviceUID;
@property(copy, nonatomic, setter=_setRecordRoute:) NSString *_recordRoute; // @synthesize _recordRoute;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

