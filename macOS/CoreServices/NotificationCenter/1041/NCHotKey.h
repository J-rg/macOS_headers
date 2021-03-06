//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NCHotKeyDelegate, OS_dispatch_source;

@interface NCHotKey : NSObject
{
    unsigned int _cid;
    NSObject<OS_dispatch_source> *_source;
    void *_lsNoteID;
    double _openTime;
    CDUnknownBlockType _changeBlock;
    id <NCHotKeyDelegate> _delegate;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property __weak id <NCHotKeyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleEvents;
- (void)setFocusChangeRect:(struct CGRect)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)updateEventMaskWithRect:(struct CGRect)arg1;
- (void)_registerBackgroundEventMaskWithIgnoredRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

