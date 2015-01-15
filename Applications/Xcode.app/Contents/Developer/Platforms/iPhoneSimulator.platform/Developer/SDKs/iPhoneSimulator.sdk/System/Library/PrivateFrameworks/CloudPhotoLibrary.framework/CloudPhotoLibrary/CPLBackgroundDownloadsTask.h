//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSError, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_downloadTasks;
    _Bool _shouldStop;
    NSError *_badError;
    _Bool _hasResetQueue;
    unsigned long long _successfullyDownloadedResourcesCount;
    unsigned long long _failedDownloadedResourcesCount;
    unsigned long long _total;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)launch;
- (void)_downloadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_enqueueTasksLocked;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (void)_finishTaskLocked;
- (id)initWithEngineLibrary:(id)arg1;

@end
