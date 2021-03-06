//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCItem.h"
#import "BRCJobsMatching.h"
#import "BRCSyncThrottleItemProtocol.h"

@class BRCAccountSession, BRCAliasItem, BRCAppLibrary, BRCClientZone, BRCDirectoryItem, BRCDirectoryItem<BRCFSRooted>, BRCDocumentItem, BRCFinderBookmarkItem, BRCItemID, BRCLocalItem<BRCSharedToMeTopLevel>, BRCLocalItem<BRCTopLevelShareable>, BRCLocalStatInfo, BRCPQLConnection, BRCServerZone, BRCShareAcceptationFault, BRCSymlinkItem, BRCZoneRowID, BRFileObjectID, NSError, NSMutableSet, NSNumber, NSString;

@interface BRCLocalItem : NSObject <BRCJobsMatching, BRCSyncThrottleItemProtocol, BRCItem>
{
    BRCAccountSession *_session;
    BRCServerZone *_serverZone;
    BRCClientZone *_clientZone;
    BRCPQLConnection *_db;
    BRCAppLibrary *_appLibrary;
    BRCItemID *_itemID;
    BRCZoneRowID *_parentZoneRowID;
    NSNumber *_ownerKey;
    BRCLocalStatInfo *_st;
    unsigned int _syncUpState;
    BRCLocalItem *_orig;
    unsigned long long _localDiffs;
    NSNumber *_minimumSupportedOSRowID;
    BOOL _isUserVisible;
    unsigned long long _dbRowID;
    unsigned long long _notifsRank;
    unsigned long long _sharingOptions;
    NSNumber *_knownByServer;
    NSNumber *_isInDocumentScope;
    NSNumber *_parentFileID;
    id _serverPathMatchID;
    BOOL _resolvedPath;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    BOOL _forceNotif;
    NSString *_path;
}

+ (BOOL)supportsSecureCoding;
+ (id)newItemWithPath:(id)arg1 parentGlobalID:(id)arg2;
+ (BOOL)parseBookmarkData:(id)arg1 inAccountSession:(id)arg2 docID:(id *)arg3 itemID:(id *)arg4 mangledID:(id *)arg5 unsaltedBookmarkData:(id *)arg6 error:(id *)arg7;
+ (id)unsaltedBookmarkDataWithRelativePath:(id)arg1 serverZone:(id)arg2;
+ (id)bookmarkDataWithRelativePath:(id)arg1 serverZone:(id)arg2;
+ (id)itemResolutionStringWithRelativePath:(id)arg1;
+ (id)unsaltedBookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;
+ (id)_bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2 salted:(BOOL)arg3;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) BRCAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(nonatomic) unsigned long long sharingOptions; // @synthesize sharingOptions=_sharingOptions;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(readonly, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) unsigned long long notifsRank; // @synthesize notifsRank=_notifsRank;
@property(readonly, nonatomic) unsigned long long localDiffs; // @synthesize localDiffs=_localDiffs;
@property(readonly, nonatomic) BRCLocalItem *orig; // @synthesize orig=_orig;
@property(readonly, nonatomic) unsigned int syncUpState; // @synthesize syncUpState=_syncUpState;
@property(readonly, nonatomic) BRCLocalStatInfo *st; // @synthesize st=_st;
@property(readonly, nonatomic) NSNumber *ownerKey; // @synthesize ownerKey=_ownerKey;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) unsigned long long dbRowID; // @synthesize dbRowID=_dbRowID;
- (void).cxx_destruct;
- (BOOL)_computedUserVisibleStatusAtPath:(id)arg1;
- (BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) BOOL isRejected;
@property(readonly, nonatomic) BOOL isIdleOrRejected;
@property(readonly, nonatomic) BOOL isReadAndUploaded;
@property(readonly, nonatomic) BOOL needsSyncUp;
@property(readonly, nonatomic) BOOL needsUpload;
@property(readonly, nonatomic) BOOL needsReading;
- (void)bouncePhysicalNameToRepresentableName;
- (void)bounceReservedItemWithBounceNumber:(unsigned long long)arg1;
- (void)markBounceFailed;
- (void)markBounceFinished;
- (void)beginBounceAndSaveToDBWithBounceNumber:(unsigned long long)arg1;
- (void)markMetadataLive;
- (void)markLiveFromStageWithPath:(id)arg1;
- (void)updateStructuralCKInfoFromServerItem:(id)arg1;
- (id)computedDestinationFilenameFromServerItem:(id)arg1;
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(BOOL)arg2;
- (void)updateStatMetadataFromServerItem:(id)arg1;
- (void)clearFromStage;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2 documentID:(unsigned int)arg3;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2;
- (void)markRenamedUsingServerItem:(id)arg1 toRelpath:(id)arg2 logicalName:(id)arg3 filename:(id)arg4;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (void)moveAsideLocally;
- (void)markNeedsDeleteWhenAlreadyDeadInServerTruth;
- (void)markNeedsDeleteForRescheduleOfItem:(id)arg1;
- (void)markDead;
- (void)markReserved;
- (void)markLostWithoutBackoff;
- (void)markLostClearGenerationID:(BOOL)arg1 backoffMode:(unsigned char)arg2;
- (void)markLostWhenReplacedByItem:(id)arg1;
- (void)markFound;
- (void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2;
- (void)handleUnknownItemError;
- (void)markItemForgottenByServer;
- (void)resetAfterSyncJobsDeletion;
- (BOOL)markLatestRequestAcknowledgedInZone:(id)arg1;
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;
- (void)markLatestSyncRequestFailedInZone:(id)arg1;
- (void)prepareForSyncUpInZone:(id)arg1;
- (void)scheduleSyncDownForOOBModifyRecordsAck;
- (void)markNeedsUploadOrSyncingUp;
- (void)_markNeedsSyncingUp;
- (void)markForceRejected;
- (void)markForceNeedsSyncUp;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (BOOL)_contentXattrsHaveChangedAtRelativeAPath:(id)arg1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (BOOL)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (BOOL)_checkForSharedToMeItemInTrashWithPath:(id)arg1;
- (void)_updatePropagatedInfoFromFSAtPath:(id)arg1;
- (BOOL)_checkZoneUpdateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (BOOL)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4;
- (unsigned long long)diffAgainstOriginalItem;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (BOOL)_isIndexable;
- (BOOL)saveToDBForServerEdit:(BOOL)arg1 keepAliases:(BOOL)arg2;
- (BOOL)saveToDB;
- (void)_cheapCheckSavingItem;
@property(readonly, nonatomic) unsigned int uploadStatus;
@property(readonly, nonatomic) BOOL fromReadOnlyDB;
@property(readonly, nonatomic) NSError *syncUpError;
- (void)markForceNotify;
- (void)triggerNotificationIfNeeded;
- (void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(BOOL)arg2;
- (void)_queueParentIDUpdate:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *setOfAppLibraryIDsWithReverseAliases;
- (id)fetchParentFileIDs;
- (id)_setOfParentIDs;
- (void)_ascendItemHierarchyWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1;
- (BOOL)_isInterestingUpdateForNotifs;
- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)wasMarkedDead;
- (void)_updateSharedZoneBoostingWithDiffs:(unsigned long long)arg1;
- (void)_updateSyncUpSchedulerWithDiffs:(unsigned long long)arg1;
- (id)_syncZones;
- (id)unsaltedBookmarkData;
- (void)createSyncUpJob;
- (unsigned long long)maskForDiffsToSyncUpForZone:(id)arg1;
- (unsigned long long)metadataSyncUpMask;
- (void)_updateAppLibraryPristineStatesAfterCreationOrUpdate;
- (void)_updateAppLibraryPristineStatesAfterMarkingDead;
- (id)parentItemOnFS;
- (id)parentItemIDInZone;
- (id)itemParentGlobalID;
- (id)itemGlobalID;
- (BOOL)validateLoggingToFile:(struct __sFILE *)arg1;
- (id)initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *digestDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionWithContext:(id)arg1;
- (void)markNeedsOSUpgradeToSyncUpWithName:(id)arg1;
- (id)osNameNeededToSyncUp;
@property(readonly, nonatomic) BOOL needsOSUpgradeToSyncUp;
- (void)inheritOSUpgradeNeededFromItem:(id)arg1;
@property(readonly, nonatomic) BOOL physicalNameNeedsRename;
@property(readonly, nonatomic) BOOL hasShareIDAndIsOwnedByMe;
@property(readonly, nonatomic) BOOL isSharedByMe;
@property(readonly, nonatomic) BOOL isOwnedByMe;
@property(readonly, nonatomic) BRCLocalItem<BRCSharedToMeTopLevel> *asSharedToMeTopLevelItem;
@property(readonly, nonatomic) BOOL isSharedToMeChildItem;
@property(readonly, nonatomic) BOOL isSharedToMeTopLevelItem;
@property(readonly, nonatomic) BOOL isSharedToMe;
@property(readonly, nonatomic) BOOL isShareAcceptationFault;
@property(readonly, nonatomic) BOOL isFinderBookmark;
@property(readonly, nonatomic) BOOL isSymLink;
@property(readonly, nonatomic) BOOL isFSRoot;
@property(readonly, nonatomic) BOOL isZoneRoot;
@property(readonly, nonatomic) BOOL isFault;
@property(readonly, nonatomic) BOOL isDocument;
@property(readonly, nonatomic) BOOL isPackage;
@property(readonly, nonatomic) BOOL isDirectoryWithPackageName;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isBRAlias;
@property(readonly, nonatomic) BOOL isReserved;
@property(readonly, nonatomic) BOOL isOnDisk;
@property(readonly, nonatomic) BOOL isLost;
@property(readonly, nonatomic) BOOL isAlmostDead;
@property(readonly, nonatomic) BOOL isDead;
@property(readonly, nonatomic) BOOL isLive;
@property(readonly, nonatomic) BRCItemID *serverPathMatchItemID;
@property(readonly, nonatomic) BOOL isDeadOrMissingInServerTruth;
@property(readonly, nonatomic) BOOL isKnownByServerOrInFlight;
@property(readonly, nonatomic) BOOL isKnownByServer;
@property(readonly, nonatomic) BRCClientZone *parentClientZone;
- (void)_refreshAppLibraryFromParent;
@property(readonly, nonatomic) NSNumber *fileID;
@property(readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property(readonly, nonatomic) NSNumber *parentFileID;
@property(readonly, nonatomic) BOOL isInTrashScope;
@property(readonly, nonatomic) BOOL isInDataScope;
@property(readonly, nonatomic) BOOL isInDocumentOrTrashScope;
@property(readonly, nonatomic) BOOL isInDocumentScope;
- (BOOL)checkIsInDocumentsScopeWithParent:(id)arg1;
@property(readonly, nonatomic) BOOL isFromInitialScan;
@property(readonly, nonatomic) BOOL needsInsert;
@property(readonly, nonatomic) NSString *appLibraryID;
@property(readonly, nonatomic) NSString *extension;
@property(readonly, nonatomic) NSString *logicalName;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) BRCShareAcceptationFault *asShareAcceptationFault;
@property(readonly, nonatomic) BRCFinderBookmarkItem *asFinderBookmark;
@property(readonly, nonatomic) BRCSymlinkItem *asSymlink;
@property(readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property(readonly, nonatomic) BRCLocalItem<BRCTopLevelShareable> *asShareableItem;
@property(readonly, nonatomic) BRCDocumentItem *asDocument;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
- (void)updateParentZoneRowID:(id)arg1;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 pcsChained:(BOOL)arg2 inZone:(id)arg3;
- (id)structureRecordIDInZone:(id)arg1;
- (id)sharedAliasItemID;
- (unsigned long long)diffAgainstServerAliasItem:(id)arg1;
- (id)structureRecordID;
- (void)serializeStructuralPluginHints:(id)arg1;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 stageID:(id)arg2 pcsChained:(BOOL)arg3;
- (id)baseStructureRecord;
@property(readonly, nonatomic) NSString *bookmarkData;
- (id)itemResolutionString;
- (void)fixupStagedItemAtStartup;
- (void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2 sharingOptions:(unsigned long long)arg3;
- (BOOL)learnStagedInfoFromDownloadStageID:(id)arg1 error:(id *)arg2;
- (id)matchingJobsWhereSQLClause;
- (id)jobsDescription;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

