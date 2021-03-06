//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MTLByteIterator : NSObject
{
    void *buffer;
    unsigned long long currentOffset;
    unsigned long long length;
}

+ (id)iteratorForBuffer:(void *)arg1 withLength:(unsigned long long)arg2;
- (void)advance:(unsigned long long)arg1;
@property(readonly) unsigned long long bytesLeft;
- (void)truncateTo:(unsigned long long)arg1;
- (void)readBytes:(unsigned long long)arg1 into:(void *)arg2;
- (id)initWithBuffer:(void *)arg1 withLength:(unsigned long long)arg2;

@end

