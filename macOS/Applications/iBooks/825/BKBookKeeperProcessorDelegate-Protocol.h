//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKBookKeeperProcessor, NSString;

@protocol BKBookKeeperProcessorDelegate <NSObject>
- (BOOL)isAnnotationSyncEnabledWithProcessor:(BKBookKeeperProcessor *)arg1;
- (BOOL)isCollectionSyncEnabledWithProcessor:(BKBookKeeperProcessor *)arg1;
- (BOOL)processor:(BKBookKeeperProcessor *)arg1 dispatchAsyncWithName:(NSString *)arg2 block:(void (^)(void))arg3;
@end

