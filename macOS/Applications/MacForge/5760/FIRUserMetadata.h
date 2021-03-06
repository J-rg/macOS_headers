//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate;

@interface FIRUserMetadata : NSObject <NSSecureCoding>
{
    NSDate *_lastSignInDate;
    NSDate *_creationDate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSDate *lastSignInDate; // @synthesize lastSignInDate=_lastSignInDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreationDate:(id)arg1 lastSignInDate:(id)arg2;

@end

