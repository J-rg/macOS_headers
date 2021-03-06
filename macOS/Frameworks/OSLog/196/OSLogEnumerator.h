//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSObject<OS_dispatch_semaphore>, OSLogEntry, OSLogEventStream;

@interface OSLogEnumerator : NSEnumerator
{
    OSLogEventStream *_stream;
    OSLogEntry *_next;
    _Bool _done;
    NSObject<OS_dispatch_semaphore> *_pushDone;
    NSObject<OS_dispatch_semaphore> *_handlerDone;
}

- (void).cxx_destruct;
- (void)_handleInvalidation;
- (void)_handleEventProxy:(id)arg1;
- (id)nextObject;
- (void)dealloc;
- (id)initWithEventStream:(id)arg1 options:(unsigned long long)arg2 position:(id)arg3;

@end

