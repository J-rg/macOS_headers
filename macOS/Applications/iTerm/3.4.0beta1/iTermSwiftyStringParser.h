//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface iTermSwiftyStringParser : NSObject
{
    int _state;
    BOOL _stopAtUnescapedQuote;
    BOOL _tolerateTruncation;
    BOOL _wasTruncated;
    BOOL _wasTruncatedInLiteral;
    NSString *_string;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL wasTruncatedInLiteral; // @synthesize wasTruncatedInLiteral=_wasTruncatedInLiteral;
@property(readonly, nonatomic) BOOL wasTruncated; // @synthesize wasTruncated=_wasTruncated;
@property(nonatomic) BOOL tolerateTruncation; // @synthesize tolerateTruncation=_tolerateTruncation;
@property(nonatomic) BOOL stopAtUnescapedQuote; // @synthesize stopAtUnescapedQuote=_stopAtUnescapedQuote;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (long long)enumerateSwiftySubstringsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithString:(id)arg1;

@end

