//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASetContextConfiguration : SABaseClientBoundCommand
{
}

+ (id)setContextConfigurationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setContextConfiguration;
- (BOOL)requiresResponse;
@property(nonatomic) long long contextTimeoutSeconds;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

