//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class DDHotKey;

__attribute__((visibility("hidden")))
@interface DDHotKeyTextField : NSTextField
{
    DDHotKey *_hotKey;
}

+ (Class)cellClass;
@property(retain, nonatomic) DDHotKey *hotKey; // @synthesize hotKey=_hotKey;
- (void).cxx_destruct;
- (id)stringValue;
- (void)setStringValue:(id)arg1;

@end

