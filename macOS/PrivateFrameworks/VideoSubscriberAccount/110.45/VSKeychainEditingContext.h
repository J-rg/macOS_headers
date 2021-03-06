//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VSKeychainEditingContext : NSObject
{
    NSMutableSet *_items;
}

@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (BOOL)save:(id *)arg1;
@property(readonly, nonatomic) NSSet *registeredItems;
@property(readonly, nonatomic) NSSet *updatedItems;
@property(readonly, nonatomic) NSSet *deletedItems;
@property(readonly, nonatomic) NSSet *insertedItems;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)insertItem:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (void)fulfillFault:(id)arg1;
- (void)_populateErrors:(id)arg1 withResult:(int)arg2 affectingItem:(id)arg3;
- (void)_populateUserInfoDictionary:(id)arg1 withSecErrorCode:(int)arg2;
- (struct __CFDictionary *)_createQueryForItemValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(struct __CFDictionary *)arg3;
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateQuery:(struct __CFDictionary *)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;
- (id)init;

@end

