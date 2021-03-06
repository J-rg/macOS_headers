//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FTServiceStatus : NSObject
{
    unsigned long long _supportedServicesFlags;
    int _supportedServicesToken;
    BOOL _blockPost;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL blockPost; // @synthesize blockPost=_blockPost;
@property unsigned long long supportedServicesFlags; // @synthesize supportedServicesFlags=_supportedServicesFlags;
@property(nonatomic) int supportedServicesToken; // @synthesize supportedServicesToken=_supportedServicesToken;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_reload;
@property(readonly, nonatomic) BOOL faceTimeMultiwaySupported;
@property(readonly, nonatomic) BOOL faceTimeAudioSupported;
@property(readonly, nonatomic) BOOL iMessageSupported;
- (void)dealloc;
- (id)initPrivate;

@end

