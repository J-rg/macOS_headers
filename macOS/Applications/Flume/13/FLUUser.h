//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_FLUUser.h"

@interface FLUUser : _FLUUser
{
}

+ (long long)nextExploreIndexInMOC:(id)arg1;
+ (id)genericUserInMOC:(id)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (id)recentlyUsedHashtagsWithExcludeString:(id)arg1;
- (id)odnoklassniki;
- (id)vkontakte;
- (id)mixi;
- (id)ameba;
- (id)weibo;
- (id)swarm;
- (id)flickr;
- (id)tumblr;
- (id)twitter;
- (id)facebook;
- (id)linkedAccountForType:(long long)arg1;
- (void)toggleBookmark;
- (id)firstName;
- (id)roundedUserAvatarForSize:(struct CGSize)arg1 borderUsesDesignMode:(BOOL)arg2 customBorderColor:(id)arg3;
- (id)roundedUserAvatarForSize:(struct CGSize)arg1 customBorderColor:(id)arg2;
- (id)roundedUserAvatarForSize:(struct CGSize)arg1 borderUsesDesignMode:(BOOL)arg2;
- (id)userAvatar;
- (BOOL)isAvatarDownloaded;
- (BOOL)isLoggedIn;
- (BOOL)loadFromDictionary:(id)arg1 currentUser:(id)arg2 updateProfile:(BOOL)arg3 downloadAvatar:(BOOL)arg4;
- (BOOL)loadFromDictionary:(id)arg1 updateProfile:(BOOL)arg2 downloadAvatar:(BOOL)arg3;
- (BOOL)loadFromDictionary:(id)arg1 currentUser:(id)arg2;
- (BOOL)loadFromDictionary:(id)arg1;

@end

