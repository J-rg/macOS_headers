//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PODContentChangeSet;

@protocol PODMigratorProtocol <NSObject>
- (void)markFinishedMigratingChangeSet:(PODContentChangeSet *)arg1 completion:(void (^)(NSError *))arg2;
- (void)requestAllMigratableContent:(NSString *)arg1 response:(void (^)(PODContentChangeSet *, NSError *))arg2;
@end

