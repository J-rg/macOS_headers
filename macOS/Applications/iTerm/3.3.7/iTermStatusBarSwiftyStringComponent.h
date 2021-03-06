//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermStatusBarTextComponent.h"

@class NSString, iTermSwiftyString;

@interface iTermStatusBarSwiftyStringComponent : iTermStatusBarTextComponent
{
    iTermSwiftyString *_swiftyString;
    NSString *_errorReason;
    NSString *_value;
}

+ (id)statusBarComponentDefaultKnobs;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)statusBarComponentKnobValues;
- (void)statusBarComponentSetKnobValues:(id)arg1;
- (id)didEvaluateExpression:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)updateWithKnobValues:(id)arg1;
- (id)stringVariants;
- (void)onClick:(id)arg1;
- (id)newTextField;
- (void)setStringValue:(id)arg1;
- (id)statusBarComponentVariableDependencies;
- (BOOL)statusBarComponentCanStretch;
- (id)statusBarComponentExemplarWithBackgroundColor:(id)arg1 textColor:(id)arg2;
- (id)statusBarComponentKnobs;
- (id)statusBarComponentDetailedDescription;
- (id)statusBarComponentShortDescription;
- (id)initWithConfiguration:(id)arg1 scope:(id)arg2;

@end

