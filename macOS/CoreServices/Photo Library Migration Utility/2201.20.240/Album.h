//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "AlbumViewItemWithProgressProtocol-Protocol.h"
#import "IPAttributeProtocol-Protocol.h"
#import "KHAlbumInfoProtocol-Protocol.h"

@class HgRidList, IPHProgressIndicator, IPMessageReceiver, IP_KeyMgr, ImageDB, NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableDictionary, NSString, RKAlbum;

@interface Album : NSObject <KHAlbumInfoProtocol, IPAttributeProtocol, AlbumViewItemWithProgressProtocol>
{
    RKAlbum *mRKAlbum;
    ImageDB *mDB;
    unsigned long long mKey;
    IP_KeyMgr *mKeysX;
    struct IPAlbumList *mChildren;
    BOOL mWasShowingChildrenWhenArchived;
    NSString *mKeyPhotoUuid;
    BOOL mPersistent;
    int mOriginalSortOrder;
    BOOL mVisibleIfNoChildren;
    NSString *mCachedNameWithCount;
    unsigned long long mCachedNameWithCountCount;
    double mRowHeight;
    BOOL mIsModified;
    unsigned long long mChangedFields;
    struct IPPhotoList *mChangedPhotos;
    struct IPPhotoList *mSortedPhotos;
    int mIsSorted;
    NSMutableDictionary *mVisiblePhotos;
    unsigned long long mPreviousVisibleCount;
    HgRidList *mVersionIdList;
    HgRidList *mMasterIdList;
    unsigned long long mHiddenCount;
    BOOL mHiddenCountDirty;
    unsigned long long mUnsupportedCount;
    BOOL mUnsupportedCountDirty;
    Album *mRepresentedAlbum;
    BOOL mShowInContext;
    BOOL mHasBeenSanityChecked;
    BOOL mIsRemovable;
    BOOL mAllowsModification;
    BOOL mAllowsReorder;
    BOOL mIgnoresRolls;
    int mEjectAction;
    NSString *mEjectPath;
    int mAltEjectAction;
    NSString *mAltEjectPath;
    unsigned long long mAcceptsInternalDrop;
    unsigned long long mAcceptsExternalDrop;
    BOOL mAcceptsStackDrop;
    unsigned long long mAcceptsAlbumDrop;
    BOOL mDroppedAlbumsBecomeChildren;
    struct IPAlbumList *mVisibleChildrenCache;
    BOOL mShowsChildren;
    BOOL mShowRolls;
    BOOL mShowDates;
    BOOL mShowHidden;
    NSString *mFileName;
    BOOL mIsShared;
    BOOL mIsPendingRemoval;
    unsigned long long mMarkValue;
    unsigned long long mFirstVisibleKey;
    BOOL mWantsProgress;
    BOOL mProgressIsCancelable;
    IPHProgressIndicator *mProgressIndicator;
    double mProgressValue;
    BOOL mProgressStatistics;
    NSDate *mUpgradeStartTime;
    NSDate *mLastUpdateTime;
    double mLastTimeRemaining;
    struct list<double, std::__1::allocator<double>> *mLastNUpgradedPercent;
    struct list<NSDate *, std::__1::allocator<NSDate *>> *mLastNUpgradedTime;
    NSString *mTimeRemainingText;
    IPMessageReceiver *mMessageReceiver;
    BOOL mContentsChanged;
    BOOL mNameSort;
    BOOL mObscured;
    BOOL _multiSelectAlbum;
    struct IPPhotoList *mPhotosX;
    NSString *mDetailViewTitle;
    NSString *mUID;
    unsigned long long mGroup;
    NSString *mSubgroup;
    BOOL mVisible;
    NSDictionary *mYearHeaders;
    NSIndexSet *mClosedRolls;
    NSIndexSet *mClosedStacks;
    unsigned long long mRepresentedAlbumKey;
    NSString *mParentUuid;
    BOOL mIsInTrash;
    BOOL mCreatedByiPhoto;
    BOOL mShowingChildren;
    NSString *mName;
    NSString *mPhotocastURL;
    NSString *mIconImageName;
    NSString *mLargeIconImageName;
    long long mDisplayOrder;
    NSDictionary *mAttributes;
    int mSortOrder;
    BOOL mSortAscending;
    int mSortHonorRolls;
    long long mLastScrollInteger;
    double mLastScrollFloat;
    BOOL mContentsLoaded;
    BOOL mContentsAreLoading;
    BOOL mNeedsHost;
}

+ (struct IPPhotoList *)uniquePhotosFromAlbums:(struct IPAlbumList *)arg1 includeTrashedPhotos:(BOOL)arg2;
+ (struct IPAlbumList *)flattenAlbumList:(struct IPAlbumList *)arg1;
+ (void)initialize;
+ (int)sortHonorRollsForSortKeyPath:(id)arg1 ascending:(BOOL)arg2;
+ (int)sortOrderForSortKeyPath:(id)arg1;
+ (id)sortKeyPathForSortOrder:(int)arg1 honorRolls:(int)arg2;
+ (unsigned long long)messageCategory;
+ (id)parentRKFolderInDatabase:(id)arg1 forUuid:(id)arg2;
+ (int)rkAlbumType;
@property BOOL needsHost; // @synthesize needsHost=mNeedsHost;
@property(nonatomic) BOOL isInTrash; // @synthesize isInTrash=mIsInTrash;
@property BOOL contentsLoaded; // @synthesize contentsLoaded=mContentsLoaded;
@property BOOL multiSelectAlbum; // @synthesize multiSelectAlbum=_multiSelectAlbum;
- (id)albumViewItemName;
- (int)albumViewItemType;
- (void)setRowHeight:(double)arg1;
- (double)rowHeight;
- (id)uniqueID;
- (void)photoViewerLoadHook;
- (id)handleImportScriptCommand:(id)arg1;
- (id)handleDuplicateScriptCommand:(id)arg1;
- (id)handleRemoveScriptCommand:(id)arg1;
- (id)handleSelectScriptCommand:(id)arg1;
- (id)aeParent;
- (id)aeAlbumURL;
- (unsigned int)aeAlbumType;
- (id)aeVisiblePhotos;
- (id)aeChildren;
- (id)aeVisibleImageRecs;
- (id)aeKeywords;
- (id)publishServiceXMLName;
- (id)publishServiceKey;
- (BOOL)isPublishedToService:(id)arg1;
- (struct NSObject *)newPublishPluginForServiceKey:(id)arg1 username:(id)arg2;
- (struct NSObject *)publishPluginForServiceKey:(id)arg1;
- (BOOL)isPublished;
- (BOOL)canPublish;
- (BOOL)showPublishError:(id)arg1;
- (void)_publishServiceSettingsDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_itemInfoForSelection:(struct IPPhotoList *)arg1;
- (id)publishSelection:(struct IPPhotoList *)arg1 toService:(id)arg2 withSettings:(id)arg3 embedded:(id)arg4 forceLogin:(BOOL)arg5;
- (id)publishSelection:(struct IPPhotoList *)arg1 toService:(id)arg2 withTitle:(id)arg3 embedded:(id)arg4 forceLogin:(BOOL)arg5;
- (void)setPublishSettings:(id)arg1 notify:(BOOL)arg2;
- (id)publishSettings;
- (void)_setKeys:(id)arg1;
- (void)_reloadPhotosFromDB:(id)arg1;
- (void)_changedPhotos:(struct PhotosCountMap *)arg1;
- (void)_removeChangedPhoto:(struct IPPhotoInfo *)arg1;
- (void)_addChangedPhoto:(struct IPPhotoInfo *)arg1;
- (struct IPPhotoList *)findPhotosWithHash:(id)arg1;
- (struct IPPhotoList *)findPhotosWithFilenameAndExtension:(id)arg1;
- (struct IPPhotoList *)findPhotosWithFilename:(id)arg1;
- (void)_notifyInfoPanel;
- (void)_notifyChangedFields:(unsigned long long)arg1 affectedPhotos:(struct IPPhotoList *)arg2;
- (void)_notifyChangedFields:(unsigned long long)arg1 affectedPhoto:(struct IPPhotoInfo *)arg2;
- (void)_notifyChangedFieldsEnd:(unsigned long long)arg1;
- (void)_notifyChangedFieldsStart:(unsigned long long)arg1;
- (void)clearModified;
- (void)markAsModified;
- (void)removeAll;
- (void)removeWithArray:(struct IPPhotoList *)arg1;
- (BOOL)_removePhotos:(struct IPPhotoList *)arg1;
- (BOOL)remove:(struct IPPhotoInfo *)arg1;
- (void)matchOrderToPhotoList:(struct IPPhotoList *)arg1;
- (void)movePhotos:(struct IPPhotoList *)arg1 beforePhoto:(struct IPPhotoInfo *)arg2;
- (struct IPPhotoList *)addUniqueWithArray:(struct IPPhotoList *)arg1 returnResults:(BOOL)arg2;
- (void)addWithPLHolderArray:(id)arg1;
- (void)addWithArray:(struct IPPhotoList *)arg1;
- (void)setKeyOfFirstVisibleImage:(unsigned long long)arg1;
- (unsigned long long)keyOfFirstVisibleImage;
- (void)_addPhotos:(struct IPPhotoList *)arg1;
- (void)_addPhoto:(struct IPPhotoInfo *)arg1;
- (BOOL)_willAddPhoto:(struct IPPhotoInfo *)arg1 unique:(BOOL)arg2;
- (void)add:(struct IPPhotoInfo *)arg1;
- (BOOL)addUnique:(struct IPPhotoInfo *)arg1;
- (struct IPPhotoList *)photosFromVersionIdList:(id)arg1;
- (struct IPPhotoList *)photosSharedStreamRelatedWithPhoto:(struct IPPhotoInfo *)arg1;
- (BOOL)hasSharedStreamRelatedPhoto:(struct IPPhotoInfo *)arg1;
- (struct IPPhotoInfo *)photoWithUID:(id)arg1;
- (struct IPPhotoInfo *)photoWithTitle:(id)arg1;
- (BOOL)hasVisibleChildren;
- (BOOL)hasNonLibraryPhotos;
- (BOOL)hasAllPhotos:(struct IPPhotoList *)arg1;
- (BOOL)hasAnyPhotos:(struct IPPhotoList *)arg1;
- (BOOL)hasPhotoWithUID:(id)arg1;
- (BOOL)hasPhoto:(struct IPPhotoInfo *)arg1;
- (struct IPPhotoList *)unsortedVisiblePhotos:(int)arg1;
- (struct IPPhotoList *)unsortedVisiblePhotos;
- (struct IPPhotoList *)visibleMovies:(int)arg1;
- (struct IPPhotoList *)visibleMovies;
- (struct IPPhotoList *)visibleStillPhotos:(int)arg1;
- (struct IPPhotoList *)visibleStillPhotos;
- (struct IPPhotoList *)visiblePhotos:(int)arg1;
- (struct IPPhotoList *)visiblePhotos;
- (vector_5dbb424c *)representedEvents;
- (void)invalidateRidCaches;
- (id)masterIdList;
- (id)versionIdList;
- (void)_setVersionIdList:(id)arg1;
- (struct IPPhotoList *)hiddenOrDeletedPhotosNoCopy;
- (id)visibleMasterIdList:(int)arg1;
- (id)visibleVersionIdList:(int)arg1;
- (struct IPPhotoList *)_visiblePhotosNoCopy:(int)arg1 sorted:(BOOL)arg2;
- (struct IPPhotoList *)_visiblePhotosNoCopy;
- (struct IPPhotoList *)_filteredPhotoList:(struct IPPhotoList *)arg1 hideState:(int)arg2 invert:(BOOL)arg3;
- (struct IPPhotoList *)_filteredPhotoList:(struct IPPhotoList *)arg1 hideState:(int)arg2;
- (BOOL)hasVisibleMovies:(int)arg1;
- (unsigned long long)visibleMovieCount:(int)arg1;
- (unsigned long long)visibleMovieCount;
- (BOOL)hasVisibleStillPhotos:(int)arg1;
- (unsigned long long)visibleStillPhotoCount:(int)arg1;
- (unsigned long long)visibleStillPhotoCount;
- (unsigned long long)visibleCount:(int)arg1;
- (void)_computeUnsupportedPhotoCount;
- (void)_computeHiddenPhotoCount;
- (unsigned long long)visibleCount;
- (unsigned long long)visibleEventCount:(int)arg1;
- (unsigned long long)visibleEventCount;
- (unsigned long long)visiblePersonCount:(int)arg1 withUnnamed:(BOOL)arg2;
- (unsigned long long)visiblePersonCount;
- (unsigned long long)count;
- (int)countState:(double)arg1;
- (int)countState;
- (struct IPAlbumList *)flattenAlbum;
- (void)addSelfAndChildrenToAlbumList:(struct IPAlbumList *)arg1;
- (struct IPPhotoList *)uniquePhotos:(struct IPPhotoList *)arg1;
- (void)alertMaxPhotos;
- (unsigned long long)maxPhotos;
- (id)keys;
- (void)needsToResort:(BOOL)arg1;
- (void)resort;
- (void)resortIfNeeded;
- (void)rebuild;
- (void)setLastScrollInteger:(long long)arg1;
- (long long)lastScrollInteger;
- (void)setLastScrollFloat:(double)arg1;
- (double)lastScrollFloat;
- (void)sortBy:(int)arg1 ascending:(BOOL)arg2 honorRolls:(int)arg3 applyCurrentSort:(BOOL)arg4;
- (void)_keepStacksOrdered;
- (unsigned long long)sortingChangeMask;
- (void)clearSort;
- (void)_doClearSort;
- (void)_clearSortedCache;
- (BOOL)isSorted;
- (void)setSortHonorRolls:(int)arg1 notify:(BOOL)arg2;
- (void)setSortHonorRolls:(int)arg1;
- (int)sortHonorRolls;
- (void)setSortAscending:(BOOL)arg1;
- (BOOL)sortAscending;
- (void)setOriginalSortOrder:(int)arg1;
- (int)originalSortOrder;
- (void)setSortOrder:(int)arg1 notify:(BOOL)arg2;
- (void)setSortOrder:(int)arg1;
- (int)sortOrder;
- (id)sortingPersistenceAlbumOrSelf;
- (id)sortingPersistenceAlbum;
- (id)eventAlbum;
- (void)acceptAlbumDrop:(struct IPAlbumList *)arg1;
- (void)setDroppedAlbumsBecomeChildren:(BOOL)arg1;
- (BOOL)droppedAlbumsBecomeChildren;
- (void)setAcceptsAlbumDrop:(unsigned long long)arg1;
- (unsigned long long)acceptsAlbumDrop;
- (void)setAcceptsStackDrop:(BOOL)arg1;
- (BOOL)acceptsStackDrop;
- (void)setAcceptsExternalDrop:(unsigned long long)arg1;
- (unsigned long long)acceptsExternalDrop;
- (void)setAcceptsInternalDrop:(unsigned long long)arg1;
- (unsigned long long)acceptsInternalDrop;
- (void)setAltEjectPath:(id)arg1;
- (id)altEjectPath;
- (void)setAltEjectAction:(int)arg1;
- (int)altEjectAction;
- (void)altEject;
- (BOOL)isAltEjectable;
- (void)setEjectPath:(id)arg1;
- (id)ejectPath;
- (void)setEjectAction:(int)arg1;
- (int)ejectAction;
- (void)eject;
- (BOOL)isEjectable;
- (BOOL)isPendingRemoval;
- (void)willUndoRemove;
- (void)willBeRemoved;
- (void)setIsRemovable:(BOOL)arg1;
- (BOOL)isRemovable;
- (void)setIgnoresRolls:(BOOL)arg1;
- (BOOL)ignoresRolls;
- (BOOL)isPlacesDetailAlbum:(BOOL)arg1;
- (id)extractFaceKeysFromAlbum;
- (BOOL)isPeopleDetailAlbum:(BOOL)arg1;
- (BOOL)isEventDetailAlbum:(BOOL)arg1;
- (BOOL)isDetailAlbum:(BOOL)arg1;
- (BOOL)isPlacesAlbum:(BOOL)arg1;
- (BOOL)isPeopleAlbum:(BOOL)arg1;
- (BOOL)isEventAlbum:(BOOL)arg1;
- (BOOL)isReadOnlyRootArchive;
- (BOOL)allowsReorder;
- (BOOL)allowsReorderFlag;
- (void)setAllowsReorder:(BOOL)arg1;
- (BOOL)needsHiddenPhotosVisible;
- (BOOL)allowsMovies;
- (BOOL)allowsModification;
- (BOOL)allowsModificationFlag;
- (void)setAllowsModification:(BOOL)arg1;
- (BOOL)isModified;
- (BOOL)isSelectable;
- (BOOL)isEnabled;
- (BOOL)ignoresPhotoVisibility;
- (void)setShowInContext:(BOOL)arg1;
- (BOOL)showInContext;
- (struct IPPhotoList *)array;
- (struct IPPhotoList *)_sortedArrayNoCopy;
- (void)_installPhotos:(struct IPPhotoList *)arg1;
- (struct IPPhotoList *)unsortedArray;
- (struct IPPhotoList *)_unsortedArrayNoCopy;
- (unsigned long long)indexOfPhoto:(struct IPPhotoInfo *)arg1;
- (unsigned long long)visibleIndexOfPhoto:(struct IPPhotoInfo *)arg1 userHidden:(int)arg2;
- (unsigned long long)visibleIndexOfPhoto:(struct IPPhotoInfo *)arg1;
- (unsigned long long)visibleIndexOfPhotoNoMovies:(struct IPPhotoInfo *)arg1 userHidden:(int)arg2;
- (unsigned long long)visibleIndexOfPhotoNoMovies:(struct IPPhotoInfo *)arg1;
- (struct IPPhotoInfo *)photoAtIndex:(unsigned long long)arg1;
- (struct IPPhotoInfo *)visiblePhotoAtIndex:(unsigned long long)arg1 userHidden:(int)arg2;
- (struct IPPhotoInfo *)visiblePhotoAtIndex:(unsigned long long)arg1;
- (unsigned long long)albumSize:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)listDescription;
- (void)setComments:(id)arg1;
- (id)comments;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 object:(id)arg2;
- (id)attribute:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setKeyPhotoUID:(id)arg1 notify:(BOOL)arg2;
- (id)keyPhotoUID;
- (void)albumDeselected;
- (void)albumWillBeSelected;
- (float)slideShowTransitionSpeed;
- (void)setSlideShowTransitionSpeed:(float)arg1;
- (long long)slideShowTransitionDirection;
- (void)setSlideShowTransitionDirection:(long long)arg1;
- (id)slideshowTransitionIdentifier;
- (void)upgradeSlideshowAttributes;
- (void)setSlideshowTransitionIdentifier:(id)arg1;
- (id)slideShowTransitionName;
- (void)setSlideShowTransitionName:(id)arg1;
- (id)slideshowPreviewDelegate;
- (BOOL)reducedSlideshowOptions;
- (BOOL)slideShowFillScreen;
- (void)setSlideShowFillScreen:(BOOL)arg1;
- (BOOL)slideShowShowControls;
- (void)setSlideShowShowControls:(BOOL)arg1;
- (BOOL)slideShowAutoPanAndZoom;
- (void)setSlideShowAutoPanAndZoom:(BOOL)arg1;
- (BOOL)slideShowUseRankings;
- (void)setSlideShowUseRankings:(BOOL)arg1;
- (BOOL)slideShowUseTitles;
- (void)setSlideShowUseTitles:(BOOL)arg1;
- (BOOL)randomSlideShow;
- (void)setRandomSlideShow:(BOOL)arg1;
- (id)slideshowDataPath;
- (id)slideshowStyle;
- (BOOL)repeatSlideShow;
- (void)setRepeatSlideShow:(BOOL)arg1;
- (int)secondsPerSlide;
- (void)setSecondsPerSlide:(int)arg1;
- (id)slideShowSongTitle;
- (id)slideshowPlaylistName;
- (void)setSlideShowPlaylistName:(id)arg1;
- (id)slideshowSongPath;
- (void)setSlideShowSongPath:(id)arg1;
- (BOOL)backgroundMusicEnabled;
- (void)setEnableBackgroundMusic:(BOOL)arg1;
- (void)setSlideshowSettingsXML:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettingsXML;
- (void)setNameSort:(BOOL)arg1;
- (BOOL)nameSort;
- (long long)compareDisplayOrderName:(id)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (BOOL)_setDisplayOrder:(long long)arg1;
- (long long)displayOrder;
- (void)_updateFileName;
- (void)setFileName:(id)arg1;
- (id)fileName;
- (void)setPersistent:(BOOL)arg1;
- (BOOL)isPersistent;
- (void)setVisibleIfNoChildren:(BOOL)arg1;
- (BOOL)isVisibleIfNoChildren;
- (void)setVisible:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setShared:(BOOL)arg1;
- (BOOL)isShared;
- (unsigned long long)markValue;
- (void)unMark;
- (void)mark;
- (void)setKey:(unsigned long long)arg1;
- (unsigned long long)key;
@property(nonatomic) BOOL createdByiPhoto; // @synthesize createdByiPhoto=mCreatedByiPhoto;
- (void)setSubgroup:(id)arg1;
- (BOOL)isInGroup:(unsigned long long)arg1 andSubgroup:(id)arg2;
- (id)subgroup;
- (BOOL)canChangeName;
- (BOOL)isSharedPhotoStream;
- (BOOL)isClassicPhotoStream;
- (BOOL)isPhotoStream;
- (BOOL)isPhotoStreamPersonIDSubAlbum;
- (BOOL)isYearAlbum;
- (BOOL)isDescendentInGroup:(unsigned long long)arg1;
- (BOOL)isInImportGroup;
- (id)defaultSubgroup;
- (unsigned long long)defaultGroup;
- (void)setGroup:(unsigned long long)arg1;
- (BOOL)isInGroup:(unsigned long long)arg1;
- (unsigned long long)group;
- (void)checkForUIDDuplicates;
- (void)_setDB:(id)arg1;
- (void)setDB:(id)arg1;
- (id)db;
- (void)setIconImageName:(id)arg1;
- (void)setLargeIconImageName:(id)arg1;
- (id)iconUsingLargeAppearance:(BOOL)arg1 selected:(BOOL)arg2;
- (BOOL)shouldSuppressNameWithCount;
- (id)nameWithCountAlways;
- (id)nameWithCount;
- (id)cachedNameWithCount;
- (unsigned long long)previousVisibleCount;
- (BOOL)validateName:(id)arg1;
- (void)setName:(id)arg1;
- (BOOL)photosAreComputed;
- (BOOL)computesPhotosForDB:(id)arg1;
- (BOOL)computesPhotos;
- (void)setDetailViewTitle:(id)arg1;
- (id)detailViewTitle;
- (id)albumType;
- (void)_albumForcedUnpub:(id)arg1 error:(id)arg2;
- (void)setPhotocastURL:(id)arg1;
- (id)photocastURL;
- (BOOL)isPhotocasted;
- (void)_setName:(id)arg1;
- (BOOL)_setNameRaw:(id)arg1;
- (id)name;
- (id)_nameNoRecursion;
- (BOOL)hasName;
- (void)setShowingChildren:(BOOL)arg1;
- (BOOL)showingChildren2;
- (void)setWasShowingChildrenWhenArchived:(BOOL)arg1;
- (BOOL)wasShowingChildrenWhenArchived;
- (void)setShowDates:(BOOL)arg1;
- (BOOL)showDates;
- (void)setShowHidden:(BOOL)arg1;
- (BOOL)showHidden;
- (void)setShowRolls:(BOOL)arg1;
- (BOOL)showRolls;
- (void)setShowsChildren:(BOOL)arg1;
- (BOOL)showsChildren;
- (BOOL)hasChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)childChangeMessageHandler:(id)arg1;
- (struct IPAlbumList *)persistentChildren;
- (struct IPAlbumList *)visibleChildrenInGroup:(unsigned long long)arg1;
- (id)visibleChildAtIndex:(long long)arg1;
- (struct IPAlbumList *)visibleChildren;
- (unsigned long long)numberOfVisibleChildren;
- (unsigned long long)numberOfChildren;
- (struct IPAlbumList *)namedChildren;
- (void)_recomputeVisChildren;
- (void)_setNeedsToRecomputeVisChildren;
- (void)setSortedChildren:(struct IPAlbumList *)arg1;
- (void)_setChildren:(struct IPAlbumList *)arg1;
- (struct IPAlbumList *)children;
- (void)removeFromRKTrash;
- (void)putInRKTrash;
- (BOOL)isInRKTrash;
- (void)setParentAlbum:(id)arg1;
- (void)_setParentAlbum:(id)arg1;
- (void)_setParentAlbumUuid:(id)arg1;
- (void)_setParentFolder:(id)arg1;
- (BOOL)isContainedByEvent;
- (BOOL)containsEvents;
- (BOOL)isEvent;
- (id)topLevelParent;
- (id)parentAlbumOrSelf;
- (id)parentAlbumIgnoringTrash;
- (id)parentAlbum;
- (void)setRepresentedAlbum:(id)arg1;
- (id)representedAlbum;
- (void)setRepresentedAlbumKeyForLoading:(unsigned long long)arg1;
- (unsigned long long)representedAlbumKeyForLoading;
- (void)setObscured:(BOOL)arg1;
- (BOOL)isObscured;
- (id)parentFolderUuid;
- (id)parentFolder;
- (void)setUID:(id)arg1;
- (id)uid;
- (void)setHasBeenSanityChecked:(BOOL)arg1;
- (BOOL)hasBeenSanityChecked;
- (void)releaseChildren;
- (void)_requireTransaction;
- (void)_requireWriteTransaction;
- (void)_handleDBMessage:(unsigned int)arg1 data1:(void *)arg2 data2:(void *)arg3 data3:(void *)arg4;
- (void)_handleSortingChangedDBMessage:(struct IPPhotoInfo *)arg1;
- (BOOL)doneWithChanges:(BOOL)arg1;
- (void)_sendChangeMessage:(unsigned long long)arg1;
- (void)doneWithChanges;
- (void)_noteChangedFields:(unsigned long long)arg1;
- (void)_clearChangedFields;
- (void)contentsChanged:(BOOL)arg1;
- (id)altEjectHighlightedIcon:(BOOL)arg1;
- (id)altEjectClickedIcon:(BOOL)arg1;
- (id)altEjectIcon:(BOOL)arg1;
- (id)ejectHighlightedIcon:(BOOL)arg1;
- (id)ejectClickedIcon:(BOOL)arg1;
- (id)ejectIcon:(BOOL)arg1;
- (id)publishedIcon:(BOOL)arg1;
- (id)progressTimeRemaining;
- (void)markProgressStatistics:(double)arg1;
- (void)stopProgressStatistics;
- (void)startProgressStatistics;
- (BOOL)setProgressValue:(double)arg1;
- (double)progressValue;
- (void)setProgressIndicator:(id)arg1;
- (id)progressIndicator;
- (Class)progressIndicatorClass;
- (void)albumProgressCanceled:(id)arg1;
- (BOOL)wantsProgress;
- (void)setClosedStacks:(id)arg1;
- (id)closedStacks;
- (void)forgetOpenStateForStackWithKey:(unsigned long long)arg1;
- (void)copyStackOpenStateFromAlbum:(id)arg1 forPhotos:(struct IPPhotoList *)arg2;
- (void)copyStackOpenStateFromAlbum:(id)arg1;
- (void)setStackOpen:(BOOL)arg1 photo:(struct IPPhotoInfo *)arg2;
- (BOOL)isStackOpenForPhoto:(struct IPPhotoInfo *)arg1;
- (void)setStackOpen:(BOOL)arg1 key:(unsigned long long)arg2;
- (BOOL)isStackOpenForKey:(unsigned long long)arg1;
- (void)deactivate;
- (void)activate;
- (void)setClosedRolls:(id)arg1;
- (id)closedRolls;
- (void)forgetOpenStateForRollWithKey:(unsigned long long)arg1;
- (void)setRollOpen:(BOOL)arg1 photo:(struct IPPhotoInfo *)arg2;
- (BOOL)isRollOpenForPhoto:(struct IPPhotoInfo *)arg1;
- (void)setRollOpen:(BOOL)arg1 key:(unsigned long long)arg2;
- (BOOL)isRollOpenForKey:(unsigned long long)arg1;
- (void)setYearHeaders:(id)arg1;
- (id)yearHeaders;
- (void)setYear:(int)arg1 month:(int)arg2 day:(int)arg3 open:(BOOL)arg4;
- (BOOL)isYearOpen:(int)arg1 month:(int)arg2 day:(int)arg3;
- (void)setupDefaultNotifications;
- (void)_updateProgressMsg:(id)arg1;
- (void)_doUpdateProgressMsg:(id)arg1;
- (void)ensureAlbumHasAllStackMembers:(struct IPStack *)arg1;
- (void)eventHiddenOverrideChanged:(id)arg1;
- (void)_undoEnsureAlbumHasAllStackMembers:(id)arg1;
- (void)_redoEnsureAlbumHasAllStackMembers:(id)arg1;
- (id)pasteboardRepresentation;
- (void)prepareForRelease;
- (void)dealloc;
- (id)makeCopyWithDB:(BOOL)arg1 staticCopy:(BOOL)arg2 newName:(id)arg3;
- (void)_recursivelyAssignKeysForUseInDB:(id)arg1;
- (id)initWithAlbum:(id)arg1 staticCopy:(BOOL)arg2;
- (id)initWithRKAlbum:(id)arg1;
- (void)setRKAlbum:(id)arg1;
- (void)_setRKAlbum:(id)arg1;
- (id)initWithDB:(id)arg1 key:(unsigned long long)arg2 uid:(id)arg3 persistent:(BOOL)arg4;
- (id)initWithDB:(id)arg1 uid:(id)arg2 persistent:(BOOL)arg3;
- (id)initWithDB:(id)arg1 key:(unsigned long long)arg2 persistent:(BOOL)arg3;
- (id)initWithDB:(id)arg1 uid:(id)arg2;
- (id)initWithDB:(id)arg1 persistent:(BOOL)arg2;
- (id)init;
- (void)loadSqAlbum:(id)arg1 fromDB:(id)arg2;
- (id)_uuidForBuiltinAlbumKey:(unsigned long long)arg1;
- (void)loadFromDB;
- (void)_touch;
- (void)removeFromDB;
- (void)addToDB:(id)arg1;
- (id)database;
- (id)rkAlbum;
- (void)createRKAlbumInDatabase:(id)arg1;
- (id)parentRKFolderInDatabase:(id)arg1;
- (int)rkAlbumSubclass;
- (id)objectSpecifier;
- (BOOL)containsPhotoWithUID:(id)arg1;
- (int)albumSortDirection;
- (int)albumSortOrder;
@property(readonly) NSArray *photoUids;
@property(readonly) NSArray *photos;
@property(readonly) unsigned long long photoCount;
@property(readonly) NSString *keyPhotoUid;
@property(readonly) NSString *pageLayoutUid;
@property(readonly) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

