//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ToneKit/TKPickerItem.h>

@class NSString;

@interface TKPickerSectionItem : TKPickerItem
{
    NSString *_text;
    NSString *_footerText;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setFooterText:) NSString *footerText; // @synthesize footerText=_footerText;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end

