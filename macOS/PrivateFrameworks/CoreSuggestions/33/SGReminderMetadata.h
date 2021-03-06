//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, SGRecordId;

@interface SGReminderMetadata : NSObject <NSSecureCoding, NSCopying>
{
    SGRecordId *_recordId;
    NSString *_sourceUniqueIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sourceUniqueIdentifier; // @synthesize sourceUniqueIdentifier=_sourceUniqueIdentifier;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (BOOL)isEqualToReminderMetadata:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRecordId:(id)arg1 sourceUniqueIdentifier:(id)arg2;

@end

