//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSPointerArray;

@interface PVThumbnailCache : NSObject
{
    NSMapTable *_elementToThumbnailTable;
    NSPointerArray *_lastUsedElements;
    unsigned long long _size;
}

@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSPointerArray *lastUsedElements; // @synthesize lastUsedElements=_lastUsedElements;
@property(retain, nonatomic) NSMapTable *elementToThumbnailTable; // @synthesize elementToThumbnailTable=_elementToThumbnailTable;
- (void).cxx_destruct;
- (void)_removeObjectPointerFromLastUsedElementSet:(id)arg1;
- (void)removeCachedImageForElement:(id)arg1;
- (void)addImage:(id)arg1 toCacheForElement:(id)arg2;
- (id)imageForElement:(id)arg1;
- (id)initWithSize:(unsigned long long)arg1;

@end

