//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_init;
- (id)init;

@end

