//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOExperimentConfigurationObserver.h"
#import "GEOResourceManifestTileGroupObserver.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    function_288b8140 _willChangeActiveTileGroup;
    function_3dbef162 _didChangeActiveTileGroup;
    function_d50775c7 _experimentConfigurationDidChange;
}

@property function_d50775c7 experimentConfigurationDidChange; // @synthesize experimentConfigurationDidChange=_experimentConfigurationDidChange;
@property function_3dbef162 didChangeActiveTileGroup; // @synthesize didChangeActiveTileGroup=_didChangeActiveTileGroup;
@property function_288b8140 willChangeActiveTileGroup; // @synthesize willChangeActiveTileGroup=_willChangeActiveTileGroup;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

