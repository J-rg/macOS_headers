//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OITSUTemporaryDirectory : NSObject
{
    NSString *_path;
    BOOL _leak;
}

- (void).cxx_destruct;
- (BOOL)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;
- (void)leakTemporaryDirectory;
- (id)URL;
- (id)path;
- (void)dealloc;
- (id)initForWritingToURL:(id)arg1 error:(id *)arg2;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;
- (id)initWithSignature:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;
- (id)init;

@end

