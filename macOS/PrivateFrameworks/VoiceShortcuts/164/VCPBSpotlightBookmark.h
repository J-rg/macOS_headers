//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface VCPBSpotlightBookmark : PBCodable <NSCopying>
{
    unsigned long long _identifier;
    NSMutableArray *_pairs;
}

+ (Class)pairsType;
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)pairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairsCount;
- (void)addPairs:(id)arg1;
- (void)clearPairs;

@end

