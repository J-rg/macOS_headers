//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransitDirectionsListArtworkItem.h"

#import "TransitDirectionsListExpandableItem-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItemWalking : TransitDirectionsListArtworkItem <TransitDirectionsListExpandableItem>
{
    BOOL _expanded;
    NSArray *_walkingSubItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *walkingSubItems; // @synthesize walkingSubItems=_walkingSubItems;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
- (BOOL)_shouldHideWalkingSubStep:(id)arg1;
- (id)_generateWalkingSubSteps;
- (id)_transitWalkingLegInstruction;
- (id)initWithWalkingLeg:(id)arg1;
- (unsigned long long)numberOfSubItemsWithForceExpand:(BOOL)arg1;
- (id)subItemsWithForceExpand:(BOOL)arg1;
- (void)_rebuildSubItems;
@property(readonly, nonatomic) BOOL allowCollapsing;
@property(readonly, nonatomic) BOOL shouldDisplayExpandButton;
@property(readonly, nonatomic) BOOL shouldEnableExpandedButton;
- (id)expandingButtonTitleForExpandedState:(BOOL)arg1;
@property(copy, nonatomic) NSArray *expandedItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

