//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SAUIAppPunchOut, SAUIButton;

@interface SAGuidanceGuideSnippet : SAUISnippet
{
}

+ (id)guideSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)guideSnippet;
@property(copy, nonatomic) NSArray *intentEnabledAppSnippets;
@property(copy, nonatomic) NSString *headerText;
@property(copy, nonatomic) NSArray *domainSnippets;
@property(retain, nonatomic) SAUIAppPunchOut *appStorePunchOut;
@property(retain, nonatomic) SAUIButton *appPunchOutButton;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

