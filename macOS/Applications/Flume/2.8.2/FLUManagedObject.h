//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface FLUManagedObject : NSManagedObject
{
}

+ (id)fetchEntityWithPredicate:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchEntitiesWithPredicate:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchEntitiesWithPredicate:(id)arg1 sortDescriptors:(id)arg2 managedObjectContext:(id)arg3;
+ (id)fetchEntitiesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 includesSubentities:(BOOL)arg3 sortDescriptors:(id)arg4 managedObjectContext:(id)arg5;
+ (id)fetchOrCreateEntityWithRemoteID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchEntityWithRemoteID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)createEntityRemoteID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)fetchObjectsForEntityName:(id)arg1 withPredicate:(id)arg2;
+ (id)fetchObjectsForEntityName:(id)arg1 withPredicate:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)localToRemoteAttributeMapping;
+ (id)remoteToLocalAttributeMapping;
+ (id)crudPath;
- (BOOL)wasDeletedFromContext;
- (void)delete;
- (id)writeToDictionary;
- (BOOL)loadFromDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(retain, nonatomic) NSString *remoteID; // @dynamic remoteID;

@end

