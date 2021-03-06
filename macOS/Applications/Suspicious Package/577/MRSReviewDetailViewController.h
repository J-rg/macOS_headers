//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MRSContentViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MRSIndexedItemManager, MRSInstallProductLoader, MRSInstallProductValidator, MRSStatusOverlayViewController, NSImage, NSImageView, NSString, NSTableView;

@interface MRSReviewDetailViewController : MRSContentViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    MRSIndexedItemManager *_itemManager;
    MRSStatusOverlayViewController *_overlayViewController;
    NSImage *_tabIconPendingRestore;
    NSImage *_statusIconPendingRestore;
    MRSInstallProductLoader *_productLoader;
    MRSInstallProductValidator *_validator;
    id <MRSReviewDetailViewControllerDelegate> _delegate;
    NSTableView *_issueTableView;
    NSImageView *_reviewStatusIconView;
}

+ (id)keyPathsForValuesAffectingTabContainerIcon;
@property(nonatomic) __weak NSImageView *reviewStatusIconView; // @synthesize reviewStatusIconView=_reviewStatusIconView;
@property(nonatomic) __weak NSTableView *issueTableView; // @synthesize issueTableView=_issueTableView;
@property(nonatomic) __weak id <MRSReviewDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRSInstallProductValidator *validator; // @synthesize validator=_validator;
@property(readonly) MRSInstallProductLoader *productLoader; // @synthesize productLoader=_productLoader;
- (void).cxx_destruct;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)tableViewColumnDidResize:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tabContainerCanCopy;
- (BOOL)tabContainerShouldCloseIfLastOfType;
- (BOOL)tabContainerCanClose;
- (id)tabContainerIcon;
- (id)title;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)copy:(id)arg1;
- (void)reviewDetailDidClickHelpButton:(id)arg1;
- (void)reviewDetailDidClickShowMoreButton:(id)arg1;
- (id)_errorForAction:(id)arg1;
- (void)_updateErrorRowHeightForCurrentColumnWidth;
- (void)_updateStateWithValidationResults;
- (void)_updateUIForCurrentValidatorStatus;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithProductLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

