//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSUUID, _OSLogCollectionReference, _OSLogEventStoreMetadata, _OSLogEventStoreTimeRef;

@interface OSLogEventSource : NSObject
{
    NSMutableArray *_fileRefs;
    _OSLogCollectionReference *_lcr;
    _OSLogEventStoreMetadata *_lesm;
    _OSLogEventStoreTimeRef *_oldestTimeRef;
    struct _os_timesync_db_s *_tsdb;
}

@property(readonly, nonatomic) struct _os_timesync_db_s *tsdb; // @synthesize tsdb=_tsdb;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *oldestTimeRef; // @synthesize oldestTimeRef=_oldestTimeRef;
@property(readonly, nonatomic) _OSLogEventStoreMetadata *lesm; // @synthesize lesm=_lesm;
@property(readonly, nonatomic) _OSLogCollectionReference *lcr; // @synthesize lcr=_lcr;
@property(retain, nonatomic) NSMutableArray *_fileRefs; // @synthesize _fileRefs;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *newestDate;
@property(readonly, nonatomic) NSDate *oldestDate;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *newestTimeRef;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)_enumerateIndexFiles:(CDUnknownBlockType)arg1;
- (void)_insertIndexFile:(id)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 metadata:(id)arg2 timesync:(struct _os_timesync_db_s *)arg3;

@end

