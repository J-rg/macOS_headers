//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRFeedCollectionViewLayoutSectionDescriptorForYou.h"

@class NSArray;

@interface FRFeedCollectionViewLayoutSectionDescriptorTodayPlugin : FRFeedCollectionViewLayoutSectionDescriptorForYou
{
    NSArray *_sortedLayoutInfoIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sortedLayoutInfoIDs; // @synthesize sortedLayoutInfoIDs=_sortedLayoutInfoIDs;
- (id)allLayoutInfoIDsSortedVisuallyByLayoutAttributes;
- (BOOL)providesSortedLayoutInfoIDOrder;
- (BOOL)sectionHousesTopStories;
- (BOOL)reportsGroupExposuresInternally;
- (BOOL)needsTileInfoAggregation;
- (long long)sectionFooterStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedSettings:(id)arg1 group:(id)arg2 appConfiguration:(id)arg3 feedLayoutSearchConfiguration:(id)arg4 headerStyle:(long long)arg5 buttonController:(id)arg6 feldsparContext:(id)arg7 sortedLayoutInfoIDs:(id)arg8 height:(double)arg9;

@end

