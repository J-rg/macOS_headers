//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreBrightness/CBContainer.h>

#import "CBContainerProtocol.h"
#import "CBHIDServiceProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CBDisplayContainerDFR : CBContainer <CBContainerProtocol, CBHIDServiceProtocol>
{
    struct __IOHIDServiceClient *_dfrService;
    _Bool _isRunning;
}

- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (void)stop;
- (BOOL)start;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDFRService:(struct __IOHIDServiceClient *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

