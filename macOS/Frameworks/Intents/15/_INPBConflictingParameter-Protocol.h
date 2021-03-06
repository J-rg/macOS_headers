//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBSelectionItem;

@protocol _INPBConflictingParameter <NSObject>
+ (Class)alternateItemsType;
@property(readonly, nonatomic) BOOL hasKeyPath;
@property(copy, nonatomic) NSString *keyPath;
@property(readonly, nonatomic) unsigned long long alternateItemsCount;
@property(copy, nonatomic) NSArray *alternateItems;
- (_INPBSelectionItem *)alternateItemsAtIndex:(unsigned long long)arg1;
- (void)addAlternateItems:(_INPBSelectionItem *)arg1;
- (void)clearAlternateItems;
@end

