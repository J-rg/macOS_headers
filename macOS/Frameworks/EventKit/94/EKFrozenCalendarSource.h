//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import "CalendarSourceModelProtocol.h"

@class EKFrozenReminderSource, NSDictionary, NSManagedObjectID, NSSet, NSString, NSURL;

@interface EKFrozenCalendarSource : EKFrozenObject <CalendarSourceModelProtocol>
{
    BOOL isDelegate;
    BOOL isWritable;
    BOOL isEnabledForEvents;
    BOOL isEnabledForReminders;
    BOOL supportsAttendeeComments;
    BOOL supportsDropBoxAttachments;
    BOOL supportsEmailValidation;
    BOOL supportsEventCalendarCreation;
    BOOL supportsFreebusy;
    BOOL supportsJunkReporting;
    BOOL supportsLikenessPropagation;
    BOOL supportsManagedAttachments;
    BOOL supportsPhoneNumbers;
    BOOL supportsPrivateEvents;
    BOOL supportsSharingScheduling;
    BOOL supportsTaskCalendarCreation;
    BOOL requiresOpeningAttachmentAsLink;
    BOOL supportsUnbind;
    int displayOrder;
    NSString *externalSourceIdentifier;
    NSSet *ownerAddresses;
    NSString *providerIdentifier;
    NSString *sourceIdentifier;
    NSString *title;
    NSString *typeString;
    NSString *dropBoxPathString;
    NSURL *serverURL;
    EKFrozenReminderSource *_reminderSource;
}

+ (Class)meltedClass;
@property(retain) EKFrozenReminderSource *reminderSource; // @synthesize reminderSource=_reminderSource;
@property(readonly, nonatomic) BOOL supportsUnbind; // @synthesize supportsUnbind;
@property(readonly, nonatomic) NSURL *serverURL; // @synthesize serverURL;
@property(readonly, nonatomic) NSString *dropBoxPathString; // @synthesize dropBoxPathString;
@property(readonly, retain, nonatomic) NSString *typeString; // @synthesize typeString;
@property(readonly, nonatomic) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL requiresOpeningAttachmentAsLink; // @synthesize requiresOpeningAttachmentAsLink;
@property(readonly, nonatomic) BOOL supportsTaskCalendarCreation; // @synthesize supportsTaskCalendarCreation;
@property(readonly, nonatomic) BOOL supportsSharingScheduling; // @synthesize supportsSharingScheduling;
@property(readonly, nonatomic) BOOL supportsPrivateEvents; // @synthesize supportsPrivateEvents;
@property(readonly, nonatomic) BOOL supportsPhoneNumbers; // @synthesize supportsPhoneNumbers;
@property(readonly, nonatomic) BOOL supportsManagedAttachments; // @synthesize supportsManagedAttachments;
@property(readonly, nonatomic) BOOL supportsLikenessPropagation; // @synthesize supportsLikenessPropagation;
@property(readonly, nonatomic) BOOL supportsJunkReporting; // @synthesize supportsJunkReporting;
@property(readonly, nonatomic) BOOL supportsFreebusy; // @synthesize supportsFreebusy;
@property(readonly, nonatomic) BOOL supportsEventCalendarCreation; // @synthesize supportsEventCalendarCreation;
@property(readonly, nonatomic) BOOL supportsEmailValidation; // @synthesize supportsEmailValidation;
@property(readonly, nonatomic) BOOL supportsDropBoxAttachments; // @synthesize supportsDropBoxAttachments;
@property(readonly, nonatomic) BOOL supportsAttendeeComments; // @synthesize supportsAttendeeComments;
@property(readonly, retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier;
@property(readonly, retain, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier;
@property(readonly, nonatomic) NSSet *ownerAddresses; // @synthesize ownerAddresses;
@property(readonly, nonatomic) BOOL isEnabledForReminders; // @synthesize isEnabledForReminders;
@property(readonly, nonatomic) BOOL isEnabledForEvents; // @synthesize isEnabledForEvents;
@property(readonly, nonatomic) BOOL isWritable; // @synthesize isWritable;
@property(readonly, nonatomic) BOOL isDelegate; // @synthesize isDelegate;
@property(readonly, nonatomic) int displayOrder; // @synthesize displayOrder;
@property(readonly, copy, nonatomic) NSString *externalSourceIdentifier; // @synthesize externalSourceIdentifier;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

