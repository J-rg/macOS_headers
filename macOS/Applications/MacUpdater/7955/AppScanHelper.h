//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AppScanHelper : NSObject
{
}

+ (id)displayNameForApp:(id)arg1;
+ (id)getReleaseDateFromDatabase:(id)arg1 entry:(id)arg2 users:(int)arg3;
+ (id)getReleaseDateFromDatabase:(id)arg1 svs:(id)arg2 bv:(id)arg3 fallbackDate:(id)arg4;
+ (id)getSparkleUpdateinfo:(id)arg1;
+ (id)getMASUpdateinfo:(id)arg1 countryCode:(id)arg2;
+ (id)getMASUpdateinfo:(id)arg1 appstoreFixup:(BOOL)arg2;
+ (id)scanAppAtPath:(id)arg1 configFile:(id)arg2 error:(id *)arg3;

@end

