//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort, NSArray, NSDate, NSString;

@protocol FCFeedPersonalizingArticle <NSObject>
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *publisherCohort;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *globalCohort;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
@property(readonly, nonatomic) unsigned long long articleContentType;
@property(readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
- (void)enumerateTopicCohortsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *))arg1;
@end

