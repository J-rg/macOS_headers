//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface SiriUIStarsView : NSView
{
    double _rating;
    double _maxRating;
    NSImage *_starsImage;
    BOOL _snapsToHalfStar;
    long long _style;
    long long _maxNumberOfStars;
}

+ (id)_starsImageCache;
@property(nonatomic) long long maxNumberOfStars; // @synthesize maxNumberOfStars=_maxNumberOfStars;
@property(nonatomic) BOOL snapsToHalfStar; // @synthesize snapsToHalfStar=_snapsToHalfStar;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)_xForFractionalPartOfStars:(double)arg1 inWidth:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setRating:(double)arg1 maxRating:(double)arg2;
- (id)_cacheKeyForStyle:(long long)arg1 numberOfStars:(long long)arg2;
- (void)_updateStarsForStyleAndTotalNumber;
- (struct CGSize)_sizeForStar:(id)arg1 spacing:(double)arg2;
- (double)_starSpacingForStyle:(long long)arg1;
- (id)_starMaskForStyle:(long long)arg1;
- (id)_starMaskLarge;
- (id)_starMaskMedium;
- (id)_starMaskSmall;
- (id)initWithFrame:(struct CGRect)arg1;

@end

