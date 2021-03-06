//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODaemon, GEOProxyClient, NSMutableDictionary, NSObject<OS_xpc_object>, NSString;

@interface GEOPeer : NSObject
{
    GEODaemon *_daemon;
    NSObject<OS_xpc_object> *_connection;
    GEOProxyClient *_clientIdentifier;
    _Bool _preloading;
    _Bool _preloadingExclusively;
    NSString *_peerID;
    NSString *_debugIdentifier;
    NSMutableDictionary *_entitlementCache;
}

@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(nonatomic) _Bool preloadingExclusively; // @synthesize preloadingExclusively=_preloadingExclusively;
@property(nonatomic) _Bool preloading; // @synthesize preloading=_preloading;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (_Bool)hasEntitlement:(id)arg1;
@property(readonly, nonatomic) _Bool isLocationd;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) GEOProxyClient *clientIdentifier;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 daemon:(id)arg2;
- (void)_handleEvent:(id)arg1;

@end

