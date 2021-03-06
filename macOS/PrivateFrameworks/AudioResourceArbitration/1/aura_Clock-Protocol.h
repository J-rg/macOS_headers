//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioResourceArbitration/NSObject-Protocol.h>
#import <AudioResourceArbitration/aura_Object-Protocol.h>

@protocol aura_SelectorControl;

@protocol aura_Clock <NSObject, aura_Object>
@property(readonly, nonatomic) id <aura_SelectorControl> clockSourceControl;
@property(readonly, nonatomic) unsigned int clockDomain;
@property(readonly, nonatomic) optional_cd8a9b08 modelUID;
@property(readonly, nonatomic) struct StringRef deviceUID;
@property(readonly, nonatomic) unsigned int outputLatency;
@property(readonly, nonatomic) unsigned int inputLatency;
@property(readonly, nonatomic) vector_a2bd2a87 supportedSampleRates;
@property(readonly, nonatomic) double sampleRate;
@property(readonly, nonatomic) unsigned int transportType;
- (struct error_code)setSampleRate:(double)arg1;
@end

