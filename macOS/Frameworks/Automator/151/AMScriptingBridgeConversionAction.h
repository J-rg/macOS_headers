//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/AMBundleAction.h>

@class SBApplication;

@interface AMScriptingBridgeConversionAction : AMBundleAction
{
    SBApplication *_sbApplication;
}

@property(retain, nonatomic) SBApplication *sbApplication; // @synthesize sbApplication=_sbApplication;
- (void).cxx_destruct;
- (id)descriptorForOutputObject:(id)arg1;
- (id)outputObjectArrayForInput:(id)arg1;
- (id)sbObjectForDescriptor:(id)arg1;
- (BOOL)isTypeValidForObject:(id)arg1;
@property(readonly, nonatomic) SBApplication *scriptingBridgeApplication;
- (id)runWithInput:(id)arg1 error:(id *)arg2;

@end

