//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class NSSet;

@interface RBSCompoundPredicate : RBSProcessPredicateImpl
{
    NSSet *_predicates;
}

+ (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (BOOL)matchesProcess:(id)arg1;
- (id)initWithPredicates:(id)arg1;

@end

