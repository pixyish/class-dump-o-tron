//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate.h"
#import "_UIRemoteViewController_TextEffectsOperatorInterface.h"
#import "_UIRemoteViewController_ViewControllerOperatorInterface.h"

@class BKSTouchDeliveryPolicyAssertion, NSArray, NSError, NSMutableArray, NSString, UIActionSheet, UIDimmingView, UIView, _UIAsyncInvocation, _UIRemoteView, _UIRemoteViewService, _UISizeTrackingView, _UITextEffectsRemoteView, _UITextServiceSession, _UIViewServiceInterface;

@interface _UIRemoteViewController : UIViewController <_UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate>
{
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    _UIRemoteViewService *_remoteViewService;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    unsigned long long _serviceRegisteredScrollToTopViewCount;
    int _applicationDeactivationReason;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    _Bool _fencingCurrentTransaction;
    int _preFencedCommitActionsLock;
    NSMutableArray *_preFencedCommitActions;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UITextEffectsRemoteView *_remoteKeyboardRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    _Bool _snapshotTextEffectsAfterRotation;
    unsigned int _serviceScreenDisplayID;
    _UIAsyncInvocation *_terminationInvocation;
    int _terminationErrorLock;
    NSError *_terminationError;
    UIActionSheet *_hostedActionSheet;
    _UITextServiceSession *_textServiceSession;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    long long _preferredStatusBarStyle;
    _Bool _prefersStatusBarHidden;
    _Bool _isFocusDeferred;
    NSString *_deferredDisplayUUID;
    unsigned int _deferredContextID;
    NSArray *_allowedNotifications;
    _Bool _serviceViewShouldShareTouchesWithHost;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}

+ (_Bool)__shouldAllowHostProcessToTakeFocus;
+ (_Bool)__shouldHostRemoteTextEffectsWindow;
+ (id)_requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 service:(id)arg4 connectionHandler:(CDUnknownBlockType)arg5;
+ (id)requestViewControllerWithService:(id)arg1 traitCollection:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)requestViewControllerWithService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
+ (id)requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 connectionHandler:(CDUnknownBlockType)arg4;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
@property(nonatomic) _Bool serviceViewShouldShareTouchesWithHost; // @synthesize serviceViewShouldShareTouchesWithHost=_serviceViewShouldShareTouchesWithHost;
@property(retain, nonatomic, setter=_setTouchDeliveryPolicyAssertion:) BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion; // @synthesize _touchDeliveryPolicyAssertion;
- (void)_snapshotAdjustedMediaTiming:(id)arg1;
- (id)_cancelTouchesForCurrentEventInHostedContent;
- (void)_prepareTouchDeliveryPolicy;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (void)__dismissTextServiceSessionAnimated:(_Bool)arg1;
- (void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)_initializeAccessibilityPortInformation;
- (void)_updateTintColor;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (id)_appearanceSource;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (void)viewDidInvalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSizeForServiceSize:(struct CGSize)arg1;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize)arg1 fenceSendRight:(id)arg2;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize)arg1 fenceSendRight:(id)arg2;
- (_Bool)_customizesForPresentationInPopover;
- (void)__viewServicePopoverDidSetUseToolbarShine:(_Bool)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize)arg1 animated:(_Bool)arg2 fenceSendRight:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__sendNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)__setViewServiceIsDisplayingPopover:(_Bool)arg1;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 hidden:(_Bool)arg2;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)_requiresKeyboardWindowWhenFirstResponder;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(_Bool)arg2 skipSelf:(_Bool)arg3;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(_Bool)arg3 skipSelf:(_Bool)arg4;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(_Bool)arg3 skipSelf:(_Bool)arg4;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_ignoreAppSupportedOrientations;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_setDeferred:(_Bool)arg1 forDisplayUUID:(id)arg2;
- (id)_clientDeferralProperties;
- (id)_hostDeferralProperties;
- (void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_addPreFencedCommitAction:(CDUnknownBlockType)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)__dismissActionSheetWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)__presentActionSheetFromYCoordinate:(double)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(long long)arg4 destructiveButtonIndex:(long long)arg5 style:(long long)arg6;
- (void)_firstResponderDidChange:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_serviceHasScrollToTopView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)dealloc;
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)disconnect;
- (id)_terminateWithError:(id)arg1;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)_updateTouchGrabbingView;
- (void)_applicationDidAddDeactivationReason:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_restoreTextEffectsRemoteView;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (long long)__getPreferredInterfaceOrientation;
- (_Bool)__shouldRemoteViewControllerFenceOperations;
- (id)_addAutoAllowedNotifications:(id)arg1;
- (id)allowedNotifications;
- (void)setAllowedNotifications:(id)arg1;
- (_Bool)inheritsSecurity;
- (void)setInheritsSecurity:(_Bool)arg1;
@property(readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property(readonly, nonatomic) int serviceProcessIdentifier;
@property(readonly, nonatomic) NSString *serviceBundleIdentifier;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (void)loadView;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceViewControllerProxy;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
