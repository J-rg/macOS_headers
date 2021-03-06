//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>
{
    NSDate *_lastViolationDate;
    NSDate *_lastResetDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)noViolation;
- (void).cxx_destruct;
@property(readonly) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
@property(readonly) NSDate *lastViolationDate; // @synthesize lastViolationDate=_lastViolationDate;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLastViolationTimeInterval:(id)arg1 lastViolationResetTimeInterval:(id)arg2;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;

@end

