//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HUCircleView : UIView
{
    BOOL _backgroundColorFollowsTintColor;
    BOOL _borderColorFollowsTintColor;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL borderColorFollowsTintColor; // @synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor;
@property(nonatomic) BOOL backgroundColorFollowsTintColor; // @synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

