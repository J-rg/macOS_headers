//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSNumber, NSString;

@protocol VCRenderDelegateProtocol
- (int)resizeRemoteVideoForUserID:(NSString *)arg1 outBuffer:(struct __CVBuffer *)arg2;
- (int)processCVPixelBuffer:(struct __CVBuffer *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 withHint:(NSNumber *)arg3;
@end

