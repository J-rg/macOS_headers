//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TITypingSession, TITypingSessionAligned;

@protocol TITypingSessionAnalyzing <NSObject>
@property(retain, nonatomic) TITypingSessionAligned *lastAlignmentAnalyzed;
@property(retain, nonatomic) TITypingSession *lastSessionAnalyzed;
@property(retain, nonatomic) id <TIUserModeling> userModel;
- (BOOL)analyze:(TITypingSession *)arg1 alignedSession:(TITypingSessionAligned *)arg2;
@end

