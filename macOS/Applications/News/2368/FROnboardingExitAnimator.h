//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FROnboardingAnimator-Protocol.h"

@class FROnboardingSubscribableItem, NSString, TUAnimationFloatFunction;
@protocol FROnboardingExitAnimatorDelegate;

@interface FROnboardingExitAnimator : NSObject <FROnboardingAnimator>
{
    BOOL _isRunning;
    FROnboardingSubscribableItem *_item;
    id <FROnboardingExitAnimatorDelegate> _delegate;
    double _delay;
    double _duration;
    double _currentAlpha;
    double _localTimeElapsed;
    double _startingTime;
    TUAnimationFloatFunction *_floatCurveFunction;
    struct CGPoint _anchorPoint;
    struct CGAffineTransform _currentTransform;
}

@property(retain, nonatomic) TUAnimationFloatFunction *floatCurveFunction; // @synthesize floatCurveFunction=_floatCurveFunction;
@property(nonatomic) struct CGAffineTransform currentTransform; // @synthesize currentTransform=_currentTransform;
@property(nonatomic) double startingTime; // @synthesize startingTime=_startingTime;
@property(nonatomic) double localTimeElapsed; // @synthesize localTimeElapsed=_localTimeElapsed;
@property(nonatomic) double currentAlpha; // @synthesize currentAlpha=_currentAlpha;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) __weak id <FROnboardingExitAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) FROnboardingSubscribableItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateTickWithAnimationEngine:(id)arg1 sessionTimeAtLastTick:(double)arg2 currentSessionTime:(double)arg3;
- (void)updateCellWithCurrentStateOfItem:(id)arg1;
- (void)addedToAnimationEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

