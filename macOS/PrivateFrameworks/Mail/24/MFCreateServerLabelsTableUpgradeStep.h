//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@interface MFCreateServerLabelsTableUpgradeStep : MFLibraryUpgradeStep
{
}

+ (unsigned long long)targetVersion;
- (void)_populateFromLocalMessagesTable;
- (void)_populateFromIMAPLabelsTable;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;

@end

