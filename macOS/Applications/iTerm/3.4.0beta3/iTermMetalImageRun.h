//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class iTermImageInfo;

@interface iTermMetalImageRun : NSObject
{
    unsigned short _code;
    int _length;
    CDStruct_ffe6b7c1 _startingCoordInImage;
    CDStruct_ffe6b7c1 _startingCoordOnScreen;
    iTermImageInfo *_imageInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) iTermImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(nonatomic) unsigned short code; // @synthesize code=_code;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) CDStruct_1ef3fb1f startingCoordOnScreen; // @synthesize startingCoordOnScreen=_startingCoordOnScreen;
@property(nonatomic) CDStruct_1ef3fb1f startingCoordInImage; // @synthesize startingCoordInImage=_startingCoordInImage;
- (id)debugDescription;

@end

