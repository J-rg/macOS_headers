//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MPNowPlayingInfoLyricsItemToken : NSObject
{
    void *_mediaRemoteLyricsItemToken;
}

@property(readonly, nonatomic) void *mediaRemoteLyricsItemToken; // @synthesize mediaRemoteLyricsItemToken=_mediaRemoteLyricsItemToken;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithMediaRemoteLyricsItemToken:(void *)arg1;
- (id)initWithIdentifier:(id)arg1 userInfo:(id)arg2;

@end

