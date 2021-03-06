//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudDrive/NSSecureCoding-Protocol.h>

@class GSPermanentStorage, NSData, NSDate, NSPersonNameComponents, NSString, NSURL;
@protocol NSCopying><NSSecureCoding;

@interface ICDBRNonLocalVersion : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSString *_displayName;
    NSString *_etag;
    unsigned long long _size;
    NSDate *_modificationDate;
    NSPersonNameComponents *_lastEditorNameComponents;
    BOOL _hasThumbnail;
    GSPermanentStorage *_versionsStore;
    NSURL *_physicalURL;
    NSData *_physicalSandboxExtension;
    long long _physicalSandboxHandle;
    NSData *_logicalSandboxExtension;
    long long _logicalSandboxHandle;
    NSString *_lastEditorDeviceName;
}

+ (id)listVersionsOfDocumentAtURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(readonly, nonatomic) NSPersonNameComponents *lastEditorNameComponents; // @synthesize lastEditorNameComponents=_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *lastEditorDeviceName; // @synthesize lastEditorDeviceName=_lastEditorDeviceName;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier;
- (void)dealloc;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)setVersionStore:(id)arg1;
- (id)initWithURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
- (id)initAsFaultAtURL:(id)arg1 faultURL:(id)arg2 size:(id)arg3 logicalExtension:(id)arg4 faultExtension:(id)arg5 etag:(id)arg6 hasThumbnail:(BOOL)arg7 displayName:(id)arg8 lastEditorDeviceName:(id)arg9 lastEditorNameComponents:(id)arg10 modificationDate:(id)arg11;
@property(readonly, nonatomic) BOOL isLatestVersion;
@property(readonly, nonatomic) NSString *lastEditorFormattedName;

@end

