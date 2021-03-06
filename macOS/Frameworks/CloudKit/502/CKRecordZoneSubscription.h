//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKSubscription.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *recordType; // @dynamic recordType;
@property(readonly, copy, nonatomic) CKRecordZoneID *zoneID; // @dynamic zoneID;

@end

