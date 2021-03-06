//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPipe, NSString, NSTask;

@interface DFSystemProfileFetcher : NSObject
{
    NSTask *_scriptTask;
    NSPipe *_scriptPipe;
    NSString *_profile;
    BOOL _isDoneFetching;
    unsigned long long _dataTypes;
    id <DFSystemProfileFetcherDelegate> _delegate;
}

+ (BOOL)canFetch;
+ (void)initialize;
@property(readonly, nonatomic) BOOL isDoneFetching; // @synthesize isDoneFetching=_isDoneFetching;
@property(readonly, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(nonatomic) id <DFSystemProfileFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancel;
- (void)fetchDataTypes:(unsigned long long)arg1;
- (void)scriptPipeDidComplete:(id)arg1;
- (void)dealloc;
- (id)init;

@end

