//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Keyboard : NSObject
{
}

+ (BOOL)isFullKeyboardAccessEnabled;
+ (BOOL)isModifierDown:(unsigned long long)arg1 testFlags:(unsigned long long)arg2;
+ (unsigned long long)currentModifierFlags;
+ (BOOL)isKeyDown:(unsigned char)arg1;

@end

