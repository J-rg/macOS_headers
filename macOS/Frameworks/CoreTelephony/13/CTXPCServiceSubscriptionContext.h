//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isSimPresent;
    BOOL _isSimGood;
    long long _slotID;
    NSUUID *_uuid;
    NSString *_labelID;
    NSString *_label;
    NSString *_phoneNumber;
    NSNumber *_userDataPreferred;
    NSNumber *_userDefaultVoice;
}

+ (BOOL)supportsSecureCoding;
+ (id)contextWithServiceDescriptor:(id)arg1;
+ (id)contextWithUUID:(id)arg1;
+ (id)contextWithSlot:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL isSimGood; // @synthesize isSimGood=_isSimGood;
@property(nonatomic) BOOL isSimPresent; // @synthesize isSimPresent=_isSimPresent;
@property(retain, nonatomic) NSNumber *userDefaultVoice; // @synthesize userDefaultVoice=_userDefaultVoice;
@property(retain, nonatomic) NSNumber *userDataPreferred; // @synthesize userDataPreferred=_userDataPreferred;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) long long slotID; // @synthesize slotID=_slotID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)context;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithUUID:(id)arg1 andSlot:(long long)arg2;
- (id)initWithUUID:(id)arg1;
- (id)initWithSlot:(long long)arg1;

@end

