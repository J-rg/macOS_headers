//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

@class NSLayoutConstraint, UXLabel;

@interface PXPeopleConfirmationSummaryViewController : UXViewController
{
    id <PXPeopleSummaryDelegate> _delegate;
    NSLayoutConstraint *_labelSpacingConstraint;
    UXLabel *_summaryLabel;
}

- (void).cxx_destruct;
@property(retain) UXLabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain) NSLayoutConstraint *labelSpacingConstraint; // @synthesize labelSpacingConstraint=_labelSpacingConstraint;
@property __weak id <PXPeopleSummaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

