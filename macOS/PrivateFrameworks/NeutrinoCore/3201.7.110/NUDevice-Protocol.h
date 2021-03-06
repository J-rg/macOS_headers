//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NSString;
@protocol NURenderer;

@protocol NUDevice <NSObject>
@property(readonly, nonatomic) long long defaultSampleMode;
@property(readonly, nonatomic) id <NURenderer> lowPriorityRenderer;
@property(readonly, nonatomic) id <NURenderer> renderer;
@property(readonly, nonatomic) long long openGLVirtualScreen;
@property(readonly, nonatomic) BOOL hasOpenGLSupport;
@property(readonly, nonatomic) BOOL hasMetalSupport;
@property(readonly, nonatomic) unsigned long long family;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@end

