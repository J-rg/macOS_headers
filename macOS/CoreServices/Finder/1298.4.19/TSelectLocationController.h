//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TChooseFolderController.h"

@class TGeneralPaneController;

@interface TSelectLocationController : TChooseFolderController
{
    struct TNSWeakPtr<TGeneralPaneController, void> _weakParent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldEnableNode:(const struct TFENode *)arg1;
- (int)defaultOptions;
- (_Bool)validateNode:(const struct TFENode *)arg1;
@property(nonatomic) __weak TGeneralPaneController *parent;

@end

