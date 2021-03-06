//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPopoverDelegate-Protocol.h"
#import "TSWPCitationSmartFieldEditing-Protocol.h"

@class NSButton, NSString, NSTextField, NSView, TSDMacNSPopover, TSWPCitationRecord, TSWPCitationSmartField;

@interface TSWPEndNoteCitationPopoverViewController : NSViewController <NSPopoverDelegate, TSWPCitationSmartFieldEditing>
{
    NSView *_footerView;
    NSButton *_deleteButton;
    NSTextField *_countLabel;
    NSButton *_nextButton;
    NSButton *_prevButton;
    BOOL _updateInProgress;
    TSWPCitationSmartField *_citationSmartField;
    TSDMacNSPopover *_popover;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _updateBlock;
    unsigned long long _citationIndex;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic) unsigned long long citationIndex; // @synthesize citationIndex=_citationIndex;
- (void)p_commandControllerWillEnqueueCommand:(id)arg1;
- (void)p_updateUI;
- (void)p_execUpdateBlockForKey:(id)arg1 value:(id)arg2;
- (void)p_storeCitationSmartField:(id)arg1;
- (void)p_updateCitationRecordKey:(id)arg1 withValue:(id)arg2;
- (void)citationSmartField:(id)arg1 willBeRemovedFromDocument:(id)arg2;
- (void)popoverDidShow:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)setVisibleIndex:(unsigned long long)arg1;
- (void)prevPressed:(id)arg1;
- (void)nextPressed:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)showPopoverAtRect:(struct CGRect)arg1 inView:(id)arg2 withUpdateBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) TSDMacNSPopover *popover;
@property(copy, nonatomic) NSString *prefix;
@property(copy, nonatomic) NSString *suffix;
@property(nonatomic) BOOL hideYear;
@property(nonatomic) BOOL hideAuthor;
@property(copy, nonatomic) NSString *pageRange;
@property(readonly, nonatomic) TSWPCitationRecord *citationRecord;
@property(readonly, nonatomic) unsigned long long citationCount;
- (void)awakeFromNib;
- (id)nibName;
- (void)dealloc;
- (id)initWithCitationSmartField:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

