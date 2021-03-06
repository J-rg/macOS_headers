//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ASAccessibilityProxy.h"

@interface ASAccessibilityReparentingProxy : ASAccessibilityProxy
{
    id _accessibilityParent;
}

@property(readonly, nonatomic) __weak id accessibilityParent; // @synthesize accessibilityParent=_accessibilityParent;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityChildren;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithForwardingElement:(id)arg1 accessibilityParent:(id)arg2;

@end

