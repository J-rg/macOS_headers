//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSDate *_localDate;
}

+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1;
+ (id)_monthNodeForMomentNode:(id)arg1;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_lastMonthPotentialMemory;

@end

