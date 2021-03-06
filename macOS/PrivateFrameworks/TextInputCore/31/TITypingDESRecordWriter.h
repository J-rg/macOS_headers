//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject
{
    DESRecordStore *_typingDataStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DESRecordStore *typingDataStore; // @synthesize typingDataStore=_typingDataStore;
- (void)clearStoredRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchRecords:(CDUnknownBlockType)arg1;
- (void)storeAlignedSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldRecordToDES;
- (void)storeTypingSession:(id)arg1 containsCP:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

