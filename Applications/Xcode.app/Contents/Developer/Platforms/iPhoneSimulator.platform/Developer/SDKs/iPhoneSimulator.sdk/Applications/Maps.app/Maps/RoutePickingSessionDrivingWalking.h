//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RoutePickingSession.h"

@class MNRoute, MainChromeDetailsBarContent, NSString, RoutePickingModeController;

__attribute__((visibility("hidden")))
@interface RoutePickingSessionDrivingWalking : NSObject <RoutePickingSession>
{
    id <RoutePickingDisplayableRoutes> _displayableRoutes;
    MainChromeDetailsBarContent *_detailsBarContent;
    MNRoute *_selectedRoute;
    RoutePickingModeController *_routePickingMode;
}

@property(nonatomic) RoutePickingModeController *routePickingMode; // @synthesize routePickingMode=_routePickingMode;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLimitingNumberOfRouteDisplayed) _Bool limitingNumberOfRouteDisplayed;
- (void)didFinishLoading;
- (void)willStartLoadingExpectingNewSession:(_Bool)arg1;
- (void)_updateDetailsBarIfPossible;
- (id)detailsBarContent;
- (long long)selectedVariant;
- (void)setSelectedRoute:(id)arg1;
- (void)_handleLocaleChange:(id)arg1;
- (void)layout;
- (void)resignCurrentWithAnimation:(id)arg1;
- (void)becomeCurrentWithAnimation:(id)arg1;
- (int)_currentTransportType;
- (id)_mainChrome;
- (id)initWithDisplayableRoutes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
