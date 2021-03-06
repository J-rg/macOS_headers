//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSStackView, NSVisualEffectView;

@interface TMAVibrantContainerView : NSView
{
    NSVisualEffectView *_visualEffectView;
    NSStackView *_stackView;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void)addContainingSubview:(id)arg1;
- (void)p_updateAppearance;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)setupInstancewithOrientation:(long long)arg1;

@end

