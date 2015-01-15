//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDelayedInvocation, DVTDispatchLock, DVTMapTable, DVTStackBacktrace, IBLiveViewsBundleBlueprintMap, IBMutableIdentityDictionary, NSCountedSet, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;

@interface IBLiveViewsManager : NSObject <DVTInvalidation>
{
    IBMutableIdentityDictionary *_sourceCodeClassProviderObservationTokensByProvider;
    IBMutableIdentityDictionary *_observingTokensByBlueprintProvider;
    DVTDelayedInvocation *_bundleRegenerationInvocation;
    NSMutableOrderedSet *_invalidatedFilePaths;
    NSCountedSet *_blueprintProviders;
    NSMutableSet *_classProviders;
    NSMutableDictionary *_attachedRemoteToolProxiesByIdentifier;
    DVTDispatchLock *_attachedRemoteToolProxiesLock;
    IBMutableIdentityDictionary *_imageRequestersByTargetRuntime;
    DVTMapTable *_buildOperationsToTrackers;
    BOOL _enabled;
    IBLiveViewsBundleBlueprintMap *_bundlesByBlueprintMap;
}

+ (id)managerForWorkspace:(id)arg1;
+ (id)managersDictionary;
+ (void)initialize;
@property(retain) IBLiveViewsBundleBlueprintMap *bundlesByBlueprintMap; // @synthesize bundlesByBlueprintMap=_bundlesByBlueprintMap;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)cachedRequestProxyAttachingIfNeededForTargetRuntime:(id)arg1 scaleFactor:(id)arg2 backgroundOperationIdentifier:(id)arg3 queue:(id)arg4 returningFailedLoadResult:(id *)arg5;
- (BOOL)_INSIDE_LOCK_loadLiveViewsBundleBuiltInstances:(id)arg1 inTool:(id)arg2 returningFailedLoadResult:(id *)arg3;
- (id)_INSIDE_LOCK_cachedRequestProxyAttachingIfNeededForTargetRuntime:(id)arg1 scaleFactor:(id)arg2 backgroundOperationIdentifier:(id)arg3 queue:(id)arg4;
- (id)imageRequesterForTargetRuntime:(id)arg1 scaleFactor:(id)arg2;
- (void)tearDownAllAttachedTools;
- (void)_INSIDE_LOCK_asynchronouslyLaunchToolsForIdentifiers:(id)arg1;
- (id)_INSIDE_LOCK_shutdownAllAttachedTools;
- (void)_mainThread_liveViewsBundle:(id)arg1 didFinishBuildingSuccessfullyToFilePath:(id)arg2 withBuildSettings:(id)arg3;
- (void)_mainThread_liveViewsBundle:(id)arg1 failedToBuildWithError:(id)arg2;
- (void)_rebuildInvalidBundles;
- (void)_mainThread_rebuildBlueprintsMappedToContainingWorkspaceWithoutUpdatingInvalidatedSources:(id)arg1;
- (void)_mainThread_rebuildBlueprint:(id)arg1 forSourceCodeCaseProvider:(id)arg2;
- (id)_additionalBuildSettingsForWorkspace:(id)arg1;
- (BOOL)_shouldParallelizeBuild;
- (BOOL)_shouldFindImplicitDependencies;
- (id)runDestinationForBlueprint:(id)arg1 executionEnvironment:(id)arg2;
- (id)preferredRunDestinationForPlatform:(id)arg1 givenValidRunDestinations:(id)arg2;
- (id)_mainThread_deterministicallyPickConfigurationNameForBlueprint:(id)arg1;
- (id)_mainThread_determineBlueprintsToRebuildMappedToContainingSourceCodeClassProviderForInvalidatedFilePaths:(id)arg1;
- (id)_mainThread_blueprintsContainingLiveClassesForProvider:(id)arg1;
- (id)_mainThread_filePathsContainingLiveClassesForProvider:(id)arg1;
- (void)invalidateBundleForDependenciesOfSourceFilesAtPaths:(id)arg1 forceRebuild:(BOOL)arg2;
- (void)invalidateBundleForClassNamed:(id)arg1 inDocument:(id)arg2 forceRebuild:(BOOL)arg3;
- (void)_scheduleBundleRegeneration;
- (id)validBuiltLiveViewsBundleInstancesForPlatform:(id)arg1;
- (id)liveViewsBundlesForPlatform:(id)arg1;
- (id)liveViewsBundleForClassNamed:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)_representingFilePathsDeclaringClassNamed:(id)arg1 inDocument:(id)arg2;
- (id)_filePathsImplementingClassNamed:(id)arg1 inDocument:(id)arg2;
- (void)_unregisterAllBundlesForBlueprintProvider:(id)arg1;
- (void)_unregisterBundlesForBlueprints:(id)arg1;
- (void)_registerBundle:(id)arg1 forBlueprint:(id)arg2;
- (id)_bundleForBlueprint:(id)arg1;
- (id)_blueprintForSourceFileAtPath:(id)arg1;
@property(nonatomic) BOOL automaticallyRefreshesInvalidBundles;
- (void)unregisterSourceCodeClassProvider:(id)arg1;
- (void)registerSourceCodeClassProvider:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
