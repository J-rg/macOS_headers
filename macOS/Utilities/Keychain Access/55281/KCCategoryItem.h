//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KCCategory, NSString;

@interface KCCategoryItem : NSObject
{
    NSString *_name;
    NSString *_iconName;
    KCCategory *_parent;
    unsigned int _itemClass;
}

- (void)setItemClass:(unsigned int)arg1;
- (unsigned int)itemClass;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setName:(id)arg1;
- (id)name;
- (void)setIconName:(id)arg1;
- (id)iconName;
- (void)dealloc;

@end

