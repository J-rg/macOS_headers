//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSUUID, REMObjectID;

@protocol REMNullableObjectIDProviding
+ (NSString *)cdEntityName;
+ (REMObjectID *)objectIDWithUUID:(NSUUID *)arg1;
+ (REMObjectID *)newObjectID;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@end

