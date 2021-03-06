//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, SSXPCConnection;

@interface XPCClient : NSObject
{
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_entitlements;
    _Bool _legacyEntitlements;
    SSXPCConnection *_outputConnection;
    BOOL _appleSigned;
    unsigned int _applicationState;
    NSData *_auditTokenData;
    NSArray *_backgroundModes;
    NSMutableDictionary *_backgroundTasks;
    long long _clientType;
    NSString *_clientVersion;
    NSMutableIndexSet *_inflightMessages;
    NSObject<OS_xpc_object> *_inputConnection;
    BOOL _isNewsstandApp;
    int _pid;
    id _stateChangeObserver;
}

- (_Bool)_isNewsstandApp;
- (void)_invalidateBackgroundTaskAssertion:(struct SBSProcessAssertion *)arg1;
- (void)_handleOutputConnectionDisconnect;
@property(readonly, nonatomic) long long _clientType;
@property(readonly, nonatomic) unsigned int _applicationState;
- (id)_applicationBackgroundModes;
- (void)_applicationStateChanged:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)valueForEntitlement:(id)arg1;
@property(readonly) NSString *userAgent;
- (void)setOutputConnectionWithConnection:(id)arg1;
- (void)sendCoalescedMessageWithIdentifier:(unsigned long long)arg1;
@property(readonly) int processIdentifier;
@property(readonly) SSXPCConnection *outputConnection;
- (void)loadSpringBoardStateWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isNewsstandApp) _Bool newsstandApp;
@property(readonly, getter=isAppleSigned) _Bool appleSigned;
@property(readonly) _Bool hasEntitlements;
- (void)endBackgroundTaskWithIdentifier:(id)arg1;
- (id)copyInputConnection;
- (id)copyApplicationBackgroundModes;
@property(readonly) long long clientType;
@property(readonly) NSString *clientIdentifierHeader;
@property(readonly) NSString *clientIdentifier;
@property(readonly) _Bool canReceiveMessages;
- (id)beginBackgroundTaskWithReason:(unsigned int)arg1 expirationBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSData *auditTokenData;
@property(readonly) unsigned int applicationState;
- (void)dealloc;
- (id)initWithApplicationIdentifier:(id)arg1 isAppleSigned:(_Bool)arg2;
- (id)initWithInputConnection:(id)arg1;
- (id)init;
- (id)_initCommon;

@end

