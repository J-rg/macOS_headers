//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, REMFetchResultToken;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding>
{
    REMFetchResultToken *_fetchResultTokenToDiffAgainst;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMFetchResultToken *fetchResultTokenToDiffAgainst; // @synthesize fetchResultTokenToDiffAgainst=_fetchResultTokenToDiffAgainst;
@property(readonly, nonatomic) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFetchResultTokenToDiffAgainst:(id)arg1;

@end

