//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNSaveRequest.h>

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest : CNSaveRequest
{
    NSMutableSet *_mutableConfirmedSuggestions;
    NSMutableSet *_mutableRejectedSuggestions;
}

@property(retain, nonatomic) NSMutableSet *mutableRejectedSuggestions; // @synthesize mutableRejectedSuggestions=_mutableRejectedSuggestions;
@property(retain, nonatomic) NSMutableSet *mutableConfirmedSuggestions; // @synthesize mutableConfirmedSuggestions=_mutableConfirmedSuggestions;
- (void).cxx_destruct;
@property(readonly, copy) NSSet *rejectedSuggestions;
@property(readonly, copy) NSSet *confirmedSuggestions;
- (void)rejectSuggestion:(id)arg1;
- (void)confirmSuggestion:(id)arg1;
- (id)storeIdentifier;

@end

