//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKActivityProxyRemoteViewController.h>

#import "GameCenterUIServiceViewControllerDelegate.h"

@class GKGame, GKGameCenterViewController, NSString;

@interface GKRemoteGameCenterViewController : GKActivityProxyRemoteViewController <GameCenterUIServiceViewControllerDelegate>
{
    _Bool _shouldDisplayChallengePlayButton;
    GKGameCenterViewController *_delegateWeak;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    long long _leaderboardTimeScope;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) _Bool shouldDisplayChallengePlayButton; // @synthesize shouldDisplayChallengePlayButton=_shouldDisplayChallengePlayButton;
@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(CDUnknownBlockType)arg1;
- (void)playPressedForChallenge:(id)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(id)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(id)arg1;
- (void)remoteControllerDidChangeViewState:(id)arg1;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (_Bool)_dismissSelfAfterGettingShouldFinish;
- (void)setAPIControllerFlags:(CDStruct_b31ca263)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)observedKeyPaths;
@property(nonatomic) GKGameCenterViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
