//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PKDiscoveryTrigger : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    long long _maxActivationCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)discoveryTriggerWithDictionary:(id)arg1;
@property(nonatomic) long long maxActivationCount; // @synthesize maxActivationCount=_maxActivationCount;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

