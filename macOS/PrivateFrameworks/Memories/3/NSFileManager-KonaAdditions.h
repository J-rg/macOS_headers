//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@interface NSFileManager (KonaAdditions)
+ (id)multiUserDelegate;
+ (void)setMultiUserDelegate:(id)arg1;
- (id)uniquePathFromPath:(id)arg1;
- (BOOL)copyAudioFileFromMediaPlayerURL:(id)arg1 toFolder:(id)arg2;
- (id)pathAfterMediaPlayerCopy:(id)arg1 dest:(id)arg2;
- (BOOL)copyFileFromAssetLibrary:(id)arg1 toFolder:(id)arg2;
- (id)pathAfterAssetLibraryCopy:(id)arg1 dest:(id)arg2;
- (id)allProjectPlistPathsExcludingPath:(id)arg1;
- (id)contentsOfSharedMediaDirectory;
- (id)contentsOfImportExportDirectory;
- (id)contentsOfPrivateDocumentsDirectory;
- (id)localTheaterDirectory;
- (id)itunesExportedProjectsTrashDirectory;
- (id)trashDirectory;
- (id)sharedAudioDirectory;
- (id)sharedMediaDirectory;
- (id)renderedAdjustmentsDirectory;
- (id)cloudImportDirectory;
- (id)importExportDirectory;
- (id)localPrivateDocumentsDirectory;
- (id)privateDocumentsDirectory;
- (id)ubiquityContainer;
- (id)modificationDate:(id)arg1;
- (unsigned long long)sizeOfFileAtPath:(id)arg1;
- (BOOL)enoughSpaceToRecordMedia;
- (BOOL)enoughSpaceToExportProject:(unsigned long long)arg1;
- (BOOL)enoughSpaceToEditProjects;
- (unsigned long long)freeBytesOnDisk;
@end

