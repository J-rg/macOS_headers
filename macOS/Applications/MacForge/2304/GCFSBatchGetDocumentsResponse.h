//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCFSDocument, GPBTimestamp, NSData, NSString;

@interface GCFSBatchGetDocumentsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSDocument *found; // @dynamic found;
@property(nonatomic) BOOL hasReadTime; // @dynamic hasReadTime;
@property(copy, nonatomic) NSString *missing; // @dynamic missing;
@property(retain, nonatomic) GPBTimestamp *readTime; // @dynamic readTime;
@property(readonly, nonatomic) int resultOneOfCase; // @dynamic resultOneOfCase;
@property(copy, nonatomic) NSData *transaction; // @dynamic transaction;

@end

