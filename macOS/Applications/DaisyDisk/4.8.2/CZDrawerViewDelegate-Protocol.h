//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CZDrawerView;

@protocol CZDrawerViewDelegate
- (BOOL)drawer:(CZDrawerView *)arg1 userWantsToDropDragging:(id <NSDraggingInfo>)arg2;
- (void)drawerUserWillRequestContextMenu:(CZDrawerView *)arg1;
- (void)drawerCollapseAnimationDidEnd:(CZDrawerView *)arg1;
- (void)drawerDidCollapse:(CZDrawerView *)arg1;
- (void)drawerDidExpand:(CZDrawerView *)arg1;
- (void)drawerWillCollapse:(CZDrawerView *)arg1;
- (void)drawerWillExpand:(CZDrawerView *)arg1;
@end

