//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"
#import "RCSSavedRecordingServiceProtocol.h"

@class AssetAccessSessionController, AssetExportController, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSXPCListener;

@interface SavedRecordingService : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate, RCSSavedRecordingServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_serviceSerialQueue;
    _Bool _isOrphanHandlingEnabled;
    NSXPCListener *_xpcListener;
    NSMutableArray *_closingSessions;
    NSMutableArray *_compositionAVURLsToFinalize;
    NSMutableDictionary *_compositionAVURLsDeferredAccessRequestBlocksByAVURL;
    NSCountedSet *_disabledOrphanedFragmentCleanupByCompositionAVURL;
    AssetAccessSessionController *_assetSesionController;
    AssetExportController *_assetExportController;
    NSObject<OS_dispatch_source> *_signalDispatchSource;
    NSMutableSet *_compositionAVURLsBeingExported;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleDebugSignal;
- (void)_tearDownSignalHandler;
- (void)_setupSignalHandler;
- (void)_handleXPCDisconnect:(id)arg1;
- (void)_removeDisabledOrphanCleanupAVURLsForConnection:(id)arg1;
- (void)_removeDisabledOrphanCleanupForCompositionAVURL:(id)arg1 xpcConnection:(id)arg2;
- (void)_addDisabledOrphanCleanupForCompositionAVURL:(id)arg1 xpcConnection:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_onServiceQueueAttemptToRunningDeferredWorkAfterClosingSession:(id)arg1;
- (id)_onQueue_composedAVURLsWithActiveSessionsOrScheduledWork;
- (void)_attemptOrphanedFragmentsCleanupForCompositionAVURL:(id)arg1 ignoredAccessSession:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_attemptFinalizationOfCompositionAVURL:(id)arg1 cacheWaveform:(_Bool)arg2 ignoredAccessSession:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_attemptToRunDeferredFinalizationOfCompositionAVURL:(id)arg1;
- (void)_onQueueCloseAccessSession:(id)arg1 normalTermination:(_Bool)arg2;
- (_Bool)_onServiceQueueHasActiveSessionsForCompositionAVURL:(id)arg1 ignoredAccessSession:(id)arg2;
- (_Bool)_onServiceQueueHasActiveExclusiveSessionForCompositionAVURL:(id)arg1 ignoredAccessSession:(id)arg2;
- (oneway void)_onServiceQueueOpenAccessSessionNamed:(id)arg1 compositionAVURL:(id)arg2 exclusive:(_Bool)arg3 xpcConnection:(id)arg4 accessSessionHandler:(CDUnknownBlockType)arg5;
- (void)_performOnServiceQueue:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)start;
- (oneway void)fetchExportingCompositionAVURLs:(CDUnknownBlockType)arg1;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (oneway void)disableOrphanHandlingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_onQueuePerformOrphanHandlingIfEnabled;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)endAccessSessionWithToken:(id)arg1;
- (oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(CDUnknownBlockType)arg2;
- (oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(_Bool)arg2 accessRequestHandler:(CDUnknownBlockType)arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(CDUnknownBlockType)arg2;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

