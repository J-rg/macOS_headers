//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSNumber, NSString, VT100ScreenMark, iTermCommandHistoryEntryMO;

@interface iTermCommandHistoryCommandUseMO : NSManagedObject
{
}

+ (id)commandHistoryCommandUseFromDeprecatedSerialization:(id)arg1 inContext:(id)arg2;
+ (id)entityName;
+ (id)commandHistoryCommandUseInContext:(id)arg1;
@property(retain, nonatomic) VT100ScreenMark *mark;

// Remaining properties
@property(retain, nonatomic) NSNumber *code; // @dynamic code;
@property(retain, nonatomic) NSString *command; // @dynamic command;
@property(retain, nonatomic) NSString *directory; // @dynamic directory;
@property(retain, nonatomic) iTermCommandHistoryEntryMO *entry; // @dynamic entry;
@property(retain, nonatomic) NSString *markGuid; // @dynamic markGuid;
@property(retain, nonatomic) NSNumber *time; // @dynamic time;

@end

