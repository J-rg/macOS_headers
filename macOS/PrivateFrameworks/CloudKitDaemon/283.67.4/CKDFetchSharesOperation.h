//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchSharesOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _shareFetchedProgressBlock;
    NSArray *_shareIDs;
    NSArray *_zoneIDs;
}

@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(retain, nonatomic) NSArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) CDUnknownBlockType shareFetchedProgressBlock; // @synthesize shareFetchedProgressBlock=_shareFetchedProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleShareFetched:(id)arg1 shareID:(id)arg2 zoneID:(id)arg3 operationResult:(id)arg4;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

