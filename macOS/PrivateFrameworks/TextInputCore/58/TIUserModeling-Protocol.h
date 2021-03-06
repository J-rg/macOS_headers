//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TITypingSessionAggregatedEventObserver.h"

@class NSArray, NSNumber, NSString, TICAnalyticsMetricsKey;

@protocol TIUserModeling <TITypingSessionAggregatedEventObserver>
@property(readonly, nonatomic) NSArray *keys;
- (void)addNumberToTransientCounter:(NSNumber *)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TICAnalyticsMetricsKey *)arg4;
- (void)addToTransientCounter:(int)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TICAnalyticsMetricsKey *)arg4;
- (void)addToDurableCounter:(int)arg1 forKey:(NSString *)arg2;
- (id <TIUserModelValuesProtocol>)valuesForKey:(TICAnalyticsMetricsKey *)arg1;
@end

