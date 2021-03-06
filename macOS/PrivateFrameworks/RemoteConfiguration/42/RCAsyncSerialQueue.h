//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject
{
    NSOperationQueue *_serialOperationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(nonatomic) BOOL suspended;
- (void)cancelAllBlocks;
- (void)enqueueOperation:(id)arg1;
- (void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(CDUnknownBlockType)arg2;
- (void)enqueueBlockForMainThread:(CDUnknownBlockType)arg1;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (id)initWithQualityOfService:(long long)arg1;
- (id)init;

@end

