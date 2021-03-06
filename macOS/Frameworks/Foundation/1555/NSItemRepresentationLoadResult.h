//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSData, NSError, NSSecurityScopedURLWrapper, NSString;

@interface NSItemRepresentationLoadResult : NSObject <NSCopying>
{
    BOOL _wasOpenedInPlace;
    NSData *_data;
    NSSecurityScopedURLWrapper *_urlWrapper;
    CDUnknownBlockType _cleanupHandler;
    NSError *_error;
    NSString *_archivedObjectClassName;
}

+ (id)resultWithError:(id)arg1;
+ (id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
@property BOOL wasOpenedInPlace; // @synthesize wasOpenedInPlace=_wasOpenedInPlace;
@property(copy) NSString *archivedObjectClassName; // @synthesize archivedObjectClassName=_archivedObjectClassName;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) CDUnknownBlockType cleanupHandler; // @synthesize cleanupHandler=_cleanupHandler;
@property(retain) NSSecurityScopedURLWrapper *urlWrapper; // @synthesize urlWrapper=_urlWrapper;
@property(copy) NSData *data; // @synthesize data=_data;
- (id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

