//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/NSCopying-Protocol.h>

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying>
{
    MRCAMLBezierData *spline;
    double value0;
    double value1;
    double time;
}

@property(retain, nonatomic) MRCAMLBezierData *spline; // @synthesize spline;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

