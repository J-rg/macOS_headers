//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BSControls : NSObject
{
    NSMutableArray *controls;
}

+ (id)sharedControls;
@property(retain, nonatomic) NSMutableArray *controls; // @synthesize controls;
- (void).cxx_destruct;
- (id)getControlWithIdentifier:(id)arg1;
- (void)addControl:(id)arg1;
- (void)reloadControls;
- (id)init;

@end

