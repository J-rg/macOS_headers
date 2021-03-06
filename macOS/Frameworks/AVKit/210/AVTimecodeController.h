//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetTrack, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVTimecodeController : NSObject
{
    long long _frameCount;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_timecodeTrack;
    NSMutableArray *_timecodes;
    struct CVSMPTETime _maxTimecode;
    long long _maxFrameNumber;
    id _timeObserver;
    CDStruct_1b6d18a9 _observationInterval;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 observationInterval; // @synthesize observationInterval=_observationInterval;
@property(retain, nonatomic) AVAssetTrack *timecodeTrack; // @synthesize timecodeTrack=_timecodeTrack;
- (void).cxx_destruct;
- (BOOL)timecodeAvailable;
- (BOOL)readTimecodes;
- (BOOL)validateCMTime:(CDStruct_1b6d18a9)arg1;
- (void)cacheTimecodeDescriptionForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (double)timeIntervalForFrameNumber:(long long)arg1;
- (long long)calculateFrameNumberAtTimeInterval:(double)arg1;
- (struct CVSMPTETime)timecodeForOffset:(long long)arg1 from:(long long)arg2 timecode:(id)arg3;
- (struct CVSMPTETime)timecodeForFrameNumber64UsingCachedDescription:(long long)arg1;
- (id)timecodeForFrameNumber32UsingFormatDescription:(struct opaqueCMFormatDescription *)arg1 timecodeStartFrame:(long long)arg2;
- (id)calculateTimecodeAtFrame:(long long)arg1;
- (long long)calculateFrameNumberAtCMTime:(CDStruct_1b6d18a9)arg1;
- (id)maxFrameCountString;
- (id)maxTimecodeString;
- (void)calculateMaxFrameAndTimecode;
- (id)initWithTimecodeTrack:(id)arg1 videoTrack:(id)arg2;

@end

