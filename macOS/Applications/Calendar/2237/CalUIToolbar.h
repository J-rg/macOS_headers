//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSToolbar.h>

#import "CalUITimeZonePickerDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"

@class CALMainController, CALViewSwitcherSegmentedControl, CalCalendarListButton, CalNotificationsButton, CalUITimeZonePicker, CalUIToolbarCalendarStatusItem, CalUIToolbarView, NSDictionary, NSLayoutConstraint, NSMutableArray, NSSearchField, NSSegmentedControl, NSString, NSToolbarItem, NSView;

@interface CalUIToolbar : NSToolbar <CalUITimeZonePickerDelegate, NSToolbarDelegate>
{
    BOOL _controlsEnabled;
    BOOL _timeZoneSupportEnabled;
    BOOL _timeZonePickerShouldBeExtra;
    NSSegmentedControl *_quickEventButton;
    NSMutableArray *_controls;
    CALMainController *_mainController;
    CalUIToolbarView *_mainToolbarView;
    CalCalendarListButton *_calendarListButton;
    NSView *_noboButtonContainer;
    CalNotificationsButton *_noboButton;
    CalUIToolbarCalendarStatusItem *_calendarStatusContainer;
    CALViewSwitcherSegmentedControl *_viewSwitcher;
    NSView *_timeZonePopUpButtonContainer;
    CalUITimeZonePicker *_timeZonePopUpButton;
    NSLayoutConstraint *_timeZoneButtonMaxWidthConstraint;
    NSToolbarItem *_timeZoneHiddenItem;
    NSLayoutConstraint *_timeZoneButtonContainerTrailingConstraint;
    NSSearchField *_searchField;
    NSDictionary *_viewMetrics;
}

+ (id)font;
@property(nonatomic) BOOL timeZonePickerShouldBeExtra; // @synthesize timeZonePickerShouldBeExtra=_timeZonePickerShouldBeExtra;
@property(nonatomic) BOOL timeZoneSupportEnabled; // @synthesize timeZoneSupportEnabled=_timeZoneSupportEnabled;
@property(nonatomic) BOOL controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(retain) NSDictionary *viewMetrics; // @synthesize viewMetrics=_viewMetrics;
@property(retain) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain) NSLayoutConstraint *timeZoneButtonContainerTrailingConstraint; // @synthesize timeZoneButtonContainerTrailingConstraint=_timeZoneButtonContainerTrailingConstraint;
@property(retain) NSToolbarItem *timeZoneHiddenItem; // @synthesize timeZoneHiddenItem=_timeZoneHiddenItem;
@property(retain) NSLayoutConstraint *timeZoneButtonMaxWidthConstraint; // @synthesize timeZoneButtonMaxWidthConstraint=_timeZoneButtonMaxWidthConstraint;
@property(retain) CalUITimeZonePicker *timeZonePopUpButton; // @synthesize timeZonePopUpButton=_timeZonePopUpButton;
@property(retain) NSView *timeZonePopUpButtonContainer; // @synthesize timeZonePopUpButtonContainer=_timeZonePopUpButtonContainer;
@property(retain) CALViewSwitcherSegmentedControl *viewSwitcher; // @synthesize viewSwitcher=_viewSwitcher;
@property(retain) CalUIToolbarCalendarStatusItem *calendarStatusContainer; // @synthesize calendarStatusContainer=_calendarStatusContainer;
@property(retain) CalNotificationsButton *noboButton; // @synthesize noboButton=_noboButton;
@property(retain) NSView *noboButtonContainer; // @synthesize noboButtonContainer=_noboButtonContainer;
@property(retain) CalCalendarListButton *calendarListButton; // @synthesize calendarListButton=_calendarListButton;
@property(retain) CalUIToolbarView *mainToolbarView; // @synthesize mainToolbarView=_mainToolbarView;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
@property(retain) NSMutableArray *controls; // @synthesize controls=_controls;
@property(retain) NSSegmentedControl *quickEventButton; // @synthesize quickEventButton=_quickEventButton;
- (void).cxx_destruct;
- (void)otherSelected:(CDUnknownBlockType)arg1;
- (void)timeZoneSelected:(id)arg1 updatePicker:(BOOL)arg2;
- (void)timeZoneSelected:(id)arg1;
- (void)selectTimeZone:(id)arg1 updatePicker:(BOOL)arg2;
- (void)selectTimeZone:(id)arg1;
- (void)updateTimeZoneViewStringSize;
- (void)updateTimeZoneViewMaxSize;
- (id)_formattedTitle:(id)arg1;
- (void)updateCalendarListButtonTitle:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)updateViewSwitcher;
- (void)adjustLayoutForToolbarView:(id)arg1;
- (void)updateNoBoButton;
- (id)notificationsButton;
- (void)setTimeZonePickerAsExtraToolbarItem:(BOOL)arg1;
- (BOOL)timeZonePickerIsExtraToolbarItem;
- (void)_showTimeZonePicker:(BOOL)arg1;
- (void)showErrorBadge:(BOOL)arg1;
- (void)showUpdatingIndicator:(BOOL)arg1;
- (void)updateKeyViewLoop;
- (id)primaryItemView;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

