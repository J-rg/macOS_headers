//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTQueryObserver-Protocol.h"
#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSMutableDictionary, NSString;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate, MTQueryObserver>
{
    NSFetchedResultsController *_frc;
    BOOL _isObserving;
    BOOL _stopCalled;
    NSString *_identifier;
    NSMutableDictionary *_handlers;
}

+ (Class)fetchedResultsControllerClass;
- (void).cxx_destruct;
@property(nonatomic) BOOL stopCalled; // @synthesize stopCalled=_stopCalled;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(nonatomic) BOOL isObserving; // @synthesize isObserving=_isObserving;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeAllResultsChangedHandlers;
- (void)stop;
- (void)removeResultsChangedHandler:(id)arg1;
- (id)addResultsChangedHandler:(id)arg1;
- (id)uuids;
- (void)results:(CDUnknownBlockType)arg1;
- (void)refetch:(CDUnknownBlockType)arg1;
- (void)startObserving;
- (id)sortDescriptors;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (id)managedObjectContext;
- (id)_frc;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;
- (id)initWithFetchRequest:(id)arg1;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 propertiesToFetch:(id)arg6 managedObjectContext:(id)arg7;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 propertiesToFetch:(id)arg6;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 returnObjectsAsFaults:(BOOL)arg5;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 background:(BOOL)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

