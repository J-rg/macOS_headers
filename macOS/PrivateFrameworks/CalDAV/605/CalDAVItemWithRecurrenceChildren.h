//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem
{
    NSMutableSet *_recurrences;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *recurrences; // @synthesize recurrences=_recurrences;
- (id)copyParseRules;
- (void)addRecurrence:(id)arg1;

@end

