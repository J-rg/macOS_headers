//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HTTPDynamicFileResponse.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LPHTTPDynamicFileResponseWithHeaders : HTTPDynamicFileResponse
{
    long long _statusCode;
    NSDictionary *_responseHeaders;
}

@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (long long)status;
- (id)httpHeaders;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2 separator:(id)arg3 replacementDictionary:(id)arg4;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;
- (id)init;

@end

