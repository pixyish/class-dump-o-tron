//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUActivity.h>

@class PLPublishingAgent, UIViewController;

@interface PUPublishingActivity : PUActivity
{
    UIViewController *_referenceViewController;
    PLPublishingAgent *_currentAgent;
    double _startTime;
    double _endTime;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)_cleanup;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)_publishingAgentDidCancel:(id)arg1;
- (void)_publishingAgentDidStartPublishing:(id)arg1;
- (void)_showTrimViewController;
- (void)_showVideoTooLongAlert;
- (void)_showPublishingSheetInViewController:(id)arg1 remakeAfterPublish:(_Bool)arg2;
- (id)currentPublishingAgent;
- (id)publishingBundle;
- (void)_publishOverReferenceViewController;
- (void)dealloc;
- (id)init;

@end

