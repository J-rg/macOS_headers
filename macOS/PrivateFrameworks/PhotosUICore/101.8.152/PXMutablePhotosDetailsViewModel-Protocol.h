//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSSet, PXSectionedSelectionManager;

@protocol PXMutablePhotosDetailsViewModel <NSObject>
@property(retain, nonatomic) NSSet *disabledActionTypes;
@property(nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property(nonatomic) BOOL supportsFaceMode;
@property(retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(nonatomic) BOOL supportsSelection;
@property(nonatomic, getter=isSelecting) BOOL selecting;
@end

