//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@class NSDictionary, NSIndexSet;

@interface PGCurationIndexSetTrait : PGCurationTrait
{
    NSIndexSet *_indexSet;
    NSDictionary *_thresholdByIdentifier;
    unsigned long long _targetNumberOfMatches;
}

@property(nonatomic) unsigned long long targetNumberOfMatches; // @synthesize targetNumberOfMatches=_targetNumberOfMatches;
@property(retain, nonatomic) NSDictionary *thresholdByIdentifier; // @synthesize thresholdByIdentifier=_thresholdByIdentifier;
@property(readonly, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)niceDescription;
- (double)thresholdForSceneIdentifier:(unsigned int)arg1;
- (BOOL)isActive;
- (id)initWithIndexSet:(id)arg1;

@end

