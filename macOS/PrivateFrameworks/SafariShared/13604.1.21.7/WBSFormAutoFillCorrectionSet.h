//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSFormAutoFillCorrectionSet : NSObject
{
    NSString *_domain;
    NSDictionary *_fingerprintsToClassifications;
}

@property(readonly, nonatomic) NSDictionary *fingerprintsToClassifications; // @synthesize fingerprintsToClassifications=_fingerprintsToClassifications;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2;

@end

