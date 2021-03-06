//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Logic)
+ (id)stringWithTxID:(long long)arg1;
+ (id)stringWithCString:(const char *)arg1 encodingOfSong:(const struct CSong *)arg2;
+ (id)stringWithCStringEncodedTrimmedSpaces:(const char *)arg1;
+ (id)stringWithCStringEncoded:(const char *)arg1;
+ (id)stringWithCStringEncoded:(const char *)arg1 length:(unsigned int)arg2;
@property(readonly) NSString *stringWithIncrementedTail;
- (void)getCStringEncoded:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)initWithCStringEncodedTrimmedSpaces:(const char *)arg1;
- (id)initWithCStringEncoded:(const char *)arg1 length:(unsigned int)arg2;
@end

