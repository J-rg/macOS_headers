//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OverlayContainerViewController.h"

#import "ControlContainerProtocol-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "MapViewResponderHandling-Protocol.h"
#import "PassThroughViewControllerDelegate-Protocol.h"
#import "StatusIndicatorDelegate-Protocol.h"

@class ActionCoordinator, CardAnimation, FloatingControlsViewController, MapGestureCardDismissalHelper, NSDate, NSString, PlatformController, StatusIndicatorManager, StatusIndicatorView, UIView;
@protocol DragGestureTracking, FloatingControlsPresentation, StackedChromeModeController><PresentationModeProtocol, UIScrollViewDelegate, _MKMapViewSuspendedEffectsToken;

__attribute__((visibility("hidden")))
@interface ControlContainerViewController : OverlayContainerViewController <PassThroughViewControllerDelegate, StatusIndicatorDelegate, MKMapViewDelegate, ControlContainerProtocol, MapViewResponderHandling>
{
    ActionCoordinator *_coordinator;
    MapGestureCardDismissalHelper *_cardDismissalHelper;
    id <_MKMapViewSuspendedEffectsToken> _mapSuspendedEffectsToken;
    struct CGRect _frameWhenEnteringBackground;
    id <StackedChromeModeController><PresentationModeProtocol> _mode;
    PlatformController *_platformController;
    FloatingControlsViewController *_floatingControlsViewController;
    StatusIndicatorManager *_statusIndicatorManager;
    StatusIndicatorView *_statusIndicatorView;
    NSDate *_dateCreated;
}

+ (Class)actionCoordinatorClass;
- (void).cxx_destruct;
@property(nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) StatusIndicatorView *statusIndicatorView; // @synthesize statusIndicatorView=_statusIndicatorView;
@property(retain, nonatomic) StatusIndicatorManager *statusIndicatorManager; // @synthesize statusIndicatorManager=_statusIndicatorManager;
@property(retain, nonatomic) FloatingControlsViewController *floatingControlsViewController; // @synthesize floatingControlsViewController=_floatingControlsViewController;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(readonly, nonatomic) ActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_coordinator;
@property(nonatomic) __weak id <StackedChromeModeController><PresentationModeProtocol> mode; // @synthesize mode=_mode;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)updateTopBannerViewWithTopBannerItems:(id)arg1;
- (double)_topBannerMaxHeight;
- (id)_topBannerViewHorizontalConstraints;
- (void)statusIndicatorTypeChanged:(unsigned long long)arg1;
- (void)_didTapStatusIndicatorView:(id)arg1;
- (void)_captureStatusIndicatorViewTapAction:(int)arg1;
- (void)setChromeHidden:(BOOL)arg1;
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)expandPlaceCardController;
- (void)mapView:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 calloutPrimaryActionTriggeredForLabelMarker:(id)arg2;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4;
- (void)mapView:(id)arg1 venueCreated:(id)arg2 venueCreatedBuilding:(id)arg3;
- (void)mapView:(id)arg1 didChangeDisplayedFloorOrdinal:(short)arg2 forVenue:(id)arg3;
- (void)mapView:(id)arg1 didChangeFocusedVenue:(id)arg2 focusedBuilding:(id)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (BOOL)mapViewShouldHandleTapToDeselect:(id)arg1;
- (BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;
- (void)mapView:(id)arg1 didChangeMuninAvailability:(long long)arg2;
- (void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)_updateFloatingControlsDidChangePitching:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_cancelAllOngoingGesturesBeingRecognizedInView:(id)arg1;
- (BOOL)shouldPassPoint:(struct CGPoint)arg1 withEvent:(id)arg2 inView:(id)arg3;
@property(readonly, nonatomic) UIView *passThroughView;
- (void)updateContentInjection;
- (void)_setUpdateContentInjectionBlockForController:(id)arg1;
- (void)replaceCurrentWithController:(id)arg1 moveToContaineeLayout:(unsigned long long)arg2;
- (void)removeControllersFromStack:(id)arg1;
- (void)presentController:(id)arg1 animated:(BOOL)arg2 useDefaultContaineeLayout:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)containerStyleManagerDidChangeStyle:(unsigned long long)arg1;
- (void)containerStyleManagerWillChangeStyle:(unsigned long long)arg1;
- (unsigned long long)originalLayoutForViewController:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)_controlContainerDimmingBehaviour;
- (BOOL)delaysFirstCardPresentation;
- (id)_mapViewIfCurrent;
- (void)contentHeightUpdatedWithValue:(double)arg1;
- (void)updateLayoutAnimated:(BOOL)arg1;
- (void)refreshControls;
- (void)viewLayoutMarginsDidChange;
- (void)setChromeViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)initWithPlatformController:(id)arg1;
- (void)resetState;
@property(readonly, nonatomic) id <FloatingControlsPresentation> floatingControlsPresentationController;
- (id)coordinator;
- (BOOL)_canShowWhileLocked;
@property(readonly, nonatomic) struct CGRect muninButtonFrame;
- (void)endSearch:(id)arg1;
- (void)beginSearch:(id)arg1;
- (void)initKeyCommand;

// Remaining properties
@property(readonly, nonatomic) double availableHeight;
@property(readonly, nonatomic) NSString *blurGroupName;
@property(readonly, nonatomic) double bottomSafeOffset;
@property(readonly) CardAnimation *cardHeightAnimation;
@property(readonly, nonatomic) unsigned long long containeeLayout;
@property(readonly, nonatomic) unsigned long long containerStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <DragGestureTracking> dragGestureTracker;
@property(readonly, nonatomic) id <UIScrollViewDelegate> dragScrollTracker;
@property(readonly, nonatomic) double edgePadding;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double leftSafeOffset;
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
@property(readonly, nonatomic) double rightSafeOffset;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double topEdgePadding;

@end

