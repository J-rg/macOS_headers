//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface RangeObject : NSObject
{
    CDStruct_eba65aba _range;
}

+ (id)rangesFromIndexSet:(id)arg1;
+ (id)rangeObjectWithRange:(CDStruct_eba65aba)arg1;
@property(readonly, nonatomic) CDStruct_eba65aba range; // @synthesize range=_range;
- (void)setRange:(CDStruct_eba65aba)arg1;
- (id)description;
- (id)initWithRange:(CDStruct_eba65aba)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;

@end

