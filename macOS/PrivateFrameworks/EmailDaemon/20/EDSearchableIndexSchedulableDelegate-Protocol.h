//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol EDSearchableIndexSchedulableDelegate <NSObject>
- (BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didGenerateImportantPowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didGeneratePowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)indexingDidSuspendForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didIndexItemCount:(long long)arg2;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didIndexForTime:(double)arg2;

@optional
- (void)didCancelDataSourceUpdateRequestForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
@end

