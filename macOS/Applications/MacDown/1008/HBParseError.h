//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface HBParseError : NSError
{
}

+ (id)parseErrorWithLineNumber:(long long)arg1 positionInBuffer:(long long)arg2 contextInBuffer:(id)arg3 lowLevelParserDescription:(id)arg4;
- (id)lowLevelParserDescription;
- (id)contextInBuffer;
- (long long)positionInBuffer;
- (long long)lineNumber;

@end

