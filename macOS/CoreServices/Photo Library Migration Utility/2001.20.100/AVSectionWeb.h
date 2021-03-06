//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AVSection.h"

@class NSMutableArray, NSMutableDictionary;

@interface AVSectionWeb : AVSection
{
    NSMutableArray *_serviceAccountArray;
    NSMutableDictionary *_serviceAccountDictionary;
}

@property(retain) NSMutableDictionary *serviceAccountDictionary; // @synthesize serviceAccountDictionary=_serviceAccountDictionary;
@property(retain) NSMutableArray *serviceAccountArray; // @synthesize serviceAccountArray=_serviceAccountArray;
- (id)childAtIndex:(long long)arg1;
- (unsigned long long)childCount;
- (id)proxyForAlbum:(id)arg1;
- (void)updateMemberChildren;
- (void)_computeAccountProxies;
- (void)_handleFolder:(id)arg1 doc:(id)arg2 list:(id)arg3 dict:(id)arg4;
- (void)_handleAlbum:(id)arg1 doc:(id)arg2 list:(id)arg3 dict:(id)arg4;
- (void)_handleAccount:(id)arg1 doc:(id)arg2 list:(id)arg3 dict:(id)arg4;
- (void)dealloc;
- (id)init;

@end

