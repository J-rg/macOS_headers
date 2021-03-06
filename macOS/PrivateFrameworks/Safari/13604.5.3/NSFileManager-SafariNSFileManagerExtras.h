//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafariNSFileManagerExtras)
- (void)safari_markItemAsUsedAtURL:(id)arg1;
- (id)safari_defaultLocalStorageURLForHomeDirectory:(id)arg1;
- (id)safari_defaultLocalStorageURL;
- (id)_safari_defaultLocalStorageURLForSettingsDirectory:(id)arg1;
- (id)safari_defaultApplicationCacheDirectory;
- (id)safari_defaultWebCacheDirectory;
- (id)safari_defaultWebCacheDirectoryForHomeDirectoryPath:(id)arg1;
- (id)_safari_defaultWebCacheDirectoryForLibraryPath:(id)arg1;
- (BOOL)safari_removeItemAtURL:(id)arg1 getItemSize:(unsigned long long *)arg2;
- (BOOL)safari_removeItemAtURL:(id)arg1 getItemSize:(unsigned long long *)arg2 error:(id *)arg3;
- (unsigned long long)safari_sizeOfItemsInDirectoryAtURL:(id)arg1 includeSubDirectory:(BOOL)arg2;
- (id)safari_URLForProposedURLIfDistinctFileExists:(id)arg1 currentURL:(id)arg2;
- (BOOL)safari_fileExistsAtURLIncludingBrokenSymlink:(id)arg1;
- (id)safari_localCachesDirectoryPreferringHome;
- (id)safari_defaultReadingListArchivesDirectoryForHomeDirectory:(id)arg1;
- (id)safari_defaultReadingListArchivesDirectory;
- (id)_safari_defaultReadingListArchivesDirectoryForSettingsDirectory:(id)arg1;
- (id)safari_roamingCachesDirectory;
- (id)safari_localCachesDirectory;
- (BOOL)safari_moveItemAtURL:(id)arg1 toURL:(id)arg2 allowCopying:(BOOL)arg3 allowOverwriting:(BOOL)arg4;
- (BOOL)safari_isPathOnBootVolume:(id)arg1;
- (id)safari_pathWithUniqueFilenameForPath:(id)arg1;
- (unsigned long long)safari_capacityForDirectory:(id)arg1 withCurrentSize:(unsigned long long)arg2 maxCapacity:(unsigned long long)arg3 maxRatioToAvailableDiskSpace:(double)arg4;
- (id)_quarantineOriginURLForRequestMainDocumentURL:(id)arg1 requestURL:(id)arg2 shouldUseRequestURLAsFallback:(BOOL)arg3;
- (void)safari_setQuarantineInformationForFilePath:(id)arg1 originURL:(id)arg2 dataURL:(id)arg3 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)arg4;
- (void)safari_setQuarantineInformationForFilePath:(id)arg1 downloadRequest:(id)arg2 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)arg3 shouldUseRequestURLAsOriginURLIfNecessary:(BOOL)arg4;
- (void)safari_setQuarantineInformationForFilePath:(id)arg1 downloadRequest:(id)arg2 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)arg3;
- (id)safari_pathForSingleItemAtPath:(id)arg1;
- (BOOL)safari_moveDownloadedFileAtURL:(id)arg1 toURL:(id)arg2;
@end

