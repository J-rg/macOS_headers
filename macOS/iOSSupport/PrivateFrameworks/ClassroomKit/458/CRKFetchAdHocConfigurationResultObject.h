//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject
{
    NSDictionary *_configuration;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

