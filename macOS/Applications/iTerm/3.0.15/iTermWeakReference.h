//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@protocol iTermWeaklyReferenceable;

@interface iTermWeakReference : NSProxy
{
    id <iTermWeaklyReferenceable> _object;
    Class _class;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)objectWillDealloc:(id)arg1;
@property(readonly, nonatomic) id weaklyReferencedObject;
@property(readonly, nonatomic) id internal_unsafeObject;
- (id)description;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

