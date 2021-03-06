//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, UIApplication, UIHoverEvent, UILookupEvent, UIPhysicalKeyboardEvent, UIPressesEvent, UIScrollEvent, UITouch, UITouchesEvent, UIWheelEvent, _UIGameControllerEvent;

__attribute__((visibility("hidden")))
@interface UIEventEnvironment : NSObject
{
    UIApplication *_application;
    NSMutableArray *_eventQueue;
    UITouchesEvent *_touchesEvent;
    UIPressesEvent *_pressesEvent;
    UIWheelEvent *_wheelEvent;
    _UIGameControllerEvent *_gameControllerEvent;
    UIPhysicalKeyboardEvent *_physicalKeyboardEvent;
    NSMutableDictionary *_dragEventsByContextAndSessionIDPair;
    NSCountedSet *_contextAndSessionIDPairsForAdditionalDragEvents;
    UIScrollEvent *_scrollEvent;
    UIHoverEvent *_hoverEvent;
    UILookupEvent *_lookupEvent;
    BOOL _isSystemApplication;
    UITouch *_currentTouch;
    long long _currentNudgePressType;
    NSMutableDictionary *_pressesMap;
    NSMutableSet *_exclusiveTouchWindows;
    double _commitTimeForTouchEvents;
    NSMutableArray *_afterNewTouchDownActions;
    NSMutableSet *_windowsWithActiveTouchMaps;
    BOOL _hasSeenAnyPencilEvents;
    long long _disableTouchCoalescingCount;
    NSMutableDictionary *_estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray *_estimatedTouchRecordsInIncomingOrder;
}

@property(readonly, nonatomic) NSSet *windowsWithActiveTouchMaps; // @synthesize windowsWithActiveTouchMaps=_windowsWithActiveTouchMaps;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)_lookupEvent;
- (id)_hoverEvent;
- (id)_scrollEvent;
- (void)_dispatchAndRemoveStaleEstimationUpdateRecordsWithEventTime:(double)arg1 upToRecord:(id)arg2;
- (id)_estimatedTouchRecordForContextID:(id)arg1 estimationIndex:(id)arg2;
- (void)_removeEstimatedTouchRecord:(id)arg1;
- (void)_registerEstimatedTouches:(id)arg1 event:(id)arg2 forTouchable:(id)arg3;
- (void)_setPress:(id)arg1 forType:(long long)arg2;
- (id)_pressForType:(long long)arg1;
- (void)_enableTouchCoalescingWithCount:(long long)arg1;
- (void)_disableTouchCoalescingWithCount:(long long)arg1;
- (BOOL)_isTouchCoalescingDisabled;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_dragEvents;
- (void)_removeDragEvent:(id)arg1;
- (void)_unregisterContextIDsForAdditionalDragEvents:(id)arg1 forSession:(unsigned int)arg2;
- (void)_registerContextIDsForAdditionalDragEvents:(id)arg1 forSession:(unsigned int)arg2;
- (id)_dragEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_setTouchMap:(struct __CFDictionary *)arg1 forWindow:(id)arg2;
- (void)_clearTouchesForView:(id)arg1;
- (BOOL)_isTrackingAnyTouch;
- (void)_performAfterNewTouchDownActions;
- (void)_addAfterNewTouchDownAction:(CDUnknownBlockType)arg1;
- (BOOL)eventWantsLowLatency:(id)arg1;
- (id)UIKitEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)initWithApplication:(id)arg1;

@end

