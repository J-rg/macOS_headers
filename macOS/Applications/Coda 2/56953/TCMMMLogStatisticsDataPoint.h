//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCMMMLogStatisticsDataPoint : NSObject
{
    unsigned long long operationCount;
    unsigned long long deletedCharacters;
    unsigned long long insertedCharacters;
    unsigned long long selectedCharacters;
}

- (unsigned long long)selectedCharacters;
- (unsigned long long)insertedCharacters;
- (unsigned long long)deletedCharacters;
- (unsigned long long)operationCount;
- (id)initWithDataObject:(id)arg1;

@end

