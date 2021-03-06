//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSProtobufSerializable.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying>
{
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
+ (id)displayWithHardwareIdentifier:(id)arg1;
+ (id)builtinDisplay;
+ (id)nullDisplay;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_hardwareIdentifier;
- (BOOL)_isBuiltinDisplay;
- (BOOL)_isNullDisplay;
- (id)_initWithHardwareIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

