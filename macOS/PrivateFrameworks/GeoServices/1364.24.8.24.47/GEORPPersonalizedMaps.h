//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable <NSCopying>
{
    GEORPAddress *_address;
    int _addressType;
    int _placeType;
    struct {
        unsigned int addressType:1;
        unsigned int placeType:1;
    } _has;
}

@property(retain, nonatomic) GEORPAddress *address; // @synthesize address=_address;
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
@property(readonly, nonatomic) BOOL hasAddress;
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceType;
@property(nonatomic) int placeType; // @synthesize placeType=_placeType;
- (int)StringAsAddressType:(id)arg1;
- (id)addressTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAddressType;
@property(nonatomic) int addressType; // @synthesize addressType=_addressType;

@end

