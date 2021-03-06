//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGNamedImageSource-Protocol.h>
#import <PhotosUICore/PXGStringSource-Protocol.h>

@class NSArray, NSDictionary, NSString, PXAssetCollectionReference, PXCuratedLibraryChapterHeaderLayoutSpec;

@interface PXCuratedLibraryChapterHeaderLayout : PXGLayout <PXGStringSource, PXGNamedImageSource>
{
    CDStruct_5f1286c4 _updateFlags;
    unsigned short _textVersion;
    struct CGRect _titleFramingRect;
    struct CGRect _subtitleFramingRect;
    struct CGSize _chevronSize;
    NSArray *_itemIdentifierBySpriteIndex;
    PXAssetCollectionReference *_assetCollectionReference;
    PXCuratedLibraryChapterHeaderLayoutSpec *_spec;
    NSString *_title;
    NSString *_subtitle;
    NSDictionary *_titleAttributes;
    NSDictionary *_subtitleAttributes;
    struct PXSimpleIndexPath _sectionIndexPath;
    struct NSEdgeInsets _padding;
}

@property(copy, nonatomic) NSDictionary *subtitleAttributes; // @synthesize subtitleAttributes=_subtitleAttributes;
@property(copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property(retain, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
- (void).cxx_destruct;
- (id)imageNameAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (void)screenScaleDidChange;
- (void)referenceSizeDidChange;
- (void)visibleRectDidChange;
- (void)contentSizeDidChange;
- (void)_updateTitleAndSubtitle;
- (void)_updateLastBaseline;
- (void)_updateSprites;
- (void)update;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

