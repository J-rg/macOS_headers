//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TMAScriptCommandExecutionResolving-Protocol.h"
#import "TMAScriptingContainerInfo-Protocol.h"
#import "TPPageContainerInfo-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSKDocumentObject-Protocol.h"
#import "TSKModel-Protocol.h"
#import "TSWPSection-Protocol.h"
#import "TSWPSetObjectPropertiesCommandTarget-Protocol.h"

@class NSArray, NSString, TMAScriptDrawableContainerInfoHelper, TPGuideStorageMap, TPPageMaster, TPPageTemplate, TSDFill, TSWPStorage;

@interface TPSection : TSPObject <GSSPAutoEncodable, TMAScriptCommandExecutionResolving, TSDKeyValueProxyVending, TMAScriptingContainerInfo, TPPageContainerInfo, TSKDocumentObject, TSKModel, TSWPSection, TSWPSetObjectPropertiesCommandTarget>
{
    TPPageMaster *_pageMasters[3];
    TPGuideStorageMap *_userGuideStorageMap;
    TMAScriptDrawableContainerInfoHelper *_helper;
    TSWPStorage *_parentStorage;
    NSString *_name;
    BOOL _inheritPreviousHeaderFooter;
    BOOL _pageMasterFirstPageDifferent;
    BOOL _pageMasterFirstPageHidesHeaderFooter;
    BOOL _pageMasterEvenOddPagesDifferent;
    unsigned int _sectionStartKind;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
    TSDFill *_backgroundFill;
}

+ (BOOL)needsObjectUUID;
@property(retain, nonatomic) TSDFill *backgroundFill; // @synthesize backgroundFill=_backgroundFill;
- (void).cxx_destruct;
- (id)allDrawables;
- (void)p_addAllDrawablesFromInfo:(id)arg1 toMutableArray:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)pageMasterOwningModel:(id)arg1;
- (id)pageMasterForType:(long long)arg1;
@property(readonly, nonatomic) NSArray *pageMasters;
- (void)p_makeUserGuideStorage;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(const struct SectionArchive *)arg1;
- (void)p_unarchiveAndUpgrade:(id)arg1 archive:(const struct SectionArchive *)arg2;
- (void)i_clearPropertiesToDefaults;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)setObjectProperty:(id)arg1;
- (id)objectPropertyForPropertyWithName:(id)arg1;
- (BOOL)validateObjectProperties:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(nonatomic) __weak TSWPStorage *parentStorage;
- (id)commandForSettingSectionBackgroundFill:(id)arg1;
- (id)commandForSettingSectionPageNumberStart:(unsigned int)arg1;
- (id)commandForSettingSectionPageNumberKind:(unsigned int)arg1;
- (id)commandForSettingSectionStartKind:(unsigned int)arg1;
- (id)commandForSettingPageMasterEvenOddPagesDifferent:(BOOL)arg1;
- (id)commandForSettingPageMasterFirstPageHidesHeaderFooter:(BOOL)arg1;
- (id)commandForSettingInheritPreviousHeaderFooter:(BOOL)arg1;
- (void)setPageMasterForFirstPage:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (BOOL)isHeaderFooterEmpty:(long long)arg1;
- (BOOL)isHeaderFooterVisible:(long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectUUIDPath;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 section:(id)arg2;
- (void)setUserGuideStorageMap:(id)arg1;
@property(readonly, nonatomic) TPGuideStorageMap *userGuideStorageMap;
@property(nonatomic) unsigned int sectionPageNumberStart;
@property(nonatomic) unsigned int sectionPageNumberKind;
@property(nonatomic) unsigned int sectionStartKind;
@property(nonatomic) BOOL pageMasterEvenOddPagesDifferent;
@property(nonatomic) BOOL pageMasterFirstPageHidesHeaderFooter;
@property(nonatomic) BOOL pageMasterFirstPageDifferent;
@property(nonatomic) BOOL inheritPreviousHeaderFooter;
@property(copy, nonatomic) NSString *name;
- (void)populateGSSPSection:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (BOOL)canExecuteCommand:(id)arg1;
- (BOOL)isViewOnly;
- (BOOL)isReadOnly;
- (BOOL)isLocked;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (struct _NSRange)p_sectionTextRange;
- (id)objectSpecifier;
- (id)interactiveCanvasControllerForInfoProxy:(id)arg1;
- (id)objectSpecifierForInfoProxy:(id)arg1;
- (struct _NSRange)pageRange;
- (void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2;
- (id)scriptAllTextItems;
- (id)scriptAllTables;
- (id)scriptAllShapes;
- (id)scriptAllMovies;
- (id)scriptAllLines;
- (id)scriptAllImages;
- (id)scriptAllGroups;
- (id)scriptAllCharts;
- (id)scriptAllAudioClips;
- (id)scriptAllItems;
- (id)scriptAllPages;
@property(readonly, nonatomic) NSArray *childInfos;
- (void)setScriptBodyText:(id)arg1;
- (id)scriptBodyText;
@property(readonly, nonatomic) TMAScriptDrawableContainerInfoHelper *helper;
@property(readonly, nonatomic) NSArray *pageInfosForPropagation;
@property(readonly, nonatomic) TPPageTemplate *pageTemplate;
- (id)initWithContext:(id)arg1 gqdSection:(id)arg2 state:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

