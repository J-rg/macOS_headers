//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@interface _MPSparseArrayNode : NSObject <NSSecureCoding>
{
    unsigned long long _relativeOffset;
    id _object;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) unsigned long long relativeOffset; // @synthesize relativeOffset=_relativeOffset;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelativeOffset:(unsigned long long)arg1 object:(id)arg2;

@end

