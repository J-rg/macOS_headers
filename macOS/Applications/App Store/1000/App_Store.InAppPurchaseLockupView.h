//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class _TtC9App_Store11ArtworkView, _TtC9App_Store15OfferButtonView, _TtC9App_Store17InAppPurchaseView, _TtC9App_Store20DynamicTypeTextField;

@interface App_Store.InAppPurchaseLockupView : NSView
{
    // Error parsing type: , name: iconView
    // Error parsing type: , name: theme
    // Error parsing type: , name: titleTextField
    // Error parsing type: , name: subtitleTextField
    // Error parsing type: , name: descriptionTextField
    // Error parsing type: , name: offerButton
}

+ (struct CGSize)estimatedSizeWithIsTiled:(BOOL)arg1 in:(id)arg2 fitting:(struct CGSize)arg3 layoutMargins:(struct NSEdgeInsets)arg4;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) _TtC9App_Store15OfferButtonView *offerButton; // @synthesize offerButton;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *descriptionTextField; // @synthesize descriptionTextField;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *subtitleTextField; // @synthesize subtitleTextField;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *titleTextField; // @synthesize titleTextField;
@property(nonatomic, readonly) _TtC9App_Store11ArtworkView *mainArtworkView;
@property(nonatomic, readonly) _TtC9App_Store17InAppPurchaseView *iconView; // @synthesize iconView;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

