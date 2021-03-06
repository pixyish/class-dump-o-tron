//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MRDMediaRemoteClientDelegate.h"
#import "MRDXPCMessageHandling.h"

@class BKSApplicationStateMonitor, BKSSystemService, MRDAirPlayServer, MRDBrowsableContentServer, MRDMediaRemoteClient, MRDNowPlayingInfoServer, MRDRemoteControlServer, NSArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface MRDMediaRemoteServer : NSObject <MRDMediaRemoteClientDelegate, MRDXPCMessageHandling>
{
    NSObject<OS_xpc_object> *_listenerConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_systemServiceAvailabilityQueue;
    MRDNowPlayingInfoServer *_nowPlayingInfoServer;
    MRDAirPlayServer *_airplayServer;
    MRDRemoteControlServer *_remoteControlServer;
    MRDBrowsableContentServer *_browsableContentServer;
    MRDMediaRemoteClient *_overrideClient;
    NSMutableDictionary *_activeClients;
    NSMutableDictionary *_customOrigins;
    struct _MROrigin *_activeOrigin;
    int _nowPlayingApplicationDidChangeToken;
    int _nowPlayingApplicationIsPlayingDidChangeToken;
    NSMutableSet *_runAssertions;
    BKSSystemService *_systemService;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSString *_cachedFrontmostAppBundleID;
}

+ (id)server;
@property(readonly, nonatomic) MRDNowPlayingInfoServer *nowPlayingInfoServer; // @synthesize nowPlayingInfoServer=_nowPlayingInfoServer;
- (struct _MROrigin *)_createRestoredActiveOrigin;
- (void)_savePersistentActiveOrigin:(struct _MROrigin *)arg1;
- (_Bool)_internalMediaRemoteNotificationIsLegal:(id)arg1;
- (void)_postNowPlayingApplicationDidChange;
- (void)_postClientNotificationNamed:(id)arg1 withOrigin:(struct _MROrigin *)arg2 userInfo:(id)arg3;
- (void)_postClientNotificationNamed:(id)arg1 userInfoData:(const void *)arg2 length:(unsigned long long)arg3;
- (void)_postNowPlayingInfoDidChangeNotificationForOrigin:(struct _MROrigin *)arg1;
- (void)_postNowPlayingInfoDidChangeNotification;
- (void)_postNowPlayingAppIsPlayingDidChange;
- (void)_postAvailableOriginsDidChange;
- (void)_postActiveOriginDidChange;
- (int)_processIDForApplicationWithDisplayID:(id)arg1;
- (_Bool)_systemServiceIsAvailable;
- (struct _MROrigin *)_activeOrRegisteredOriginForUID:(int)arg1;
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOrigin:(struct _MROrigin *)arg2;
- (void)_setNowPlayingInfo:(id)arg1 forOrigin:(struct _MROrigin *)arg2 pid:(int)arg3 withArtworkData:(id)arg4 mergePolicy:(unsigned char)arg5;
- (void)mediaRemoteClientInvalidated:(id)arg1;
- (void)_handlePostNotificationMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleRemoveCustomOriginMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleRegisterCustomOriginMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetAvailableOriginsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetNowPlayingAppPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetNowPlayingAppPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetNowPlayingAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetNowPlayingAppDisplayNameMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetNowPlayingAppDisplayNameMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetNowPlayingAppPIDMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetNowPlayingAppDisplayIDMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetNowPlayingAppDisplayIDMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetNowPlayingAppOverrideMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetCanBeNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;
- (void)_clientDidOpenConnection:(id)arg1;
- (void)pickRouteWithUID:(id)arg1;
- (void)removeRunAssertion:(id)arg1;
- (id)addRunAssertionWithName:(id)arg1;
- (void)_nowPlayingAppIsPlayingDidChangeNotification:(id)arg1;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)_avSystemControllerServerDiedNotification:(id)arg1;
- (void)_unregisterOtherNotifications;
- (void)_registerOtherNotifications;
- (void)_unregisterAVSystemControllerNotifications;
- (void)_registerAVSystemControllerNotifications;
@property(readonly, nonatomic) MRDMediaRemoteClient *frontmostClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemMediaClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *localNowPlayingClient;
@property(retain, nonatomic) MRDMediaRemoteClient *overrideClient;
@property(readonly, nonatomic) _Bool nowPlayingClientIsPlaying;
@property(readonly, nonatomic) _Bool localNowPlayingApplicationIsPlaying;
@property(readonly, nonatomic) int localNowPlayingPIDForNowPlayingInfo;
- (id)localNowPlayingAppDisplayID;
@property(readonly, nonatomic) int localNowPlayingPID;
@property(readonly, nonatomic) NSArray *availableOrigins;
- (_Bool)removeCustomOrigin:(struct _MROrigin *)arg1;
- (_Bool)registerCustomOrigin:(struct _MROrigin *)arg1;
- (struct _MROrigin *)customOriginMatchingUniqueIdentifier:(unsigned int)arg1;
- (id)customOrigins;
- (void)_setActiveOrigin:(struct _MROrigin *)arg1 whileRestoringFromSavedState:(_Bool)arg2;
- (void)setActiveOrigin:(struct _MROrigin *)arg1;
@property(readonly, nonatomic) struct _MROrigin *activeOrigin;
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2;
- (struct _MROrigin *)availableOriginMatchingUniqueIdentifier:(int)arg1;
- (unsigned int)resolveContextualCommandForCurrentNowPlaying:(unsigned int)arg1;
- (id)allClients;
- (id)clientWithRegisteredCustomOrigin:(struct _MROrigin *)arg1;
- (id)clientForBundleIdentifier:(id)arg1;
- (id)clientForPID:(int)arg1;
- (void)removeClientForPID:(int)arg1;
- (void)addClient:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

