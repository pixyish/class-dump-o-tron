//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AceObject<SAAceCommand>, NSError, NSString, NSURL, SASSpeechPartialResult, SASSpeechRecognized;

@protocol AFClientServiceDelegate <NSObject>
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingWillBegin;
- (oneway void)getBulletinContext:(void (^)(NSArray *))arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(NSURL *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)requestDidFailWithError:(NSError *)arg1 requestClass:(NSString *)arg2;
- (oneway void)requestDidReceiveCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *))arg2;
- (oneway void)requestDidFinish;
- (oneway void)shouldSpeakChanged:(_Bool)arg1;
@end

