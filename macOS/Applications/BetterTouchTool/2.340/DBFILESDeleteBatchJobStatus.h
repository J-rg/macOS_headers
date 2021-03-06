//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBFILESDeleteBatchError, DBFILESDeleteBatchResult, NSString;

@interface DBFILESDeleteBatchJobStatus : NSObject <DBSerializable, NSCopying>
{
    DBFILESDeleteBatchResult *_complete;
    DBFILESDeleteBatchError *_failed;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)isEqualToDeleteBatchJobStatus:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isOther;
- (BOOL)isFailed;
- (BOOL)isComplete;
- (BOOL)isInProgress;
@property(readonly, nonatomic) DBFILESDeleteBatchError *failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) DBFILESDeleteBatchResult *complete; // @synthesize complete=_complete;
- (id)initWithOther;
- (id)initWithFailed:(id)arg1;
- (id)initWithComplete:(id)arg1;
- (id)initWithInProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

