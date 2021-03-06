//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>
{
    CKRecordID *_userRecordID;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)initWithUserRecordID:(id)arg1;

@end

