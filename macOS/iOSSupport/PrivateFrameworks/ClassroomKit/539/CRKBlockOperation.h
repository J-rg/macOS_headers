//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@interface CRKBlockOperation : CATOperation
{
    CDUnknownBlockType _operationBlock;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithOperationBlock:(CDUnknownBlockType)arg1;

@end

