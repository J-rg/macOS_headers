//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BasicCommandProcessor, ConnectedView, InputMapper;

@interface CommandProcessor : NSObject
{
    InputMapper *_inputMapper;
    ConnectedView *_connectedView;
    BasicCommandProcessor *_commandProcessor;
}

@property(retain) BasicCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(retain) ConnectedView *connectedView; // @synthesize connectedView=_connectedView;
@property(retain) InputMapper *inputMapper; // @synthesize inputMapper=_inputMapper;
- (void).cxx_destruct;
- (id)gpsCoordinates:(id)arg1;
- (id)toggleScreen:(id)arg1;
- (id)closeScreen:(id)arg1;
- (id)handleSoftControlBarEventWithParams:(id)arg1;
- (id)setTopActivityWithParams:(id)arg1 formParams:(id)arg2;
- (id)setOrientationWithParams:(id)arg1;
- (id)defaultHandler:(id)arg1 urlParams:(id)arg2 method:(id)arg3;
- (BOOL)listen;
- (void)initHandlers;
- (id)init;

@end

