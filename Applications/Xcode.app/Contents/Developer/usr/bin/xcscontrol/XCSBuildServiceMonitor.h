//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface XCSBuildServiceMonitor : NSObject
{
    BOOL _isInstallAssistantRunning;
    BOOL _buildServiceSessionRunning;
    NSTimer *_installAssistantTimer;
    NSTimer *_sessionTimer;
}

@property(nonatomic) BOOL buildServiceSessionRunning; // @synthesize buildServiceSessionRunning=_buildServiceSessionRunning;
@property(nonatomic) BOOL isInstallAssistantRunning; // @synthesize isInstallAssistantRunning=_isInstallAssistantRunning;
@property(retain, nonatomic) NSTimer *sessionTimer; // @synthesize sessionTimer=_sessionTimer;
@property(retain, nonatomic) NSTimer *installAssistantTimer; // @synthesize installAssistantTimer=_installAssistantTimer;
- (void).cxx_destruct;
- (void)monitorInstallAssistantTimerDidFire:(id)arg1;
- (BOOL)checkIsInstallAssistantRunning;
- (void)restartBuildServiceSession;
- (id)passwordForTestUserFromPrivateKeychainWithError:(id *)arg1;
- (int)copyUserRecordFromLocalNode:(id)arg1 record:(id *)arg2;
- (void)startBuildServiceSession;
- (BOOL)isBuildServiceProcessRunning;
- (unsigned int)cgSessionIDForTestUser;
- (BOOL)clientUserHasLoggedIn;
- (BOOL)isBuildServiceUserLoggedIn;
- (void)monitorBuildServiceSessionTimerDidFire:(id)arg1;
- (void)addTestUserLogoutRecord:(unsigned int)arg1;
- (void)stopBuildServiceSessionAndStopMonitoring:(BOOL)arg1;
- (void)startSessionTimer;
- (void)startMonitoringBuildServiceSession;

@end

