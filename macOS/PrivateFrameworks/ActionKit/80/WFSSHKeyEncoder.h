//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData;

@interface WFSSHKeyEncoder : NSObject
{
    NSMutableData *_data;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void)encodeDataWithPreceedingLength:(id)arg1;
- (void)encodeData:(id)arg1;
- (void)encodeStringWithPreceedingLength:(id)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeInteger:(unsigned int)arg1;
- (void)encodeChar:(BOOL)arg1;
@property(readonly, nonatomic) NSData *encodedData;
@property(readonly, nonatomic) unsigned long long encodedLength;
- (id)init;

@end

