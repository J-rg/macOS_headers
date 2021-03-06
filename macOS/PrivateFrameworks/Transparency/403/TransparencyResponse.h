//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, TransparencyRequest;

@interface TransparencyResponse : NSObject
{
    NSData *_data;
    NSDictionary *_metadata;
    TransparencyRequest *_request;
}

@property(retain) TransparencyRequest *request; // @synthesize request=_request;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)serverHint;
- (id)initWithRequest:(id)arg1 responseData:(id)arg2 metadata:(id)arg3;

@end

