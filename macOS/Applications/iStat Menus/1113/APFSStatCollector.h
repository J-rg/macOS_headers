//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StatCollector.h"

@interface APFSStatCollector : StatCollector
{
}

+ (long long)storageType;
+ (void)cleanup;
+ (id)sharedAPFSCollector;
- (id)itemForParition:(id)arg1;
- (id)itemWithKey:(id)arg1;
- (void)fetchDisks;
- (void)diskChange:(id)arg1;
- (id)description;
- (Class)itemClass;
- (id)init;
- (void)cleanup;
- (void)dealloc;

@end

