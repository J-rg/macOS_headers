//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZoneChange.h>

@class HMDCloudShareGroupChange;

@interface HMDCloudHomeZoneChange : HMDCloudZoneChange
{
    HMDCloudShareGroupChange *_shareGroupChange;
}

@property(retain, nonatomic) HMDCloudShareGroupChange *shareGroupChange; // @synthesize shareGroupChange=_shareGroupChange;
- (void).cxx_destruct;
- (id)objectChanges;
- (id)changeWithRecordName:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;
- (BOOL)moreChangesToProcess;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (id)initWithZone:(id)arg1 temporaryCache:(BOOL)arg2;

@end

